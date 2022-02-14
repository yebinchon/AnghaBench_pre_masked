
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HuffYUVDSPContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

void FUNC_5(void)
{
    HuffYUVDSPContext VAR_1;
    int VAR_2 = 16 * FUNC_0(FUNC_4(), 16, 128);

    FUNC_2(&VAR_1, VAR_0);


    FUNC_1(VAR_1, 65535, VAR_2, "add_int16_rnd_width");
    FUNC_3("add_int16_rnd_width");


    FUNC_1(VAR_1, 65535, 16*128, "add_int16_128");
    FUNC_3("add_int16_128");
}
