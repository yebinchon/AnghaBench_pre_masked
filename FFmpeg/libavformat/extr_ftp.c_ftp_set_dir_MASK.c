
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int command ;
struct TYPE_4__ {char* path; } ;
typedef TYPE_1__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int const*,int *) ;
 int FUNC_2 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_3(FTPContext *VAR_2)
{
    static const int VAR_3[] = {250, 550, 0};
    char VAR_4[VAR_1];

    FUNC_2(VAR_4, sizeof(VAR_4), "CWD %s\r\n", VAR_2->path);
    if (FUNC_1(VAR_2, VAR_4, VAR_3, ((void*)0)) != 250)
        return FUNC_0(VAR_0);
    return 0;
}
