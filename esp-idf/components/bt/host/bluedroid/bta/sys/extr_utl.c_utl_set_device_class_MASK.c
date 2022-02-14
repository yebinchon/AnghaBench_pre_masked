
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int minor; int major; int service; } ;
typedef TYPE_1__ tBTA_UTL_COD ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int DEV_CLASS ;
typedef int BOOLEAN ;







 int FUNC_0 (int,int*) ;
 int VAR_0 ;
 int FUNC_1 (int,int*) ;
 int VAR_1 ;
 int FUNC_2 (int,int*) ;
 int VAR_2 ;
 int* FUNC_3 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int,int,int) ;
 int VAR_5 ;

BOOLEAN FUNC_6(tBTA_UTL_COD *VAR_6, UINT8 VAR_7)
{
    UINT8 *VAR_8;
    UINT16 VAR_9;
    UINT8 VAR_10, VAR_11;
    DEV_CLASS VAR_12;

    VAR_8 = FUNC_3();
    FUNC_2( VAR_9, VAR_8 );
    FUNC_1(VAR_10, VAR_8 );
    FUNC_0(VAR_11, VAR_8 );

    switch (VAR_7) {
    case 129:
        VAR_10 = VAR_6->minor & VAR_1;
        VAR_11 = VAR_6->major & VAR_0;
        break;

    case 128:

        VAR_6->service &= VAR_2;
        VAR_9 = VAR_9 | VAR_6->service;
        break;

    case 132:
        VAR_6->service &= VAR_2;
        VAR_9 = VAR_9 & (~VAR_6->service);
        break;

    case 130:
        VAR_10 = VAR_6->minor & VAR_1;
        VAR_11 = VAR_6->major & VAR_0;
        VAR_6->service &= VAR_2;
        VAR_9 = VAR_9 | VAR_6->service;
        break;

    case 131:
        VAR_10 = VAR_6->minor & VAR_1;
        VAR_11 = VAR_6->major & VAR_0;
        VAR_9 = VAR_6->service & VAR_2;
        break;

    default:
        return VAR_4;
    }


    FUNC_5(VAR_12, VAR_10, VAR_11, VAR_9);

    if (FUNC_4(VAR_12) == VAR_3) {
        return VAR_5;
    }

    return VAR_4;
}
