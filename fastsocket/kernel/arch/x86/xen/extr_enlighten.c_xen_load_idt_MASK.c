
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trap_info {int dummy; } ;
struct desc_ptr {int dummy; } ;
typedef struct desc_ptr __get_cpu_var ;
typedef int DEFINE_SPINLOCK ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct trap_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct desc_ptr const*,struct trap_info*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(const struct desc_ptr *VAR_0)
{
 static DEFINE_SPINLOCK(VAR_1);
 static struct trap_info VAR_2[257];

 FUNC_2(&VAR_1);

 __get_cpu_var(VAR_3) = *VAR_0;

 FUNC_4(VAR_0, VAR_2);

 FUNC_5();
 if (FUNC_1(VAR_2))
  FUNC_0();

 FUNC_3(&VAR_1);
}
