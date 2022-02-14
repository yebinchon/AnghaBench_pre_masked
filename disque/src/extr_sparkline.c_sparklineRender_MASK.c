
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sequence {int length; } ;
typedef int sds ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,struct sequence*,int,int,int,int) ;

sds FUNC_2(sds VAR_0, struct sequence *VAR_1, int VAR_2, int VAR_3, int VAR_4) {
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1->length; VAR_5 += VAR_2) {
        int VAR_6 = (VAR_1->length-VAR_5) < VAR_2 ? (VAR_1->length-VAR_5) : VAR_2;

        if (VAR_5 != 0) VAR_0 = FUNC_0(VAR_0,"\n",1);
        VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_3, VAR_5, VAR_6, VAR_4);
    }
    return VAR_0;
}
