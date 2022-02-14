
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int delta; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int w; int h; int c; int batch; int delta; int norms; int beta; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (int,int ,int,int ,int) ;
 int FUNC_1 (int,int ,int ,int,int ,int) ;

void FUNC_2(const layer VAR_0, network VAR_1)
{



    int VAR_2 = VAR_0.w;
    int VAR_3 = VAR_0.h;
    int VAR_4 = VAR_0.c;
    FUNC_1(VAR_2*VAR_3*VAR_4*VAR_0.batch, -VAR_0.beta, VAR_0.norms, 1, VAR_1.delta, 1);
    FUNC_0(VAR_2*VAR_3*VAR_4*VAR_0.batch, VAR_0.delta, 1, VAR_1.delta, 1);
}
