
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ reserved4; scalar_t__ reserved3; scalar_t__ reserved2; scalar_t__ reserved; int state; int command_id; void* op_code; } ;
struct TYPE_17__ {TYPE_1__ flush_cache; } ;
struct TYPE_19__ {TYPE_2__ cmd; void** cdb; int timeout; int scb_busaddr; } ;
typedef TYPE_4__ ips_scb_t ;
struct TYPE_18__ {int (* reset ) (TYPE_5__*) ;} ;
struct TYPE_20__ {int pcidev; TYPE_3__ func; } ;
typedef TYPE_5__ ips_ha_t ;
typedef int dma_addr_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 TYPE_4__* FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int ,int,TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(ips_ha_t *VAR_6)
{
 ips_scb_t *VAR_7;
 int VAR_8;
  int VAR_9;
 int VAR_10;
 dma_addr_t VAR_11;


 VAR_7 = FUNC_4(VAR_6->pcidev, sizeof(ips_scb_t), &VAR_11);
 if (VAR_7) {
     FUNC_3(VAR_7, 0, sizeof(ips_scb_t));
     FUNC_0(VAR_6, VAR_7);
     VAR_7->scb_busaddr = VAR_11;

     VAR_7->timeout = VAR_5;
     VAR_7->cdb[0] = VAR_0;

     VAR_7->cmd.flush_cache.op_code = VAR_0;
     VAR_7->cmd.flush_cache.command_id = VAR_1;
     VAR_7->cmd.flush_cache.state = VAR_2;
     VAR_7->cmd.flush_cache.reserved = 0;
     VAR_7->cmd.flush_cache.reserved2 = 0;
     VAR_7->cmd.flush_cache.reserved3 = 0;
     VAR_7->cmd.flush_cache.reserved4 = 0;

     VAR_8 = FUNC_2(VAR_6, VAR_7);

     if (VAR_8 == VAR_4) {
         VAR_9 = 60 * VAR_3;
         VAR_10 = 0;

         while ((VAR_9 > 0) && (!VAR_10)) {
     VAR_10 = FUNC_1(VAR_6);

            FUNC_7(1000);
            VAR_9--;
         }
        }
 }


 (*VAR_6->func.reset) (VAR_6);

 FUNC_5(VAR_6->pcidev, sizeof(ips_scb_t), VAR_7, VAR_11);
 return;
}
