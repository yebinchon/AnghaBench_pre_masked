
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (int,char*,size_t) ;

void FUNC_2(int VAR_0, char *VAR_1, size_t VAR_2)
{
    size_t VAR_3 = 0;
    while(VAR_3 < VAR_2){
        size_t VAR_4 = FUNC_1(VAR_0, VAR_1 + VAR_3, VAR_2-VAR_3);
        if(VAR_4 <= 0) FUNC_0("write failed");
        VAR_3 += VAR_4;
    }
}
