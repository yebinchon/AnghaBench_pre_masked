
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* Type ;
struct TYPE_5__ {int type; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(Type VAR_0, Type VAR_1) {
 return FUNC_2(VAR_0) && !FUNC_1(VAR_0->type)
     && FUNC_2(VAR_1) && !FUNC_1(VAR_1->type)
     && FUNC_0(FUNC_3(VAR_0->type), FUNC_3(VAR_1->type), 0);
}
