
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CRECID ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int,int) ;

void FUNC_2(CRECID *VAR_0, CRECID VAR_1, int VAR_2) {
    int VAR_3 = VAR_2 - 1, VAR_4;
    VAR_0[VAR_3] = VAR_1;
    while ( (VAR_4=(VAR_3-1)/2) >= 0 ) {
        if (FUNC_0(VAR_0[VAR_4],VAR_0[VAR_3]) > 0) {FUNC_1(VAR_0,VAR_4,VAR_3); VAR_3 = VAR_4;}
        else break;
    }
}
