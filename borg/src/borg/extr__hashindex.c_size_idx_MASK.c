
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 int* VAR_0 ;

int FUNC_1(int VAR_1){

    int VAR_2 = FUNC_0(VAR_0);
    int VAR_3, VAR_4=0;
    do{
        VAR_3 = VAR_0[VAR_4++];
    }while((VAR_3 < VAR_1) && (VAR_4 < VAR_2));
    if (VAR_4 >= VAR_2)
        return VAR_2 - 1;
    VAR_4--;
    return VAR_4;
}
