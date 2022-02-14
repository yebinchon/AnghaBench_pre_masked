
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* palette; int gb; } ;
typedef TYPE_1__ MmContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(MmContext *VAR_0)
{
    int VAR_1;

    FUNC_1(&VAR_0->gb, 4);
    for (VAR_1 = 0; VAR_1 < 128; VAR_1++) {
        VAR_0->palette[VAR_1] = 0xFFU << 24 | FUNC_0(&VAR_0->gb);
        VAR_0->palette[VAR_1+128] = VAR_0->palette[VAR_1]<<2;
    }
}
