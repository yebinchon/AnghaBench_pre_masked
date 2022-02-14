
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int metadata; } ;
typedef int FreezeDetectContext ;
typedef TYPE_1__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,char const*,int ) ;
 int FUNC_1 (int *,int ,char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(FreezeDetectContext *VAR_1, AVFrame *VAR_2, const char *VAR_3, const char *VAR_4)
{
    FUNC_1(VAR_1, VAR_0, "%s: %s\n", VAR_3, VAR_4);
    return FUNC_0(&VAR_2->metadata, VAR_3, VAR_4, 0);
}
