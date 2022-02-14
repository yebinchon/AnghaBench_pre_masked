
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viosrp_crq {scalar_t__ format; int IU_length; int IU_data_ptr; } ;
struct vio_port {int liobn; int riobn; } ;
struct srp_target {int dummy; } ;
struct iu_entry {TYPE_1__* sbuf; int remote_token; } ;
struct TYPE_2__ {int dma; } ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,long,...) ;
 long FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct iu_entry*) ;
 int FUNC_3 (struct iu_entry*) ;
 struct iu_entry* FUNC_4 (struct srp_target*) ;
 int FUNC_5 (struct iu_entry*) ;
 struct vio_port* FUNC_6 (struct srp_target*) ;

__attribute__((used)) static void FUNC_7(struct viosrp_crq *VAR_2, struct srp_target *VAR_3)
{
 struct vio_port *VAR_4 = FUNC_6(VAR_3);
 struct iu_entry *VAR_5;
 long VAR_6;
 int VAR_7 = 1;

 VAR_5 = FUNC_4(VAR_3);
 if (!VAR_5) {
  FUNC_0("Error getting IU from pool, %p\n", VAR_3);
  return;
 }

 VAR_5->remote_token = VAR_2->IU_data_ptr;

 VAR_6 = FUNC_1(VAR_2->IU_length, VAR_4->riobn,
     VAR_5->remote_token, VAR_4->liobn, VAR_5->sbuf->dma);

 if (VAR_6 != VAR_0) {
  FUNC_0("%ld transferring data error %p\n", VAR_6, VAR_5);
  goto out;
 }

 if (VAR_2->format == VAR_1)
  VAR_7 = FUNC_2(VAR_5);
 else
  VAR_7 = FUNC_3(VAR_5);
out:
 if (VAR_7)
  FUNC_5(VAR_5);
}
