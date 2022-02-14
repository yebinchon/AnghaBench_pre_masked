
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ entry_opened; int * compress_stream; int * crypt_stream; } ;
typedef TYPE_1__ mz_zip ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int **) ;

__attribute__((used)) static int32_t FUNC_1(void *VAR_1)
{
    mz_zip *VAR_2 = (mz_zip *)VAR_1;

    if (VAR_2->crypt_stream != ((void*)0))
        FUNC_0(&VAR_2->crypt_stream);
    VAR_2->crypt_stream = ((void*)0);
    if (VAR_2->compress_stream != ((void*)0))
        FUNC_0(&VAR_2->compress_stream);
    VAR_2->compress_stream = ((void*)0);

    VAR_2->entry_opened = 0;

    return VAR_0;
}
