
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * color_map; } ;
typedef TYPE_1__ vbi_page ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,char const*,int,int,int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, AVBPrint *VAR_1, vbi_page *VAR_2, unsigned VAR_3)
{
    int VAR_4 = FUNC_2(VAR_2->color_map[VAR_3]);
    int VAR_5 = FUNC_1(VAR_2->color_map[VAR_3]);
    int VAR_6 = FUNC_0(VAR_2->color_map[VAR_3]);
    FUNC_3(VAR_1, "{\\%s&H%02X%02X%02X&}", VAR_0, VAR_6, VAR_5, VAR_4);
}
