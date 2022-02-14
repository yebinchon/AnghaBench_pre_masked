
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__** vp4_mv_vlc; } ;
typedef TYPE_2__ Vp3DecodeContext ;
struct TYPE_4__ {int table; } ;
typedef int GetBitContext ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int,int) ;
 size_t* VAR_0 ;

__attribute__((used)) static int FUNC_2(Vp3DecodeContext *VAR_1, GetBitContext *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = FUNC_1(VAR_2, VAR_1->vp4_mv_vlc[VAR_3][VAR_0[FUNC_0(VAR_4)]].table, 6, 2) - 31;
    return VAR_4 < 0 ? -VAR_5 : VAR_5;
}
