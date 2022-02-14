
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; } ;
struct TYPE_4__ {scalar_t__ disk_size; int mode; scalar_t__ current_disk; scalar_t__ number_disk; TYPE_1__ stream; } ;
typedef TYPE_2__ mz_stream_split ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_3(void *VAR_2, int32_t VAR_3)
{
    mz_stream_split *VAR_4 = (mz_stream_split *)VAR_2;
    int32_t VAR_5 = VAR_0;
    int32_t VAR_6 = VAR_0;

    VAR_6 = FUNC_0(VAR_4->stream.base);

    if ((VAR_4->disk_size == 0) && (VAR_4->mode & VAR_1))
    {
        if (VAR_6 != VAR_0)
            VAR_5 = FUNC_2(VAR_2, VAR_3);
    }
    else if ((VAR_3 != VAR_4->current_disk) || (VAR_6 != VAR_0))
    {
        VAR_5 = FUNC_1(VAR_2);
        if (VAR_5 == VAR_0)
        {
            VAR_5 = FUNC_2(VAR_2, VAR_3);
            if (VAR_5 == VAR_0)
                VAR_4->number_disk = VAR_3;
        }
    }

    return VAR_5;
}
