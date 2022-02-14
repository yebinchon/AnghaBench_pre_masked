
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int split_stream; int buffered_stream; int file_stream; } ;
typedef TYPE_1__ mz_zip_reader ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*,int ) ;

int32_t FUNC_7(void *VAR_2, const char *VAR_3)
{
    mz_zip_reader *VAR_4 = (mz_zip_reader *)VAR_2;
    int32_t VAR_5 = VAR_0;


    FUNC_5(VAR_2);

    FUNC_2(&VAR_4->file_stream);
    FUNC_0(&VAR_4->buffered_stream);
    FUNC_4(&VAR_4->split_stream);

    FUNC_3(VAR_4->buffered_stream, VAR_4->file_stream);
    FUNC_3(VAR_4->split_stream, VAR_4->buffered_stream);

    VAR_5 = FUNC_1(VAR_4->split_stream, VAR_3, VAR_1);
    if (VAR_5 == VAR_0)
        VAR_5 = FUNC_6(VAR_2, VAR_4->split_stream);
    return VAR_5;
}
