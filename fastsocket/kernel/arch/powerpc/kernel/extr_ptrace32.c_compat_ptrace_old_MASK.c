
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int compat_long_t ;


 long VAR_0 ;


 int FUNC_0 (long) ;
 long FUNC_1 (struct task_struct*,int ,int ,int ,int,int ) ;
 long FUNC_2 (struct task_struct*,int ,int ,int ,int,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static long FUNC_4(struct task_struct *VAR_2, long VAR_3,
         long VAR_4, long VAR_5)
{
 switch (VAR_3) {
 case 129:
  return FUNC_2(VAR_2,
        FUNC_3(VAR_1), 0,
        0, 32 * sizeof(compat_long_t),
        FUNC_0(VAR_5));

 case 128:
  return FUNC_1(VAR_2,
          FUNC_3(VAR_1), 0,
          0, 32 * sizeof(compat_long_t),
          FUNC_0(VAR_5));
 }

 return -VAR_0;
}
