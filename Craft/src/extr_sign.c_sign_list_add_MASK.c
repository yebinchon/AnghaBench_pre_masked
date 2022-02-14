
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; int z; int face; char* text; } ;
typedef int SignList ;
typedef TYPE_1__ Sign ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int,int,int,int) ;
 int FUNC_2 (char*,char const*,int) ;

void FUNC_3(
    SignList *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, const char *VAR_6)
{
    FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    Sign VAR_7;
    VAR_7.x = VAR_2;
    VAR_7.y = VAR_3;
    VAR_7.z = VAR_4;
    VAR_7.face = VAR_5;
    FUNC_2(VAR_7.text, VAR_6, VAR_0);
    VAR_7.text[VAR_0 - 1] = '\0';
    FUNC_0(VAR_1, &VAR_7);
}
