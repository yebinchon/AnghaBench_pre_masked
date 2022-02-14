
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sum; int nb_samples; float peak; int blknum; int * peaks; int * rms; } ;
typedef TYPE_1__ ChannelStats ;


 int FUNC_0 (float,int ,int) ;
 float FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(ChannelStats *VAR_0)
{
    int VAR_1, VAR_2;
    float VAR_3, VAR_4;

    VAR_4 = FUNC_1(2 * VAR_0->sum / VAR_0->nb_samples);
    VAR_3 = VAR_0->peak;
    VAR_2 = FUNC_0(VAR_4 * 10000, 0, 10000);
    VAR_1 = FUNC_0(VAR_3 * 10000, 0, 10000);
    VAR_0->rms[VAR_2]++;
    VAR_0->peaks[VAR_1]++;

    VAR_0->peak = 0;
    VAR_0->sum = 0;
    VAR_0->nb_samples = 0;
    VAR_0->blknum++;
}
