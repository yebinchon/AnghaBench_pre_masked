
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entry_scanned; int file_info_stream; int file_info; int cd_stream; int cd_current_pos; } ;
typedef TYPE_1__ mz_zip ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int ) ;

__attribute__((used)) static int32_t FUNC_3(void *VAR_4)
{
    mz_zip *VAR_5 = (mz_zip *)VAR_4;
    int32_t VAR_6 = VAR_0;

    if (VAR_5 == ((void*)0))
        return VAR_1;

    VAR_5->entry_scanned = 0;

    FUNC_1(VAR_5->cd_stream, VAR_3, -1);

    VAR_6 = FUNC_0(VAR_5->cd_stream, VAR_5->cd_current_pos, VAR_2);
    if (VAR_6 == VAR_0)
        VAR_6 = FUNC_2(VAR_5->cd_stream, 0, &VAR_5->file_info, VAR_5->file_info_stream);
    if (VAR_6 == VAR_0)
        VAR_5->entry_scanned = 1;
    return VAR_6;
}
