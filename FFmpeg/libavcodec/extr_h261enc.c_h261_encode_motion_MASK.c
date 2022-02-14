
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pb; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ H261Context ;


 int** VAR_0 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(H261Context *VAR_1, int VAR_2)
{
    MpegEncContext *const VAR_3 = &VAR_1->s;
    int VAR_4, VAR_5;
    if (VAR_2 == 0) {
        VAR_5 = 0;
        FUNC_0(&VAR_3->pb, VAR_0[VAR_5][1], VAR_0[VAR_5][0]);
    } else {
        if (VAR_2 > 15)
            VAR_2 -= 32;
        if (VAR_2 < -16)
            VAR_2 += 32;
        VAR_4 = VAR_2 < 0;
        VAR_5 = VAR_4 ? -VAR_2 : VAR_2;
        FUNC_0(&VAR_3->pb, VAR_0[VAR_5][1], VAR_0[VAR_5][0]);
        FUNC_0(&VAR_3->pb, 1, VAR_4);
    }
}
