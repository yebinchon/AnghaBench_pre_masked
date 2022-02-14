
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attack_method {int func; int vector; } ;
typedef int ATTACK_VECTOR ;
typedef int ATTACK_FUNC ;


 struct attack_method* FUNC_0 (int,int) ;
 struct attack_method** VAR_0 ;
 int VAR_1 ;
 struct attack_method** FUNC_1 (struct attack_method**,int) ;

__attribute__((used)) static void FUNC_2(ATTACK_VECTOR VAR_2, ATTACK_FUNC VAR_3)
{
    struct attack_method *VAR_4 = FUNC_0(1, sizeof (struct attack_method));

    VAR_4->vector = VAR_2;
    VAR_4->func = VAR_3;

    VAR_0 = FUNC_1(VAR_0, (VAR_1 + 1) * sizeof (struct attack_method *));
    VAR_0[VAR_1++] = VAR_4;
}
