
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int mem_stream; } ;
typedef TYPE_1__ mz_zip_reader ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*,int ) ;

int32_t FUNC_8(void *VAR_4, uint8_t *VAR_5, int32_t VAR_6, uint8_t VAR_7)
{
    mz_zip_reader *VAR_8 = (mz_zip_reader *)VAR_4;
    int32_t VAR_9 = VAR_0;

    FUNC_6(VAR_4);

    FUNC_0(&VAR_8->mem_stream);

    if (VAR_7)
    {
        FUNC_4(VAR_8->mem_stream, VAR_6);
        FUNC_1(VAR_8->mem_stream, ((void*)0), VAR_1);
        FUNC_5(VAR_8->mem_stream, VAR_5, VAR_6);
        FUNC_2(VAR_8->mem_stream, 0, VAR_3);
    }
    else
    {
        FUNC_1(VAR_8->mem_stream, ((void*)0), VAR_2);
        FUNC_3(VAR_8->mem_stream, VAR_5, VAR_6);
    }

    if (VAR_9 == VAR_0)
        VAR_9 = FUNC_7(VAR_4, VAR_8->mem_stream);

    return VAR_9;
}
