
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_3__ {uintptr_t kernel_stack; } ;


 int FUNC_0 (uintptr_t*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 () ;
 uintptr_t VAR_0 ;

uint32_t __attribute__((noinline,not_tail_called))
FUNC_3(uintptr_t *VAR_1, uint32_t VAR_2, void *VAR_3)
{
 thread_t VAR_4 = FUNC_2();
 uintptr_t *VAR_5;
 uint32_t VAR_6 = 0;
 uintptr_t VAR_7, VAR_8;
 bool VAR_9;

 FUNC_1(VAR_1 != ((void*)0));
 FUNC_1(VAR_2 > 0);

 VAR_5 = VAR_3;
 VAR_8 = VAR_4->kernel_stack;
 VAR_7 = VAR_8 + VAR_0;





 VAR_9 = (((uintptr_t)(VAR_5) >= (uintptr_t)VAR_8) && ((uintptr_t)(VAR_5) < (uintptr_t)VAR_7));

 if (!VAR_9) {
  VAR_5 = ((void*)0);
 }

 while (VAR_5 != ((void*)0) && VAR_6 < VAR_2) {
  uintptr_t *VAR_10 = (uintptr_t *)*VAR_5;
  uintptr_t VAR_11 = *(VAR_5 + 1);






  VAR_9 = (((uintptr_t)(VAR_10) >= (uintptr_t)VAR_8) && ((uintptr_t)(VAR_10) < (uintptr_t)VAR_7));

  if (VAR_10 == ((void*)0) || !VAR_9)
  {
   break;
  }

  VAR_1[VAR_6++] = VAR_11;


  if (VAR_10 <= VAR_5) {
   break;
  }
  VAR_5 = VAR_10;
 }

 return VAR_6;

}
