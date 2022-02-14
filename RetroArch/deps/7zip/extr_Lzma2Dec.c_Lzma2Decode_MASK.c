
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {size_t dicBufSize; size_t dicPos; int * dic; } ;
struct TYPE_6__ {TYPE_2__ decoder; } ;
typedef scalar_t__ SRes ;
typedef int ISzAlloc ;
typedef scalar_t__ ELzmaStatus ;
typedef int ELzmaFinishMode ;
typedef TYPE_1__ CLzma2Dec ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,size_t,int const*,size_t*,int ,scalar_t__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*,int *,int,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

SRes FUNC_6(uint8_t *VAR_5, size_t *VAR_6, const uint8_t *VAR_7, size_t *VAR_8,
      uint8_t VAR_9, ELzmaFinishMode VAR_10, ELzmaStatus *VAR_11, ISzAlloc *VAR_12)
{
   CLzma2Dec VAR_13;
   SRes VAR_14;
   size_t VAR_15 = *VAR_6, VAR_16 = *VAR_8;
   uint8_t VAR_17[VAR_0];

   FUNC_0(&VAR_13);

   *VAR_6 = *VAR_8 = 0;
   *VAR_11 = VAR_2;
   VAR_13.decoder.dic = VAR_5;
   VAR_13.decoder.dicBufSize = VAR_15;

   FUNC_5(FUNC_2(VAR_9, VAR_17));
   FUNC_5(FUNC_3(&VAR_13.decoder, VAR_17, VAR_0, VAR_12));

   *VAR_8 = VAR_16;
   VAR_14 = FUNC_1(&VAR_13, VAR_15, VAR_7, VAR_8, VAR_10, VAR_11);
   *VAR_6 = VAR_13.decoder.dicPos;
   if (VAR_14 == VAR_4 && *VAR_11 == VAR_1)
      VAR_14 = VAR_3;

   FUNC_4(&VAR_13.decoder, VAR_12);
   return VAR_14;
}
