
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct viosrp_crq {int valid; int reserved; int timeout; int status; int IU_data_ptr; int IU_length; int format; } ;
struct vio_port {TYPE_4__* dma_dev; int riobn; int liobn; } ;
struct srp_target {int dummy; } ;
struct iu_entry {int remote_token; TYPE_1__* sbuf; struct srp_target* target; } ;
struct TYPE_7__ {int tag; } ;
struct TYPE_8__ {TYPE_2__ rsp; } ;
struct TYPE_10__ {TYPE_3__ srp; } ;
struct TYPE_9__ {int unit_address; } ;
struct TYPE_6__ {int dma; } ;


 int FUNC_0 (char*,long) ;
 long FUNC_1 (int ,int ,int ,int ,int ) ;
 long FUNC_2 (int ,int ,int ) ;
 struct vio_port* FUNC_3 (struct srp_target*) ;
 TYPE_5__* FUNC_4 (struct iu_entry*) ;

__attribute__((used)) static int FUNC_5(struct iu_entry *VAR_0, uint64_t VAR_1, uint8_t VAR_2)
{
 struct srp_target *VAR_3 = VAR_0->target;
 struct vio_port *VAR_4 = FUNC_3(VAR_3);
 long VAR_5, VAR_6;
 union {
  struct viosrp_crq cooked;
  uint64_t raw[2];
 } VAR_7;


 VAR_5 = FUNC_1(VAR_1, VAR_4->liobn, VAR_0->sbuf->dma,
    VAR_4->riobn, VAR_0->remote_token);

 if (VAR_5)
  FUNC_0("Error %ld transferring data\n", VAR_5);

 VAR_7.cooked.valid = 0x80;
 VAR_7.cooked.format = VAR_2;
 VAR_7.cooked.reserved = 0x00;
 VAR_7.cooked.timeout = 0x00;
 VAR_7.cooked.IU_length = VAR_1;
 VAR_7.cooked.IU_data_ptr = FUNC_4(VAR_0)->srp.rsp.tag;

 if (VAR_5 == 0)
  VAR_7.cooked.status = 0x99;
 else
  VAR_7.cooked.status = 0x00;

 VAR_6 = FUNC_2(VAR_4->dma_dev->unit_address, VAR_7.raw[0], VAR_7.raw[1]);

 if (VAR_6) {
  FUNC_0("%ld sending response\n", VAR_6);
  return VAR_6;
 }

 return VAR_5;
}
