
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mz_zip_reader_progress_cb ;
struct TYPE_2__ {void* progress_userdata; int progress_cb; } ;
typedef TYPE_1__ mz_zip_reader ;



void FUNC_0(void *VAR_0, void *VAR_1, mz_zip_reader_progress_cb VAR_2)
{
    mz_zip_reader *VAR_3 = (mz_zip_reader *)VAR_0;
    VAR_3->progress_cb = VAR_2;
    VAR_3->progress_userdata = VAR_1;
}
