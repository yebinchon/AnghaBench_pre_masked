
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mz_zip_writer_password_cb ;
struct TYPE_2__ {void* password_userdata; int password_cb; } ;
typedef TYPE_1__ mz_zip_writer ;



void FUNC_0(void *VAR_0, void *VAR_1, mz_zip_writer_password_cb VAR_2)
{
    mz_zip_writer *VAR_3 = (mz_zip_writer *)VAR_0;
    VAR_3->password_cb = VAR_2;
    VAR_3->password_userdata = VAR_1;
}
