
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {scalar_t__ high; scalar_t__ mid; scalar_t__ low; int choice2; int choice; } ;
typedef TYPE_1__ CLenEnc ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (scalar_t__,size_t,size_t,size_t const*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static void FUNC_3(CLenEnc *VAR_5, uint32_t VAR_6, uint32_t VAR_7, uint32_t *VAR_8, const uint32_t *VAR_9)
{
  uint32_t VAR_10 = FUNC_0(VAR_5->choice);
  uint32_t VAR_11 = FUNC_1(VAR_5->choice);
  uint32_t VAR_12 = VAR_11 + FUNC_0(VAR_5->choice2);
  uint32_t VAR_13 = VAR_11 + FUNC_1(VAR_5->choice2);
  uint32_t VAR_14 = 0;
  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
  {
    if (VAR_14 >= VAR_7)
      return;
    VAR_8[VAR_14] = VAR_10 + FUNC_2(VAR_5->low + (VAR_6 << VAR_1), VAR_1, VAR_14, VAR_9);
  }
  for (; VAR_14 < VAR_2 + VAR_4; VAR_14++)
  {
    if (VAR_14 >= VAR_7)
      return;
    VAR_8[VAR_14] = VAR_12 + FUNC_2(VAR_5->mid + (VAR_6 << VAR_3), VAR_3, VAR_14 - VAR_2, VAR_9);
  }
  for (; VAR_14 < VAR_7; VAR_14++)
    VAR_8[VAR_14] = VAR_13 + FUNC_2(VAR_5->high, VAR_0, VAR_14 - VAR_2 - VAR_4, VAR_9);
}
