
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int has_palette; int * palette; } ;
typedef TYPE_1__ DVDSubContext ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char**,int) ;

__attribute__((used)) static void FUNC_2(DVDSubContext *VAR_0, char *VAR_1)
{
    int VAR_2;

    VAR_0->has_palette = 1;
    for(VAR_2=0;VAR_2<16;VAR_2++) {
        VAR_0->palette[VAR_2] = FUNC_1(VAR_1, &VAR_1, 16);
        while(*VAR_1 == ',' || FUNC_0(*VAR_1))
            VAR_1++;
    }
}
