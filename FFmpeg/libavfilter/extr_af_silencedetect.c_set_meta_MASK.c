
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int key2 ;
struct TYPE_3__ {int metadata; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (char*,int,char*,char const*,...) ;

__attribute__((used)) static void FUNC_2(AVFrame *VAR_0, int VAR_1, const char *VAR_2, char *VAR_3)
{
    char VAR_4[128];

    if (VAR_1)
        FUNC_1(VAR_4, sizeof(VAR_4), "lavfi.%s.%d", VAR_2, VAR_1);
    else
        FUNC_1(VAR_4, sizeof(VAR_4), "lavfi.%s", VAR_2);
    FUNC_0(&VAR_0->metadata, VAR_4, VAR_3, 0);
}
