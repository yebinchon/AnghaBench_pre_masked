
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct iscsi_endpoint {struct cxgbi_endpoint* dd_data; } ;
struct cxgbi_sock {size_t port_id; TYPE_1__* cdev; } ;
struct cxgbi_hba {TYPE_2__* ndev; } ;
struct cxgbi_endpoint {struct cxgbi_hba* chba; struct cxgbi_sock* csk; } ;
struct Scsi_Host {int host_no; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int (* csk_init_act_open ) (struct cxgbi_sock*) ;struct cxgbi_hba** hbas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct iscsi_endpoint* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cxgbi_sock*) ;
 struct cxgbi_sock* FUNC_2 (struct sockaddr*) ;
 int FUNC_3 (struct cxgbi_sock*) ;
 int FUNC_4 (struct cxgbi_sock*) ;
 scalar_t__ FUNC_5 (struct cxgbi_sock*) ;
 int FUNC_6 (struct cxgbi_sock*) ;
 int FUNC_7 (struct cxgbi_sock*,int ) ;
 struct iscsi_endpoint* FUNC_8 (int) ;
 struct cxgbi_hba* FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct cxgbi_sock*) ;
 int FUNC_13 (struct cxgbi_sock*) ;

struct iscsi_endpoint *FUNC_14(struct Scsi_Host *VAR_6,
     struct sockaddr *VAR_7,
     int VAR_8)
{
 struct iscsi_endpoint *VAR_9;
 struct cxgbi_endpoint *VAR_10;
 struct cxgbi_hba *VAR_11 = ((void*)0);
 struct cxgbi_sock *VAR_12;
 int VAR_13 = -VAR_3;

 FUNC_10(1 << VAR_1 | 1 << VAR_2,
  "shost 0x%p, non_blocking %d, dst_addr 0x%p.\n",
  VAR_6, VAR_8, VAR_7);

 if (VAR_6) {
  VAR_11 = FUNC_9(VAR_6);
  if (!VAR_11) {
   FUNC_11("shost 0x%p, priv NULL.\n", VAR_6);
   goto err_out;
  }
 }

 VAR_12 = FUNC_2(VAR_7);
 if (FUNC_1(VAR_12))
  return (struct iscsi_endpoint *)VAR_12;
 FUNC_4(VAR_12);

 if (!VAR_11)
  VAR_11 = VAR_12->cdev->hbas[VAR_12->port_id];
 else if (VAR_11 != VAR_12->cdev->hbas[VAR_12->port_id]) {
  FUNC_11("Could not connect through requested host %u"
   "hba 0x%p != 0x%p (%u).\n",
   VAR_6->host_no, VAR_11,
   VAR_12->cdev->hbas[VAR_12->port_id], VAR_12->port_id);
  VAR_13 = -VAR_5;
  goto release_conn;
 }

 VAR_13 = FUNC_12(VAR_12);
 if (VAR_13)
  goto release_conn;

 FUNC_7(VAR_12, VAR_0);
 VAR_13 = VAR_12->cdev->csk_init_act_open(VAR_12);
 if (VAR_13)
  goto release_conn;

 if (FUNC_5(VAR_12)) {
  VAR_13 = -VAR_5;
  FUNC_11("csk 0x%p is closing.\n", VAR_12);
  goto release_conn;
 }

 VAR_9 = FUNC_8(sizeof(*VAR_10));
 if (!VAR_9) {
  VAR_13 = -VAR_4;
  FUNC_11("iscsi alloc ep, OOM.\n");
  goto release_conn;
 }

 VAR_10 = VAR_9->dd_data;
 VAR_10->csk = VAR_12;
 VAR_10->chba = VAR_11;

 FUNC_10(1 << VAR_1 | 1 << VAR_2,
  "ep 0x%p, cep 0x%p, csk 0x%p, hba 0x%p,%s.\n",
  VAR_9, VAR_10, VAR_12, VAR_11, VAR_11->ndev->name);
 return VAR_9;

release_conn:
 FUNC_6(VAR_12);
 FUNC_3(VAR_12);
err_out:
 return FUNC_0(VAR_13);
}
