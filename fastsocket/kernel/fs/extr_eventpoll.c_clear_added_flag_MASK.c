
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tfile_check {int count; TYPE_1__** tfile_arr; } ;
struct TYPE_2__ {scalar_t__ added; } ;



__attribute__((used)) static void FUNC_0(struct tfile_check *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
  VAR_0->tfile_arr[VAR_1]->added = 0;
}
