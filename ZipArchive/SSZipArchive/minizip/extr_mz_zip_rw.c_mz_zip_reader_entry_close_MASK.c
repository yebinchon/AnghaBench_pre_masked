
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int zip_handle; int hash_digest_size; int hash_algorithm; int * hash; } ;
typedef TYPE_1__ mz_zip_reader ;
typedef scalar_t__ int32_t ;
typedef int computed_hash ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (void*,int ,int *,int ) ;

int32_t FUNC_5(void *VAR_3)
{
    mz_zip_reader *VAR_4 = (mz_zip_reader *)VAR_3;
    int32_t VAR_5 = VAR_2;
    int32_t VAR_6 = VAR_2;

    int32_t VAR_7 = VAR_2;
    uint8_t VAR_8[VAR_1];
    uint8_t VAR_9[VAR_1];

    if (VAR_4->hash != ((void*)0))
    {
        FUNC_2(VAR_4->hash, VAR_8, sizeof(VAR_8));
        FUNC_1(&VAR_4->hash);

        VAR_7 = FUNC_4(VAR_3, VAR_4->hash_algorithm, VAR_9,
            VAR_4->hash_digest_size);

        if (VAR_7 == VAR_2)
        {

            if (FUNC_0(VAR_8, VAR_9, VAR_4->hash_digest_size) != 0)
                VAR_5 = VAR_0;
        }
    }


    VAR_6 = FUNC_3(VAR_4->zip_handle);
    if (VAR_5 == VAR_2)
        VAR_5 = VAR_6;
    return VAR_5;
}
