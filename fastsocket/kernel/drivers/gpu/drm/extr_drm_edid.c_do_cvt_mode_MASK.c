
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct detailed_non_pixel {scalar_t__ type; } ;
struct TYPE_2__ {struct detailed_non_pixel other_data; } ;
struct detailed_timing {TYPE_1__ data; } ;
struct detailed_mode_closure {int connector; int modes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct detailed_timing*) ;

__attribute__((used)) static void
FUNC_1(struct detailed_timing *VAR_1, void *VAR_2)
{
 struct detailed_mode_closure *VAR_3 = VAR_2;
 struct detailed_non_pixel *VAR_4 = &VAR_1->data.other_data;

 if (VAR_4->type == VAR_0)
  VAR_3->modes += FUNC_0(VAR_3->connector, VAR_1);
}
