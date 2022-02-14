
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int avctx; } ;
typedef TYPE_1__ VP56Context ;
typedef int VLC ;
struct TYPE_6__ {int count; } ;
typedef TYPE_2__ Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,unsigned int,int ,TYPE_2__*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(VP56Context *VAR_4, uint8_t VAR_5[],
                               const uint8_t *VAR_6, unsigned VAR_7, VLC *VAR_8)
{
    Node VAR_9[2*VAR_2], *VAR_10 = &VAR_9[VAR_7];
    int VAR_11, VAR_12, VAR_13;


    VAR_10[0].count = 256;
    for (VAR_13=0; VAR_13<VAR_7-1; VAR_13++) {
        VAR_11 = VAR_10[VAR_13].count * VAR_5[VAR_13] >> 8;
        VAR_12 = VAR_10[VAR_13].count * (255 - VAR_5[VAR_13]) >> 8;
        VAR_9[VAR_6[2*VAR_13 ]].count = VAR_11 + !VAR_11;
        VAR_9[VAR_6[2*VAR_13+1]].count = VAR_12 + !VAR_12;
    }

    FUNC_0(VAR_8);

    return FUNC_1(VAR_4->avctx, VAR_8, VAR_7, VAR_0,
                              VAR_9, VAR_3,
                              VAR_1);
}
