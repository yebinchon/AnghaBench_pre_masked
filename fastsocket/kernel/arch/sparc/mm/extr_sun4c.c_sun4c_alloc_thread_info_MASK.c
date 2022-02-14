
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union task_union {int dummy; } task_union ;
struct thread_info {int dummy; } ;


 unsigned long FUNC_0 (int) ;
 union task_union* VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (void*,int ,unsigned long) ;
 union task_union** VAR_6 ;
 int FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 int VAR_7 ;
 int FUNC_8 (unsigned long,int ) ;

__attribute__((used)) static struct thread_info *FUNC_9(void)
{
 unsigned long VAR_8, VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_1, VAR_4);
 if (!VAR_9)
  return ((void*)0);

 for (VAR_10 = VAR_7; VAR_10 < VAR_2; VAR_10++)
  if (VAR_6[VAR_10] == VAR_0)
   break;
 if (VAR_10 == VAR_2) {
  FUNC_3(VAR_9, VAR_4);
  return ((void*)0);
 }
 if (VAR_10 >= VAR_7)
  VAR_7 = VAR_10 + 1;

 VAR_8 = FUNC_0(VAR_10);
 VAR_6[VAR_10] = (union task_union *) VAR_8;
 if(FUNC_7(VAR_8) == VAR_5)
  FUNC_4(VAR_8);




 FUNC_6(VAR_9);
 FUNC_6(VAR_9 + VAR_3);

 FUNC_8(VAR_8, FUNC_1(VAR_9));
 FUNC_8(VAR_8 + VAR_3, FUNC_1(VAR_9 + VAR_3));





 return (struct thread_info *) VAR_8;
}
