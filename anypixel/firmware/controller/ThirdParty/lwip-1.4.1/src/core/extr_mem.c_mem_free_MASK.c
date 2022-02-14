
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct mem {int used; scalar_t__ next; } ;
typedef scalar_t__ mem_size_t ;
typedef int mem_ptr_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 int * VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct mem* VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct mem*) ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

void
FUNC_11(void *VAR_13)
{
  struct mem *VAR_14;
  FUNC_2();

  if (VAR_13 == ((void*)0)) {
    FUNC_1(VAR_4 | VAR_2 | VAR_0, ("mem_free(p == NULL) was called.\n"));
    return;
  }
  FUNC_0("mem_free: sanity check alignment", (((mem_ptr_t)VAR_13) & (VAR_3-1)) == 0);

  FUNC_0("mem_free: legal memory", (u8_t *)VAR_13 >= (u8_t *)VAR_10 &&
    (u8_t *)VAR_13 < (u8_t *)VAR_11);

  if ((u8_t *)VAR_13 < (u8_t *)VAR_10 || (u8_t *)VAR_13 >= (u8_t *)VAR_11) {
    FUNC_7(VAR_7);
    FUNC_1(VAR_4 | VAR_1, ("mem_free: illegal memory\n"));

    FUNC_8(VAR_7);
    FUNC_6(VAR_6);
    FUNC_9(VAR_7);
    return;
  }

  FUNC_3();

  VAR_14 = (struct mem *)(void *)((u8_t *)VAR_13 - VAR_5);

  FUNC_0("mem_free: mem->used", VAR_14->used);

  VAR_14->used = 0;

  if (VAR_14 < VAR_8) {

    VAR_8 = VAR_14;
  }

  FUNC_5(VAR_12, VAR_14->next - (mem_size_t)(((u8_t *)VAR_14 - VAR_10)));


  FUNC_10(VAR_14);



  FUNC_4();
}
