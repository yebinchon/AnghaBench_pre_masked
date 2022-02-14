
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
struct TYPE_7__ {int type; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static Tree FUNC_5(int VAR_1) {
 Tree VAR_2 = FUNC_1(VAR_1);

 if (VAR_0 > 1 && FUNC_3(VAR_2->type))
  FUNC_4("%s used in a conditional expression\n",
   FUNC_2(VAR_2));
 return FUNC_0(VAR_2);
}
