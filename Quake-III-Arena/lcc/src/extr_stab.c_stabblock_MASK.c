
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ x; } ;
typedef scalar_t__ Symbol ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;

void FUNC_3(int VAR_6, int VAR_7, Symbol *VAR_8) {
 if (VAR_6 == '{')
  while (*VAR_8)
   FUNC_2(*VAR_8++);
 if (VAR_0 == &VAR_4)
  FUNC_1(".stabd 0x%x,0,%d\n", VAR_6 == '{' ? VAR_1 : VAR_2, VAR_7);
 else {
  int VAR_9 = FUNC_0(1);
  FUNC_1(".stabn 0x%x,0,%d,%s%d-%s\n", VAR_6 == '{' ? VAR_1 : VAR_2, VAR_7,
   VAR_5, VAR_9, VAR_3->x.name);
  FUNC_1("%s%d:\n", VAR_5, VAR_9);
 }
}
