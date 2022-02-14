
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct notifier_block {int dummy; } ;
struct TYPE_11__ {scalar_t__ reserved4; scalar_t__ reserved3; scalar_t__ reserved2; scalar_t__ reserved; int state; int command_id; void* op_code; } ;
struct TYPE_12__ {TYPE_1__ flush_cache; } ;
struct TYPE_13__ {TYPE_2__ cmd; void** cdb; int timeout; } ;
typedef TYPE_3__ ips_scb_t ;
struct TYPE_14__ {int max_cmds; int pcidev; TYPE_3__* scbs; int active; } ;
typedef TYPE_4__ ips_ha_t ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__* VAR_11 ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_3__*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct notifier_block *VAR_13, ulong VAR_14, void *VAR_15)
{
 ips_scb_t *VAR_16;
 ips_ha_t *VAR_17;
 int VAR_18;

 if ((VAR_14 != VAR_9) && (VAR_14 != VAR_7) &&
     (VAR_14 != VAR_8))
  return (VAR_5);

 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
  VAR_17 = (ips_ha_t *) VAR_11[VAR_18];

  if (!VAR_17)
   continue;

  if (!VAR_17->active)
   continue;


  VAR_16 = &VAR_17->scbs[VAR_17->max_cmds - 1];

  FUNC_2(VAR_17, VAR_16);

  VAR_16->timeout = VAR_10;
  VAR_16->cdb[0] = VAR_0;

  VAR_16->cmd.flush_cache.op_code = VAR_0;
  VAR_16->cmd.flush_cache.command_id = FUNC_0(VAR_17, VAR_16);
  VAR_16->cmd.flush_cache.state = VAR_3;
  VAR_16->cmd.flush_cache.reserved = 0;
  VAR_16->cmd.flush_cache.reserved2 = 0;
  VAR_16->cmd.flush_cache.reserved3 = 0;
  VAR_16->cmd.flush_cache.reserved4 = 0;

  FUNC_1(VAR_4, VAR_17->pcidev, "Flushing Cache.\n");


  if (FUNC_3(VAR_17, VAR_16, VAR_10, VAR_2) ==
      VAR_1)
   FUNC_1(VAR_4, VAR_17->pcidev,
       "Incomplete Flush.\n");
  else
   FUNC_1(VAR_4, VAR_17->pcidev,
       "Flushing Complete.\n");
 }

 return (VAR_6);
}
