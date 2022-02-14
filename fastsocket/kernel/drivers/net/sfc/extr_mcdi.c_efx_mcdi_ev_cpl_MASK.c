
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int net_dev; } ;
struct efx_mcdi_iface {unsigned int seqno; unsigned int resprc; unsigned int resplen; int iface_lock; scalar_t__ credits; } ;


 unsigned int VAR_0 ;
 struct efx_mcdi_iface* FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_mcdi_iface*) ;
 int VAR_1 ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,unsigned int,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct efx_nic *VAR_2, unsigned int VAR_3,
       unsigned int VAR_4, unsigned int VAR_5)
{
 struct efx_mcdi_iface *VAR_6 = FUNC_0(VAR_2);
 bool VAR_7 = 0;

 FUNC_3(&VAR_6->iface_lock);

 if ((VAR_3 ^ VAR_6->seqno) & VAR_0) {
  if (VAR_6->credits)

   --VAR_6->credits;
  else
   FUNC_2(VAR_2, VAR_1, VAR_2->net_dev,
      "MC response mismatch tx seq 0x%x rx "
      "seq 0x%x\n", VAR_3, VAR_6->seqno);
 } else {
  VAR_6->resprc = VAR_5;
  VAR_6->resplen = VAR_4;

  VAR_7 = 1;
 }

 FUNC_4(&VAR_6->iface_lock);

 if (VAR_7)
  FUNC_1(VAR_6);
}
