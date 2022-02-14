
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* link; } ;
typedef TYPE_1__* List ;



int FUNC_0(List VAR_0) {
 int VAR_1 = 0;

 if (VAR_0) {
  List VAR_2 = VAR_0;
  do
   VAR_1++;
  while ((VAR_2 = VAR_2->link) != VAR_0);
 }
 return VAR_1;
}
