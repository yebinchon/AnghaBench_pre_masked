
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * zfree; int * zalloc; void* avail_out; void* next_out; void* avail_in; int * next_in; } ;
typedef TYPE_1__ z_stream ;
typedef void* uInt ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, int VAR_4, void *VAR_5, int VAR_6)
{
    z_stream VAR_7;
    int VAR_8;

    VAR_7.next_in = (Bytef*)VAR_5;
    VAR_7.avail_in = (uInt)VAR_6;
    VAR_7.next_out = VAR_3;
    VAR_7.avail_out = (uInt)VAR_4;

    VAR_7.zalloc = ((void*)0);
    VAR_7.zfree = ((void*)0);

    VAR_8 = FUNC_2(&VAR_7, -15);
    if (VAR_8 != VAR_1) return VAR_8;

    VAR_8 = FUNC_0(&VAR_7, VAR_0);
    if (VAR_8 != VAR_2) {
        FUNC_1(&VAR_7);
        return VAR_8;
    }


    return FUNC_1(&VAR_7);
}
