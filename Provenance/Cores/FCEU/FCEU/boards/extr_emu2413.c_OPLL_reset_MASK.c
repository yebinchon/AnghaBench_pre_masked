
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32 ;
typedef int int32 ;
struct TYPE_4__ {scalar_t__ oplltime; void* opllstep; void* realstep; scalar_t__* key_status; int * slot; scalar_t__ mask; scalar_t__ am_phase; scalar_t__ pm_phase; scalar_t__ out; scalar_t__ adr; } ;
typedef TYPE_1__ OPLL ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(OPLL * VAR_2) {
 int32 VAR_3;

 if (!VAR_2)
  return;

 VAR_2->adr = 0;
 VAR_2->out = 0;

 VAR_2->pm_phase = 0;
 VAR_2->am_phase = 0;

 VAR_2->mask = 0;

 for (VAR_3 = 0; VAR_3 < 12; VAR_3++)
  FUNC_0(&VAR_2->slot[VAR_3], VAR_3 % 2);

 for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
  VAR_2->key_status[VAR_3] = 0;

 }

 for (VAR_3 = 0; VAR_3 < 0x40; VAR_3++)
  FUNC_1(VAR_2, VAR_3, 0);

 VAR_2->realstep = (uint32)((1 << 31) / VAR_1);
 VAR_2->opllstep = (uint32)((1 << 31) / (VAR_0 / 72));
 VAR_2->oplltime = 0;
}
