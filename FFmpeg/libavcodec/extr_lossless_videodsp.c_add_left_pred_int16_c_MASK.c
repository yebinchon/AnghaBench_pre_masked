
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static int FUNC_0(uint16_t *VAR_0, const uint16_t *VAR_1, unsigned VAR_2, ptrdiff_t VAR_3, unsigned VAR_4){
    int VAR_5;

    for(VAR_5=0; VAR_5<VAR_3-1; VAR_5++){
        VAR_4+= VAR_1[VAR_5];
        VAR_0[VAR_5]= VAR_4 &= VAR_2;
        VAR_5++;
        VAR_4+= VAR_1[VAR_5];
        VAR_0[VAR_5]= VAR_4 &= VAR_2;
    }

    for(; VAR_5<VAR_3; VAR_5++){
        VAR_4+= VAR_1[VAR_5];
        VAR_0[VAR_5]= VAR_4 &= VAR_2;
    }

    return VAR_4;
}
