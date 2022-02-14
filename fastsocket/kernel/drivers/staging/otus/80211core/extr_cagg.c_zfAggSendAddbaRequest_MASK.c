
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int*,int*,int,int *,int,int ) ;
 int FUNC_1 (int *,int *,int,int,int) ;
 int FUNC_2 (int *,int *,int ,int *,int ,int *,int ,int *,int ,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,int *,int,int) ;

u16_t FUNC_9(zdev_t* VAR_4, u16_t *VAR_5, u16_t VAR_6, u16_t VAR_7)
{
    zbuf_t* VAR_8;



    u16_t VAR_9 = 0;
    u16_t VAR_10 = 32;
    u16_t VAR_11[(24+25+1)/2];
    u16_t VAR_12 = 0;
    u16_t VAR_13;
    u8_t VAR_14 = 0;
    if ((VAR_8 = FUNC_5(VAR_4, 1024)) == ((void*)0))
    {
        FUNC_7(VAR_1, "Alloc mm buf Fail!");
        return VAR_2;
    }




    VAR_9 = VAR_10;




    VAR_9 = FUNC_1(VAR_4, VAR_8, VAR_9, VAR_6, VAR_7);


    FUNC_6(VAR_4, VAR_8, VAR_9);




    FUNC_0(VAR_4, VAR_5, VAR_11, VAR_9-VAR_10, VAR_8, VAR_12, VAR_14);
    for (VAR_13=0; VAR_13<(VAR_10>>1); VAR_13++)
    {
        FUNC_8(VAR_4, VAR_8, VAR_13*2, VAR_11[VAR_13]);
    }
    FUNC_4(VAR_4, VAR_8);
    FUNC_3(VAR_4);


    return VAR_2;

}
