
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; void* group_id; void* user_id; void* filemode; int modification_timestamp; int type; int name; } ;
typedef TYPE_1__ AVIODirEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*,char**) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int *,int) ;
 void* FUNC_6 (char*,int *,int) ;

__attribute__((used)) static int FUNC_7(char *VAR_3, AVIODirEntry *VAR_4)
{
    char *VAR_5, *VAR_6;
    FUNC_3(((void*)0), "%s\n", VAR_3);
    while((VAR_5 = FUNC_2(VAR_3, ";", &VAR_3))) {
        if (VAR_5[0] == ' ') {
            VAR_4->name = FUNC_1(&VAR_5[1]);
            continue;
        }
        VAR_5 = FUNC_2(VAR_5, "=", &VAR_6);
        if (!FUNC_0(VAR_5, "type")) {
            if (!FUNC_0(VAR_6, "cdir") || !FUNC_0(VAR_6, "pdir"))
                return 1;
            if (!FUNC_0(VAR_6, "dir"))
                VAR_4->type = VAR_0;
            else if (!FUNC_0(VAR_6, "file"))
                VAR_4->type = VAR_1;
            else if (!FUNC_0(VAR_6, "OS.unix=slink:"))
                VAR_4->type = VAR_2;
        } else if (!FUNC_0(VAR_5, "modify")) {
            VAR_4->modification_timestamp = FUNC_4(VAR_6);
        } else if (!FUNC_0(VAR_5, "UNIX.mode")) {
            VAR_4->filemode = FUNC_6(VAR_6, ((void*)0), 8);
        } else if (!FUNC_0(VAR_5, "UNIX.uid") || !FUNC_0(VAR_5, "UNIX.owner"))
            VAR_4->user_id = FUNC_6(VAR_6, ((void*)0), 10);
        else if (!FUNC_0(VAR_5, "UNIX.gid") || !FUNC_0(VAR_5, "UNIX.group"))
            VAR_4->group_id = FUNC_6(VAR_6, ((void*)0), 10);
        else if (!FUNC_0(VAR_5, "size") || !FUNC_0(VAR_5, "sizd"))
            VAR_4->size = FUNC_5(VAR_6, ((void*)0), 10);
    }
    return 0;
}
