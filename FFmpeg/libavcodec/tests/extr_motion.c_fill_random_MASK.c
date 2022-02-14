
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVLFG ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, int VAR_1)
{
    int VAR_2;
    AVLFG VAR_3;

    FUNC_1(&VAR_3, 1);
    for(VAR_2=0;VAR_2<VAR_1;VAR_2++) {
        VAR_0[VAR_2] = FUNC_0(&VAR_3) % 256;
    }
}
