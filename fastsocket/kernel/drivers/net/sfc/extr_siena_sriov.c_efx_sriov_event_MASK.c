
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct efx_vf {int busy; unsigned int req_type; unsigned int req_seqno; int req_addr; int pci_name; int req; } ;
struct efx_nic {int net_dev; } ;
struct efx_channel {struct efx_nic* efx; } ;
typedef int efx_qword_t ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 scalar_t__ FUNC_2 (struct efx_nic*,unsigned int,struct efx_vf**,int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*,int ) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (int ,int *) ;
 int VAR_6 ;

void FUNC_7(struct efx_channel *VAR_7, efx_qword_t *VAR_8)
{
 struct efx_nic *VAR_9 = VAR_7->efx;
 struct efx_vf *VAR_10;
 unsigned VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_11 = FUNC_1(*VAR_8, VAR_1);


 FUNC_0(VAR_0 != 0);
 VAR_12 = FUNC_1(*VAR_8, VAR_3);
 VAR_13 = FUNC_1(*VAR_8, VAR_4);
 VAR_14 = FUNC_1(*VAR_8, VAR_2);

 FUNC_5(VAR_9, VAR_5, VAR_9->net_dev,
     "USR_EV event from qid %d seq 0x%x type %d data 0x%x\n",
     VAR_11, VAR_12, VAR_13, VAR_14);

 if (FUNC_2(VAR_9, VAR_11, &VAR_10, ((void*)0)))
  return;
 if (VAR_10->busy)
  goto error;

 if (VAR_13 == 131) {

  VAR_10->req_type = 131;
  VAR_10->req_seqno = VAR_12 + 1;
  VAR_10->req_addr = 0;
 } else if (VAR_12 != (VAR_10->req_seqno++ & 0xff) || VAR_13 != VAR_10->req_type)
  goto error;

 switch (VAR_10->req_type) {
 case 131:
 case 130:
 case 129:
  VAR_10->req_addr |= (u64)VAR_14 << (VAR_10->req_type << 4);
  ++VAR_10->req_type;
  return;

 case 128:
  VAR_10->req_addr |= (u64)VAR_14 << 48;
  VAR_10->req_type = 131;
  VAR_10->busy = 1;
  FUNC_6(VAR_6, &VAR_10->req);
  return;
 }

error:
 if (FUNC_3())
  FUNC_4(VAR_9, VAR_5, VAR_9->net_dev,
     "ERROR: Screaming VFDI request from %s\n",
     VAR_10->pci_name);

 VAR_10->req_type = 131;
 VAR_10->req_seqno = VAR_12 + 1;
}
