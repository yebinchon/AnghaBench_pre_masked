
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n_fatent; int csize; size_t ssize; } ;
typedef TYPE_1__ FATFS ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t*,TYPE_1__**) ;

__attribute__((used)) static void FUNC_2(size_t* VAR_1, size_t* VAR_2)
{
    FATFS *VAR_3;
    size_t VAR_4;
    int VAR_5 = FUNC_1("0:", &VAR_4, &VAR_3);
    FUNC_0(VAR_5 == VAR_0);
    size_t VAR_6 = (VAR_3->n_fatent - 2) * VAR_3->csize;
    size_t VAR_7 = VAR_4 * VAR_3->csize;


    if (VAR_1 != ((void*)0)) {
        *VAR_1 = VAR_6 * VAR_3->ssize;
    }
    if (VAR_2 != ((void*)0)) {
        *VAR_2 = VAR_7 * VAR_3->ssize;
    }
}
