
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int next_thread; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_2(uint64_t *VAR_1, uint64_t *VAR_2)
{
 int VAR_3;
 uint64_t VAR_4, VAR_5;

 VAR_3 = FUNC_1(FUNC_0()->next_thread, &VAR_4, &VAR_5);

 if (VAR_3 == VAR_0) {
  if (VAR_1 != ((void*)0))
   *VAR_1 = VAR_4;

  if (VAR_2 != ((void*)0))
   *VAR_2 = VAR_5;
 }

 return(VAR_3);
}
