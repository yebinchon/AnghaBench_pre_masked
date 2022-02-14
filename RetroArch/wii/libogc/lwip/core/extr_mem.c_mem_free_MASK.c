
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
struct mem {int used; int next; } ;
struct TYPE_3__ {int used; int err; } ;
struct TYPE_4__ {TYPE_1__ mem; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 struct mem* VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct mem*) ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;

void
FUNC_5(void *VAR_8)
{
  struct mem *VAR_9;

  if (VAR_8 == ((void*)0)) {
    FUNC_1(VAR_1 | VAR_0 | 2, ("mem_free(p == NULL) was called.\n"));
    return;
  }

  FUNC_3(VAR_5);

  FUNC_0("mem_free: legal memory", (u8_t *)VAR_8 >= (u8_t *)VAR_6 &&
    (u8_t *)VAR_8 < (u8_t *)VAR_7);

  if ((u8_t *)VAR_8 < (u8_t *)VAR_6 || (u8_t *)VAR_8 >= (u8_t *)VAR_7) {
    FUNC_1(VAR_1 | 3, ("mem_free: illegal memory\n"));



    FUNC_2(VAR_5);
    return;
  }
  VAR_9 = (struct mem *)((u8_t *)VAR_8 - VAR_2);

  FUNC_0("mem_free: mem->used", VAR_9->used);

  VAR_9->used = 0;

  if (VAR_9 < VAR_3) {
    VAR_3 = VAR_9;
  }





  FUNC_4(VAR_9);
  FUNC_2(VAR_5);
}
