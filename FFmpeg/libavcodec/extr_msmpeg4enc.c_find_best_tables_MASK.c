
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int***** ac_stats; scalar_t__ pict_type; int rl_table_index; int rl_chroma_table_index; scalar_t__ last_non_b_pict_type; } ;
typedef TYPE_1__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*****,int ,int) ;
 int**** VAR_5 ;

__attribute__((used)) static void FUNC_1(MpegEncContext * VAR_6)
{
    int VAR_7;
    int VAR_8 = 0, VAR_9 = VAR_2;
    int VAR_10 = 0, VAR_11 = VAR_2;

    for(VAR_7=0; VAR_7<3; VAR_7++){
        int VAR_12;
        int VAR_13=0;
        int VAR_14=0;

        if(VAR_7>0){
            VAR_14++;
            VAR_13++;
        }
        for(VAR_12=0; VAR_12<=VAR_3; VAR_12++){
            int VAR_15;
            for(VAR_15=0; VAR_15<=VAR_4; VAR_15++){
                int VAR_16;
                const int VAR_17= VAR_14 + VAR_13;
                for(VAR_16=0; VAR_16<2; VAR_16++){
                    int VAR_18 = VAR_6->ac_stats[0][0][VAR_12][VAR_15][VAR_16] + VAR_6->ac_stats[0][1][VAR_12][VAR_15][VAR_16];
                    int VAR_19 = VAR_6->ac_stats[1][0][VAR_12][VAR_15][VAR_16];
                    int VAR_20= VAR_6->ac_stats[1][1][VAR_12][VAR_15][VAR_16];

                    if(VAR_6->pict_type==VAR_0){
                        VAR_14 += VAR_19 *VAR_5[VAR_7 ][VAR_12][VAR_15][VAR_16];
                        VAR_13+= VAR_20*VAR_5[VAR_7+3][VAR_12][VAR_15][VAR_16];
                    }else{
                        VAR_14+= VAR_19 *VAR_5[VAR_7 ][VAR_12][VAR_15][VAR_16]
                                     +VAR_20*VAR_5[VAR_7+3][VAR_12][VAR_15][VAR_16]
                                     +VAR_18 *VAR_5[VAR_7+3][VAR_12][VAR_15][VAR_16];
                    }
                }
                if(VAR_17 == VAR_14+VAR_13) break;
            }
        }
        if(VAR_14<VAR_9){
            VAR_9= VAR_14;
            VAR_8= VAR_7;
        }
        if(VAR_13<VAR_11){
            VAR_11= VAR_13;
            VAR_10= VAR_7;
        }
    }

    if(VAR_6->pict_type==VAR_1) VAR_10= VAR_8;

    FUNC_0(VAR_6->ac_stats, 0, sizeof(int)*(VAR_3+1)*(VAR_4+1)*2*2*2);

    VAR_6->rl_table_index = VAR_8;
    VAR_6->rl_chroma_table_index= VAR_10;

    if(VAR_6->pict_type != VAR_6->last_non_b_pict_type){
        VAR_6->rl_table_index= 2;
        if(VAR_6->pict_type==VAR_0)
            VAR_6->rl_chroma_table_index= 1;
        else
            VAR_6->rl_chroma_table_index= 2;
    }

}
