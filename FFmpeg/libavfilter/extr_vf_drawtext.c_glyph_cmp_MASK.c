
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ fontsize; scalar_t__ code; } ;
typedef TYPE_1__ Glyph ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
    const Glyph *VAR_2 = VAR_0, *VAR_3 = VAR_1;
    int64_t VAR_4 = (int64_t)VAR_2->code - (int64_t)VAR_3->code;

    if (VAR_4 != 0)
         return VAR_4 > 0 ? 1 : -1;
    else
         return FUNC_0((int64_t)VAR_2->fontsize, (int64_t)VAR_3->fontsize);
}
