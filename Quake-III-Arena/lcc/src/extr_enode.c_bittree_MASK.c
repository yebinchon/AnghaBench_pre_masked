
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int Type ;
typedef TYPE_1__* Tree ;
struct TYPE_12__ {int type; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int,TYPE_1__*,TYPE_1__*) ;

Tree FUNC_5(int VAR_1, Tree VAR_2, Tree VAR_3) {
 Type VAR_4 = VAR_0;

 if (FUNC_2(VAR_2->type) && FUNC_2(VAR_3->type)) {
   VAR_4 = FUNC_0(VAR_2->type, VAR_3->type);
  VAR_2 = FUNC_1(VAR_2, VAR_4);
  VAR_3 = FUNC_1(VAR_3, VAR_4);
 } else
  FUNC_4(VAR_1, VAR_2, VAR_3);
 return FUNC_3(VAR_1, VAR_4, VAR_2, VAR_3);
}
