
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serverCommand {int flags; } ;
typedef int client ;


 int FUNC_0 (int *,char*) ;

int FUNC_1(client *VAR_0, struct serverCommand *VAR_1, int VAR_2, char *VAR_3) {
    if (VAR_1->flags & VAR_2) {
        FUNC_0(VAR_0, VAR_3);
        return 1;
    }
    return 0;
}
