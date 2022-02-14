
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {size_t dicBufSize; size_t dicPos; int * dic; } ;
typedef scalar_t__ SRes ;
typedef int ISzAlloc ;
typedef scalar_t__ ELzmaStatus ;
typedef int ELzmaFinishMode ;
typedef TYPE_1__ CLzmaDec ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int const*,unsigned int,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t,int const*,size_t*,int ,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

SRes FUNC_5(uint8_t *VAR_4, size_t *VAR_5, const uint8_t *VAR_6, size_t *VAR_7,
      const uint8_t *VAR_8, unsigned VAR_9, ELzmaFinishMode VAR_10,
      ELzmaStatus *VAR_11, ISzAlloc *VAR_12)
{
   CLzmaDec VAR_13;
   SRes VAR_14;
   size_t VAR_15 = *VAR_7;
   size_t VAR_16 = *VAR_5;
   *VAR_7 = *VAR_5 = 0;
   if (VAR_15 < VAR_1)
      return VAR_2;

   FUNC_1(&VAR_13);
   VAR_14 = FUNC_0(&VAR_13, VAR_8, VAR_9, VAR_12);
   if (VAR_14 != 0)
      return VAR_14;
   VAR_13.dic = VAR_4;
   VAR_13.dicBufSize = VAR_16;

   FUNC_4(&VAR_13);

   *VAR_7 = VAR_15;
   VAR_14 = FUNC_2(&VAR_13, VAR_16, VAR_6, VAR_7, VAR_10, VAR_11);

   if (VAR_14 == VAR_3 && *VAR_11 == VAR_0)
      VAR_14 = VAR_2;

   (*VAR_5) = VAR_13.dicPos;
   FUNC_3(&VAR_13, VAR_12);
   return VAR_14;
}
