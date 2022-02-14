
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct aggBaFrameParameter {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int*,int*,int,int *,int,int ) ;
 int FUNC_1 (int *,int *,struct aggBaFrameParameter*,int) ;
 int FUNC_2 (int *,int *,int ,int *,int ,int *,int ,int *,int ,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int *,int,int) ;

u16_t FUNC_10(zdev_t* VAR_4, struct aggBaFrameParameter *VAR_5)
{
    zbuf_t* VAR_6;



    u16_t VAR_7 = 0;
    u16_t VAR_8 = 32;
    u16_t VAR_9[(24+25+1)/2];
    u16_t VAR_10 = 0;
    u16_t VAR_11;
    u8_t VAR_12 = 0;
    u16_t VAR_13[3];
    if ((VAR_6 = FUNC_5(VAR_4, 1024)) == ((void*)0))
    {
        FUNC_7(VAR_1, "Alloc mm buf Fail!");
        return VAR_2;
    }




    VAR_7 = VAR_8;




    VAR_7 = FUNC_1(VAR_4, VAR_6, VAR_5, VAR_7);


    FUNC_6(VAR_4, VAR_6, VAR_7);





    VAR_13[0] = FUNC_8(VAR_4, VAR_5->buf, 10);
    VAR_13[1] = FUNC_8(VAR_4, VAR_5->buf, 12);
    VAR_13[2] = FUNC_8(VAR_4, VAR_5->buf, 14);
    FUNC_0(VAR_4, VAR_13, VAR_9, VAR_7-VAR_8, VAR_6, VAR_10, VAR_12);
    for (VAR_11=0; VAR_11<(VAR_8>>1); VAR_11++)
    {
        FUNC_9(VAR_4, VAR_6, VAR_11*2, VAR_9[VAR_11]);
    }
    FUNC_4(VAR_4, VAR_6);
    FUNC_3(VAR_4);



    return VAR_2;

}
