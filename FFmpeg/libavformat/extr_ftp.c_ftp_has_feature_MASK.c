
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int features; } ;
typedef TYPE_1__ FTPContext ;


 int * FUNC_0 (int ,char const*) ;

__attribute__((used)) static int FUNC_1(FTPContext *VAR_0, const char *VAR_1)
{
    if (!VAR_0->features)
        return 0;

    return FUNC_0(VAR_0->features, VAR_1) != ((void*)0);
}
