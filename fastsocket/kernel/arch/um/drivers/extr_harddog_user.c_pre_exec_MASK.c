
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dog_data {int * close_me; int stdout; int stdin; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct dog_data *VAR_1 = VAR_0;

 FUNC_1(VAR_1->stdin, 0);
 FUNC_1(VAR_1->stdout, 1);
 FUNC_1(VAR_1->stdout, 2);
 FUNC_0(VAR_1->stdin);
 FUNC_0(VAR_1->stdout);
 FUNC_0(VAR_1->close_me[0]);
 FUNC_0(VAR_1->close_me[1]);
}
