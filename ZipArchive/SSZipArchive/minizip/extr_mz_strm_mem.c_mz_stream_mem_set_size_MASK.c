
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ size; int * buffer; } ;
typedef TYPE_1__ mz_stream_mem ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int *,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_3(void *VAR_2, int32_t VAR_3)
{
    mz_stream_mem *VAR_4 = (mz_stream_mem *)VAR_2;
    int32_t VAR_5 = VAR_3;
    uint8_t *VAR_6 = ((void*)0);


    VAR_6 = (uint8_t *)FUNC_0((uint32_t)VAR_5);
    if (VAR_6 == ((void*)0))
        return VAR_0;

    if (VAR_4->buffer)
    {
        FUNC_2(VAR_6, VAR_4->buffer, VAR_4->size);
        FUNC_1(VAR_4->buffer);
    }

    VAR_4->buffer = VAR_6;
    VAR_4->size = VAR_5;
    return VAR_1;
}
