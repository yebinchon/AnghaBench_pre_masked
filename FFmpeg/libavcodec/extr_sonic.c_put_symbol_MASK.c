
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int RangeCoder ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int *,int *,int const) ;

void FUNC_4(RangeCoder *VAR_0, uint8_t *VAR_1, int VAR_2, int VAR_3, uint64_t VAR_4[256][2], uint64_t VAR_5[32][2]){
    int VAR_6;
    if(VAR_2){
        const int VAR_7= FUNC_0(VAR_2);
        const int VAR_8= FUNC_2(VAR_7);
        do{ if(VAR_4){ VAR_4[*(VAR_1+0)][0]++; VAR_5[(VAR_1+0)-VAR_1][0]++; } FUNC_3(VAR_0,VAR_1+0,0);}while(0);
        if(VAR_8<=9){
            for(VAR_6=0; VAR_6<VAR_8; VAR_6++){
                do{ if(VAR_4){ VAR_4[*(VAR_1+1+VAR_6)][1]++; VAR_5[(VAR_1+1+VAR_6)-VAR_1][1]++; } FUNC_3(VAR_0,VAR_1+1+VAR_6,1);}while(0);
            }
            do{ if(VAR_4){ VAR_4[*(VAR_1+1+VAR_6)][0]++; VAR_5[(VAR_1+1+VAR_6)-VAR_1][0]++; } FUNC_3(VAR_0,VAR_1+1+VAR_6,0);}while(0);

            for(VAR_6=VAR_8-1; VAR_6>=0; VAR_6--){
                do{ if(VAR_4){ VAR_4[*(VAR_1+22+VAR_6)][(VAR_7>>VAR_6)&1]++; VAR_5[(VAR_1+22+VAR_6)-VAR_1][(VAR_7>>VAR_6)&1]++; } FUNC_3(VAR_0,VAR_1+22+VAR_6,(VAR_7>>VAR_6)&1);}while(0);
            }

            if(VAR_3)
                do{ if(VAR_4){ VAR_4[*(VAR_1+11 + VAR_8)][VAR_2 < 0]++; VAR_5[(VAR_1+11 + VAR_8)-VAR_1][VAR_2 < 0]++; } FUNC_3(VAR_0,VAR_1+11 + VAR_8,VAR_2 < 0);}while(0);
        }else{
            for(VAR_6=0; VAR_6<VAR_8; VAR_6++){
                do{ if(VAR_4){ VAR_4[*(VAR_1+1+FUNC_1(VAR_6,9))][1]++; VAR_5[(VAR_1+1+FUNC_1(VAR_6,9))-VAR_1][1]++; } FUNC_3(VAR_0,VAR_1+1+FUNC_1(VAR_6,9),1);}while(0);
            }
            do{ if(VAR_4){ VAR_4[*(VAR_1+1+9)][0]++; VAR_5[(VAR_1+1+9)-VAR_1][0]++; } FUNC_3(VAR_0,VAR_1+1+9,0);}while(0);

            for(VAR_6=VAR_8-1; VAR_6>=0; VAR_6--){
                do{ if(VAR_4){ VAR_4[*(VAR_1+22+FUNC_1(VAR_6,9))][(VAR_7>>VAR_6)&1]++; VAR_5[(VAR_1+22+FUNC_1(VAR_6,9))-VAR_1][(VAR_7>>VAR_6)&1]++; } FUNC_3(VAR_0,VAR_1+22+FUNC_1(VAR_6,9),(VAR_7>>VAR_6)&1);}while(0);
            }

            if(VAR_3)
                do{ if(VAR_4){ VAR_4[*(VAR_1+11 + 10)][VAR_2 < 0]++; VAR_5[(VAR_1+11 + 10)-VAR_1][VAR_2 < 0]++; } FUNC_3(VAR_0,VAR_1+11 + 10,VAR_2 < 0);}while(0);
        }
    }else{
        do{ if(VAR_4){ VAR_4[*(VAR_1+0)][1]++; VAR_5[(VAR_1+0)-VAR_1][1]++; } FUNC_3(VAR_0,VAR_1+0,1);}while(0);
    }

}
