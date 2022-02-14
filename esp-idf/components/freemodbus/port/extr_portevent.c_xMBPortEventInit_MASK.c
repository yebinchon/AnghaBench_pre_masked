
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int eMBEventType ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int ,int) ;
 int * VAR_3 ;

BOOL
FUNC_2( void )
{
    BOOL VAR_4 = VAR_0;
    if((VAR_3 = FUNC_1(VAR_1, sizeof(eMBEventType))) != ((void*)0))
    {
        FUNC_0(VAR_3, "MbPortEventQueue");
        VAR_4 = VAR_2;
    }
    return VAR_4;
}
