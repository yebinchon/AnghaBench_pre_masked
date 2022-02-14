
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int command ;
struct TYPE_4__ {char* path; int state; } ;
typedef TYPE_1__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,int const*,int *) ;
 int FUNC_2 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_3(FTPContext *VAR_3)
{
    char VAR_4[VAR_0];
    static const int VAR_5[] = {150, 125, 0};
    int VAR_6;

    FUNC_2(VAR_4, sizeof(VAR_4), "RETR %s\r\n", VAR_3->path);
    VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5, ((void*)0));
    if (VAR_6 != 125 && VAR_6 != 150)
        return FUNC_0(VAR_2);

    VAR_3->state = VAR_1;

    return 0;
}
