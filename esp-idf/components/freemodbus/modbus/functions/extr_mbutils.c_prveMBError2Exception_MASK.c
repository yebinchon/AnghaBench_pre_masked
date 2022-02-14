
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int eMBException ;
typedef int eMBErrorCode ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

eMBException
FUNC_0( eMBErrorCode VAR_4 )
{
    eMBException VAR_5;

    switch ( VAR_4 )
    {
        case 130:
            VAR_5 = VAR_1;
            break;

        case 129:
            VAR_5 = VAR_0;
            break;

        case 128:
            VAR_5 = VAR_2;
            break;

        default:
            VAR_5 = VAR_3;
            break;
    }

    return VAR_5;
}
