
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
struct mem {scalar_t__ next; scalar_t__ prev; scalar_t__ used; } ;
typedef scalar_t__ mem_size_t ;
struct TYPE_3__ {int used; } ;
struct TYPE_4__ {TYPE_1__ mem; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct mem*) ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;

void *
FUNC_5(void *VAR_9, mem_size_t VAR_10)
{
  mem_size_t VAR_11;
  mem_size_t VAR_12, VAR_13;
  struct mem *VAR_14, *VAR_15;



  if ((VAR_10 % VAR_0) != 0) {
   VAR_10 += VAR_0 - ((VAR_10 + VAR_4) % VAR_0);
  }

  if (VAR_10 > VAR_2) {
    return ((void*)0);
  }

  FUNC_3(VAR_6);

  FUNC_0("mem_realloc: legal memory", (u8_t *)VAR_9 >= (u8_t *)VAR_7 &&
   (u8_t *)VAR_9 < (u8_t *)VAR_8);

  if ((u8_t *)VAR_9 < (u8_t *)VAR_7 || (u8_t *)VAR_9 >= (u8_t *)VAR_8) {
    FUNC_1(VAR_1 | 3, ("mem_realloc: illegal memory\n"));
    return VAR_9;
  }
  VAR_14 = (struct mem *)((u8_t *)VAR_9 - VAR_4);

  VAR_12 = (u8_t *)VAR_14 - VAR_7;

  VAR_11 = VAR_14->next - VAR_12 - VAR_4;




  if (VAR_10 + VAR_4 + VAR_3 < VAR_11) {
    VAR_13 = VAR_12 + VAR_4 + VAR_10;
    VAR_15 = (struct mem *)&VAR_7[VAR_13];
    VAR_15->used = 0;
    VAR_15->next = VAR_14->next;
    VAR_15->prev = VAR_12;
    VAR_14->next = VAR_13;
    if (VAR_15->next != VAR_2) {
      ((struct mem *)&VAR_7[VAR_15->next])->prev = VAR_13;
    }

    FUNC_4(VAR_15);
  }
  FUNC_2(VAR_6);
  return VAR_9;
}
