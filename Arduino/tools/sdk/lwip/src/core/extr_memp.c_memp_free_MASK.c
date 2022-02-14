
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct memp {struct memp* next; } ;
typedef size_t memp_t ;
typedef int mem_ptr_t ;


 int FUNC_0 (char*,int) ;
 int * VAR_0 ;
 int FUNC_1 (int ,size_t) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct memp*,size_t) ;
 int FUNC_7 (struct memp*,size_t) ;
 int FUNC_8 () ;
 struct memp** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_9(memp_t VAR_5, void *VAR_6)
{
  struct memp *VAR_7;
  FUNC_2(VAR_3);

  if (VAR_6 == ((void*)0)) {
    return;
  }
  FUNC_0("memp_free: mem properly aligned",
                ((mem_ptr_t)VAR_6 % VAR_1) == 0);

  VAR_7 = (struct memp *)(void *)((u8_t*)VAR_6 - VAR_0);

  FUNC_3(VAR_3);
  FUNC_1(VAR_4, VAR_5);

  VAR_7->next = VAR_2[VAR_5];
  VAR_2[VAR_5] = VAR_7;





  FUNC_4(VAR_3);
}
