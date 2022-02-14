
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; scalar_t__ size; scalar_t__ limit; int grow_size; scalar_t__ position; } ;
typedef TYPE_1__ mz_stream_mem ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (void*,int ) ;

int32_t FUNC_2(void *VAR_2, const char *VAR_3, int32_t VAR_4)
{
    mz_stream_mem *VAR_5 = (mz_stream_mem *)VAR_2;
    int32_t VAR_6 = VAR_0;

    FUNC_0(VAR_3);

    VAR_5->mode = VAR_4;
    VAR_5->limit = 0;
    VAR_5->position = 0;

    if (VAR_5->mode & VAR_1)
        VAR_6 = FUNC_1(VAR_2, VAR_5->grow_size);
    else
        VAR_5->limit = VAR_5->size;

    return VAR_6;
}
