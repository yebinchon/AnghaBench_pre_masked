
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(GetBitContext *VAR_1, const int *VAR_2)
{
    int VAR_3 = FUNC_0(VAR_1, 3);
    int VAR_4 = VAR_2[VAR_3];
    if(VAR_4 < 0)
        VAR_4 = VAR_2[FUNC_1(VAR_1) - VAR_4];
    if(!VAR_4){
        do{
            if (FUNC_2(VAR_1) < 8)
                return VAR_0;
            VAR_3 = FUNC_0(VAR_1, 8);
            VAR_4 += VAR_3 << 2;
        }while(VAR_3 == 0xFF);
    }
    return VAR_4;
}
