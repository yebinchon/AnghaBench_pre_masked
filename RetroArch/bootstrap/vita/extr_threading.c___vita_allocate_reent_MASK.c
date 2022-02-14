
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reent_for_thread {scalar_t__ thread_id; } ;


 int VAR_0 ;
 struct reent_for_thread* VAR_1 ;

__attribute__((used)) static inline struct reent_for_thread *FUNC_0(void)
{
 int VAR_2;
 struct reent_for_thread *VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  if (VAR_1[VAR_2].thread_id == 0) {
   VAR_3 = &VAR_1[VAR_2];
   break;
  }

 return VAR_3;
}
