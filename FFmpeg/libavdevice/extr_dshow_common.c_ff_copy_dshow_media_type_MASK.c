
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * pbFormat; int * pUnk; int cbFormat; } ;
typedef TYPE_1__ AM_MEDIA_TYPE ;


 int * FUNC_0 (int ) ;
 long VAR_0 ;
 long VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;

long FUNC_2(AM_MEDIA_TYPE *VAR_2, const AM_MEDIA_TYPE *VAR_3)
{
    uint8_t *VAR_4 = ((void*)0);

    if (VAR_3->cbFormat) {
        VAR_4 = FUNC_0(VAR_3->cbFormat);
        if (!VAR_4)
            return VAR_0;
        FUNC_1(VAR_4, VAR_3->pbFormat, VAR_3->cbFormat);
    }

    *VAR_2 = *VAR_3;
    VAR_2->pUnk = ((void*)0);
    VAR_2->pbFormat = VAR_4;

    return VAR_1;
}
