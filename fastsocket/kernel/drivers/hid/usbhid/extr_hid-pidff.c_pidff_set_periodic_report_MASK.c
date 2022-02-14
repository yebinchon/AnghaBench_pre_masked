
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pidff_device {int * reports; int hid; TYPE_4__* set_periodic; TYPE_1__* block_load; } ;
struct TYPE_7__ {int period; int phase; int offset; int magnitude; } ;
struct TYPE_8__ {TYPE_2__ periodic; } ;
struct ff_effect {TYPE_3__ u; } ;
struct TYPE_9__ {int * value; } ;
struct TYPE_6__ {int * value; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pidff_device *VAR_7,
          struct ff_effect *VAR_8)
{
 VAR_7->set_periodic[VAR_0].value[0] =
  VAR_7->block_load[VAR_0].value[0];
 FUNC_1(&VAR_7->set_periodic[VAR_1],
    VAR_8->u.periodic.magnitude);
 FUNC_1(&VAR_7->set_periodic[VAR_2],
    VAR_8->u.periodic.offset);
 FUNC_0(&VAR_7->set_periodic[VAR_4], VAR_8->u.periodic.phase);
 VAR_7->set_periodic[VAR_3].value[0] = VAR_8->u.periodic.period;

 FUNC_2(VAR_7->hid, VAR_7->reports[VAR_5],
     VAR_6);

}
