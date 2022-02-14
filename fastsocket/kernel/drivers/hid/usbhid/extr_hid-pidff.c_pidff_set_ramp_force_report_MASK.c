
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pidff_device {int * reports; int hid; TYPE_4__* set_ramp; TYPE_1__* block_load; } ;
struct TYPE_6__ {int end_level; int start_level; } ;
struct TYPE_7__ {TYPE_2__ ramp; } ;
struct ff_effect {TYPE_3__ u; } ;
struct TYPE_8__ {int * value; } ;
struct TYPE_5__ {int * value; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pidff_device *VAR_5,
     struct ff_effect *VAR_6)
{
 VAR_5->set_ramp[VAR_0].value[0] =
  VAR_5->block_load[VAR_0].value[0];
 FUNC_0(&VAR_5->set_ramp[VAR_2],
    VAR_6->u.ramp.start_level);
 FUNC_0(&VAR_5->set_ramp[VAR_1],
    VAR_6->u.ramp.end_level);
 FUNC_1(VAR_5->hid, VAR_5->reports[VAR_3],
     VAR_4);
}
