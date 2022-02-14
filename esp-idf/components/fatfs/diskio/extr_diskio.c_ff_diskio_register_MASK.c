
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ff_diskio_impl_t ;
typedef size_t BYTE ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int const*,int) ;
 int ** VAR_1 ;

void FUNC_4(BYTE VAR_2, const ff_diskio_impl_t* VAR_3)
{
    FUNC_0(VAR_2 < VAR_0);

    if (VAR_1[VAR_2]) {
        ff_diskio_impl_t* VAR_4 = VAR_1[VAR_2];
        VAR_1[VAR_2] = ((void*)0);
        FUNC_1(VAR_4);
    }

    if (!VAR_3) {
        return;
    }

    ff_diskio_impl_t * VAR_5 = (ff_diskio_impl_t *)FUNC_2(sizeof(ff_diskio_impl_t));
    FUNC_0(VAR_5 != ((void*)0));
    FUNC_3(VAR_5, VAR_3, sizeof(ff_diskio_impl_t));
    VAR_1[VAR_2] = VAR_5;
}
