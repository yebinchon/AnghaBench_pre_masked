
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int spi_device_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int *) ;

__attribute__((used)) static void FUNC_5(spi_device_handle_t VAR_2)
{
    uint16_t *VAR_3[2];

    for (int VAR_4=0; VAR_4<2; VAR_4++) {
        VAR_3[VAR_4]=FUNC_1(320*VAR_1*sizeof(uint16_t), VAR_0);
        FUNC_0(VAR_3[VAR_4]!=((void*)0));
    }
    int VAR_5=0;

    int VAR_6=-1;
    int VAR_7=0;

    while(1) {
        VAR_5++;
        for (int VAR_8=0; VAR_8<240; VAR_8+=VAR_1) {

            FUNC_2(VAR_3[VAR_7], VAR_8, VAR_5, VAR_1);

            if (VAR_6!=-1) FUNC_3(VAR_2);

            VAR_6=VAR_7;
            VAR_7=(VAR_7==1)?0:1;

            FUNC_4(VAR_2, VAR_8, VAR_3[VAR_6]);



        }
    }
}
