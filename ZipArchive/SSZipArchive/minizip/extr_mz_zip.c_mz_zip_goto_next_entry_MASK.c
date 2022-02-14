
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ comment_size; scalar_t__ extrafield_size; scalar_t__ filename_size; } ;
struct TYPE_4__ {TYPE_1__ file_info; int cd_current_pos; } ;
typedef TYPE_2__ mz_zip ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*) ;

int32_t FUNC_1(void *VAR_2)
{
    mz_zip *VAR_3 = (mz_zip *)VAR_2;

    if (VAR_3 == ((void*)0))
        return VAR_0;

    VAR_3->cd_current_pos += (int64_t)VAR_1 + VAR_3->file_info.filename_size +
        VAR_3->file_info.extrafield_size + VAR_3->file_info.comment_size;

    return FUNC_0(VAR_2);
}
