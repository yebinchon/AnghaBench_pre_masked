
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pidff_device {int * reports; int hid; TYPE_4__* set_constant; TYPE_3__* block_load; } ;
struct TYPE_5__ {int level; } ;
struct TYPE_6__ {TYPE_1__ constant; } ;
struct ff_effect {TYPE_2__ u; } ;
struct TYPE_8__ {int * value; } ;
struct TYPE_7__ {int * value; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pidff_device *VAR_4,
         struct ff_effect *VAR_5)
{
 VAR_4->set_constant[VAR_0].value[0] =
  VAR_4->block_load[VAR_0].value[0];
 FUNC_0(&VAR_4->set_constant[VAR_1],
    VAR_5->u.constant.level);

 FUNC_1(VAR_4->hid, VAR_4->reports[VAR_2],
     VAR_3);
}
