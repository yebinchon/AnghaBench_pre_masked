
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int service; void* major; void* minor; } ;
typedef TYPE_1__ tBTA_UTL_COD ;
typedef void* UINT8 ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int FUNC_0 (void*,void**) ;
 int FUNC_1 (void*,void**) ;
 int FUNC_2 (int ,void**) ;
 void** FUNC_3 () ;
 int VAR_0 ;

BOOLEAN FUNC_4(tBTA_UTL_COD *VAR_1)
{
    UINT8 *VAR_2;
    UINT16 VAR_3;
    UINT8 VAR_4, VAR_5;

    VAR_2 = FUNC_3();
    FUNC_2( VAR_3, VAR_2 );
    FUNC_1(VAR_4, VAR_2 );
    FUNC_0(VAR_5, VAR_2 );

    VAR_1->minor = VAR_4;
    VAR_1->major = VAR_5;
    VAR_1->service = VAR_3;

    return VAR_0;
}
