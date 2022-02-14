
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pb; } ;
typedef TYPE_1__ AACEncContext ;


 char const FUNC_0 (int,int) ;
 char const VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,char const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(AACEncContext *VAR_1, const char *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;

    VAR_4 = FUNC_4(VAR_2) + 2;
    FUNC_2(&VAR_1->pb, 3, VAR_0);
    FUNC_2(&VAR_1->pb, 4, FUNC_0(VAR_4, 15));
    if (VAR_4 >= 15)
        FUNC_2(&VAR_1->pb, 8, VAR_4 - 14);
    FUNC_2(&VAR_1->pb, 4, 0);
    VAR_5 = -FUNC_3(&VAR_1->pb) & 7;
    FUNC_1(&VAR_1->pb);
    for (VAR_3 = 0; VAR_3 < VAR_4 - 2; VAR_3++)
        FUNC_2(&VAR_1->pb, 8, VAR_2[VAR_3]);
    FUNC_2(&VAR_1->pb, 12 - VAR_5, 0);
}
