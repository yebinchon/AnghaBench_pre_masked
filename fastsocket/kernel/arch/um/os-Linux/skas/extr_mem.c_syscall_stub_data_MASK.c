
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_id {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long* FUNC_0 (struct mm_id*,void*) ;
 int FUNC_1 (struct mm_id*,void**) ;
 int FUNC_2 (unsigned long*,unsigned long*,int) ;

long FUNC_3(struct mm_id * VAR_3,
         unsigned long *VAR_4, int VAR_5,
         void **VAR_6, void **VAR_7)
{
 unsigned long *VAR_8;
 int VAR_9 = 0;





 if ((((unsigned long) *VAR_6) & ~VAR_1) >=
    VAR_2 - (10 + VAR_5) * sizeof(long)) {
  VAR_9 = FUNC_1(VAR_3, VAR_6);

  if (VAR_9)
   return VAR_9;
 }

 VAR_8 = FUNC_0(VAR_3, *VAR_6);
 *VAR_6 = VAR_8;

 *VAR_8 = VAR_5 * sizeof(long);

 FUNC_2(VAR_8 + 1, VAR_4, VAR_5 * sizeof(long));

 *VAR_7 = (void *)(((unsigned long)(VAR_8 + 1) &
          ~VAR_1) + VAR_0);

 return 0;
}
