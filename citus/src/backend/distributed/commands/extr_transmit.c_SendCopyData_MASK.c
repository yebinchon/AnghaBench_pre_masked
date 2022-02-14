
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int len; int data; } ;
struct TYPE_7__ {int member_3; int member_2; int member_1; int * member_0; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__* StringInfo ;


 int FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(StringInfo VAR_0)
{
 StringInfoData VAR_1 = { ((void*)0), 0, 0, 0 };

 FUNC_0(&VAR_1, 'd');
 FUNC_2(&VAR_1, VAR_0->data, VAR_0->len);
 FUNC_1(&VAR_1);
}
