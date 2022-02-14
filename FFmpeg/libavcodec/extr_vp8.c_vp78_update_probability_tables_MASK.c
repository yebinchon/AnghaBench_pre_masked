
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* prob; int c; } ;
typedef TYPE_2__ VP8Context ;
typedef int VP56RangeCoder ;
struct TYPE_4__ {int**** token; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 size_t** VAR_1 ;
 int FUNC_1 (int *,int) ;
 int **** VAR_2 ;

__attribute__((used)) static void FUNC_2(VP8Context *VAR_3)
{
    VP56RangeCoder *VAR_4 = &VAR_3->c;
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
        for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
            for (VAR_7 = 0; VAR_7 < 3; VAR_7++)
                for (VAR_8 = 0; VAR_8 < VAR_0-1; VAR_8++)
                    if (FUNC_0(VAR_4, VAR_2[VAR_5][VAR_6][VAR_7][VAR_8])) {
                        int VAR_10 = FUNC_1(VAR_4, 8);
                        for (VAR_9 = 0; VAR_1[VAR_6][VAR_9] >= 0; VAR_9++)
                            VAR_3->prob->token[VAR_5][VAR_1[VAR_6][VAR_9]][VAR_7][VAR_8] = VAR_10;
                    }
}
