
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int** VAR_1 ;

__attribute__((used)) static inline int FUNC_0(int VAR_2, int VAR_3){
    int VAR_4, VAR_5, VAR_6;

    if (VAR_2 == 0) {
        return VAR_1[0][1];
    } else {
        VAR_5 = VAR_3 - 1;

        VAR_4= VAR_0 - 6 - VAR_5;
        VAR_2 = (VAR_2<<VAR_4)>>VAR_4;
        VAR_2--;
        VAR_6 = (VAR_2 >> VAR_5) + 1;

        return VAR_1[VAR_6][1] + 1 + VAR_5;
    }
}
