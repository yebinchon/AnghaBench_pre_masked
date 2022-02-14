
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ vec3_t ;


 int FUNC_0 (TYPE_1__,TYPE_1__,int) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,TYPE_1__) ;
 float FUNC_2 (TYPE_1__,TYPE_1__) ;
 int FUNC_3 (TYPE_1__,TYPE_1__) ;
 int FUNC_4 (TYPE_1__,int,TYPE_1__,TYPE_1__) ;
 int FUNC_5 (TYPE_1__) ;
 int FUNC_6 (TYPE_1__,int,int ,int ) ;
 int FUNC_7 (TYPE_1__,TYPE_1__,TYPE_1__) ;

void FUNC_8(vec3_t VAR_0, vec3_t VAR_1, int VAR_2, int VAR_3)
{
 vec3_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 = {0, 0, 1};
 float VAR_9;

 FUNC_7(VAR_1, VAR_0, VAR_4);
 FUNC_5(VAR_4);
 VAR_9 = FUNC_2(VAR_4, VAR_8);
 if (VAR_9 > 0.99 || VAR_9 < -0.99) FUNC_6(VAR_5, 1, 0, 0);
 else FUNC_1(VAR_4, VAR_8, VAR_5);

 FUNC_4(VAR_1, -6, VAR_4, VAR_6);
 FUNC_3(VAR_6, VAR_7);
 FUNC_4(VAR_6, 6, VAR_5, VAR_6);
 FUNC_4(VAR_7, -6, VAR_5, VAR_7);

 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_6, VAR_1, VAR_3);
 FUNC_0(VAR_7, VAR_1, VAR_3);
}
