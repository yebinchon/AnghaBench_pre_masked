
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap_pre_exec_data {int close_me; int stdout; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct tuntap_pre_exec_data *VAR_1 = VAR_0;

 FUNC_1(VAR_1->stdout, 1);
 FUNC_0(VAR_1->close_me);
}
