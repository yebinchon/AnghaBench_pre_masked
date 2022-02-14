
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; int gain; int width; int freq; } ;
typedef TYPE_1__ EqualizatorFilter ;





 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,double,double,int ,double,int ) ;
 double FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,double,double,int ,double,int ) ;
 double FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,double,double,int ,double,int ) ;
 double FUNC_5 (int ) ;
 double FUNC_6 (int ,double) ;

__attribute__((used)) static void FUNC_7(EqualizatorFilter *VAR_1, double VAR_2)
{
    double VAR_3 = FUNC_6(VAR_1->freq, VAR_2);
    double VAR_4 = FUNC_6(VAR_1->width, VAR_2);
    double VAR_5;

    switch (VAR_1->type) {
    case 130:
        VAR_5 = FUNC_1(VAR_1->gain);
        FUNC_0(VAR_1, VAR_0, VAR_3, VAR_4, VAR_1->gain, VAR_5, 0);
        break;
    case 129:
        VAR_5 = FUNC_3(VAR_1->gain);
        FUNC_2(VAR_1, VAR_0, VAR_3, VAR_4, VAR_1->gain, VAR_5, 0);
        break;
    case 128:
        VAR_5 = FUNC_5(VAR_1->gain);
        FUNC_4(VAR_1, VAR_0, VAR_3, VAR_4, VAR_1->gain, VAR_5, 0);
        break;
    }

}
