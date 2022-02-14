
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nuids; int nlabels; int items; int interfaces; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static void FUNC_10(void) {
 FUNC_3(((void*)0));
 {
  int VAR_4 = FUNC_2(VAR_0->interfaces) + FUNC_0(VAR_0->items);
  if (VAR_4 != VAR_0->nuids - 1)
   FUNC_4(VAR_2, "?bogus uid count: have %d should have %d\n",
    VAR_4, VAR_0->nuids-1);
 }
 VAR_0->nlabels = FUNC_5(0);
 FUNC_9((int)(100*(FUNC_1(FUNC_7(VAR_1, ",v")), FUNC_8(FUNC_7(VAR_1, ",v")+2, ((void*)0)))
), VAR_3);
 FUNC_6(VAR_0, VAR_3);
}
