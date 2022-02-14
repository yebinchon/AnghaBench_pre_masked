
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int,int *,int ,int *,int ,int *,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;

u16_t FUNC_4(zdev_t* VAR_2, zbuf_t* VAR_3, u16_t VAR_4)
{
    u16_t VAR_5;


    u16_t VAR_6;
    u16_t VAR_7[(24+25+1)/2];
    int VAR_8;

    for(VAR_8=0;VAR_8<12;VAR_8++)
    {
        VAR_7[VAR_8] = FUNC_3(VAR_2, VAR_3, VAR_8);
    }
    VAR_6 = 24;

    FUNC_2(VAR_2, VAR_3, 24);

    if ((VAR_5 = FUNC_0(VAR_2, VAR_7, VAR_6, ((void*)0), 0, ((void*)0), 0, VAR_3, 0,
            VAR_0, 0, 0)) != VAR_1)
    {
        goto zlError;
    }

    return 0;

zlError:

    FUNC_1(VAR_2, VAR_3, 0);
    return 0;
}
