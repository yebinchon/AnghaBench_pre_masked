
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tss_struct {int dummy; } ;
struct thread_struct {int sp0; } ;
struct multicall_space {int mc; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct multicall_space FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct tss_struct *VAR_2,
    struct thread_struct *VAR_3)
{
 struct multicall_space VAR_4 = FUNC_1(0);
 FUNC_0(VAR_4.mc, VAR_1, VAR_3->sp0);
 FUNC_2(VAR_0);
}
