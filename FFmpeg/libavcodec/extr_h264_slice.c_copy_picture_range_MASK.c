
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* DPB; } ;
typedef int H264Picture ;
typedef TYPE_1__ H264Context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int) ;
 int * FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(H264Picture **VAR_1, H264Picture **VAR_2, int VAR_3,
                               H264Context *VAR_4,
                               H264Context *VAR_5)
{
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        FUNC_2(!VAR_2[VAR_6] ||
                   FUNC_0(VAR_2[VAR_6], VAR_5, 1) ||
                   FUNC_0(VAR_2[VAR_6], VAR_5->DPB, VAR_0));
        VAR_1[VAR_6] = FUNC_1(VAR_2[VAR_6], VAR_4, VAR_5);
    }
}
