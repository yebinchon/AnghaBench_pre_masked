
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int command ;
struct TYPE_4__ {char* path; int filesize; } ;
typedef TYPE_1__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char*,int const*,char**) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int *,int) ;

__attribute__((used)) static int FUNC_6(FTPContext *VAR_2)
{
    char VAR_3[VAR_0];
    char *VAR_4 = ((void*)0);
    static const int VAR_5[] = {213, 0};

    FUNC_3(VAR_3, sizeof(VAR_3), "SIZE %s\r\n", VAR_2->path);
    if (FUNC_2(VAR_2, VAR_3, VAR_5, &VAR_4) == 213 && VAR_4 && FUNC_4(VAR_4) > 4) {
        VAR_2->filesize = FUNC_5(&VAR_4[4], ((void*)0), 10);
    } else {
        VAR_2->filesize = -1;
        FUNC_1(VAR_4);
        return FUNC_0(VAR_1);
    }

    FUNC_1(VAR_4);
    return 0;
}
