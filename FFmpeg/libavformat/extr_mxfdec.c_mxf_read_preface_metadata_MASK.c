
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_2__ {int * fc; } ;
typedef TYPE_1__ MXFContext ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(void *VAR_1, AVIOContext *VAR_2, int VAR_3, int VAR_4, UID VAR_5, int64_t VAR_6)
{
    MXFContext *VAR_7 = VAR_1;
    AVFormatContext *VAR_8 = VAR_7->fc;
    int VAR_9;
    char *VAR_10 = ((void*)0);

    if (VAR_3 >= 0x8000 && (FUNC_0(VAR_5, VAR_0))) {
        FUNC_1(VAR_2, "project_name", VAR_10);
    }
    return 0;
}
