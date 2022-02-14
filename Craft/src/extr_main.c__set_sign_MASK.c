
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dirty; int signs; } ;
typedef int SignList ;
typedef TYPE_1__ Chunk ;


 int FUNC_0 (int,int,int,int,int,int,char const*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int,int,int,int,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int,int,int,int) ;

void FUNC_5(
    int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, const char *VAR_6, int VAR_7)
{
    if (FUNC_3(VAR_6) == 0) {
        FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
        return;
    }
    Chunk *VAR_8 = FUNC_1(VAR_0, VAR_1);
    if (VAR_8) {
        SignList *VAR_9 = &VAR_8->signs;
        FUNC_2(VAR_9, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
        if (VAR_7) {
            VAR_8->dirty = 1;
        }
    }
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
