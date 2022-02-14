
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ unzFile ;
struct TYPE_4__ {scalar_t__ compression_method; scalar_t__ compressed_size; } ;
typedef TYPE_1__ mz_zip_file ;
struct TYPE_5__ {scalar_t__ total_out; scalar_t__ entry_pos; int handle; } ;
typedef TYPE_2__ mz_compat ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (void*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__**) ;
 scalar_t__ FUNC_2 (int ,void**) ;

int FUNC_3(unzFile VAR_8, int64_t VAR_9, int VAR_10)
{
    mz_compat *VAR_11 = (mz_compat *)VAR_8;
    mz_zip_file *VAR_12 = ((void*)0);
    int64_t VAR_13 = 0;
    int32_t VAR_14 = VAR_1;
    void *VAR_15 = ((void*)0);

    if (VAR_11 == ((void*)0))
        return VAR_7;
    VAR_14 = FUNC_1(VAR_11->handle, &VAR_12);
    if (VAR_14 != VAR_1)
        return VAR_14;
    if (VAR_12->compression_method != VAR_0)
        return VAR_6;

    if (VAR_10 == VAR_5)
        VAR_13 = VAR_9;
    else if (VAR_10 == VAR_3)
        VAR_13 = VAR_11->total_out + VAR_9;
    else if (VAR_10 == VAR_4)
        VAR_13 = (int64_t)VAR_12->compressed_size + VAR_9;
    else
        return VAR_7;

    if (VAR_13 > (int64_t)VAR_12->compressed_size)
        return VAR_7;

    VAR_14 = FUNC_2(VAR_11->handle, &VAR_15);
    if (VAR_14 == VAR_1)
        VAR_14 = FUNC_0(VAR_15, VAR_11->entry_pos + VAR_13, VAR_2);
    if (VAR_14 == VAR_1)
        VAR_11->total_out = VAR_13;
    return VAR_14;
}
