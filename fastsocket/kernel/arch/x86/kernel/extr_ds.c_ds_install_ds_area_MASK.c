
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ds_context {scalar_t__ task; int cpu; scalar_t__ ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ds_context *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = (unsigned long)VAR_3->ds;
 if (VAR_3->task) {
  FUNC_0();
  if (VAR_3->task == VAR_2)
   FUNC_4(VAR_0, VAR_4);
  FUNC_2(VAR_3->task, VAR_1);
  FUNC_1();
 } else
  FUNC_3(VAR_3->cpu, VAR_0,
        (u32)((u64)VAR_4), (u32)((u64)VAR_4 >> 32));
}
