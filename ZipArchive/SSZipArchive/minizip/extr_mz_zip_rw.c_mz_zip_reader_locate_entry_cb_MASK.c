
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pattern_ignore_case; int pattern; } ;
typedef TYPE_1__ mz_zip_reader ;
struct TYPE_5__ {int filename; } ;
typedef TYPE_2__ mz_zip_file ;
typedef int int32_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int32_t FUNC_2(void *VAR_0, void *VAR_1, mz_zip_file *VAR_2)
{
    mz_zip_reader *VAR_3 = (mz_zip_reader *)VAR_1;
    int32_t VAR_4 = 0;
    FUNC_0(VAR_0);
    VAR_4 = FUNC_1(VAR_2->filename, VAR_3->pattern, VAR_3->pattern_ignore_case);
    return VAR_4;
}
