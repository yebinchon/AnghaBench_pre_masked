
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int service; } ;
typedef TYPE_2__ tBTA_UTL_COD ;
typedef int tBTA_HF_CLIENT_DATA ;
struct TYPE_5__ {int deregister; } ;
struct TYPE_7__ {TYPE_1__ scb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(tBTA_HF_CLIENT_DATA *VAR_4)
{
    tBTA_UTL_COD VAR_5;

    VAR_3.scb.deregister = VAR_2;


    VAR_5.service = VAR_1;
    FUNC_3(&VAR_5, VAR_0);


    FUNC_1(VAR_4);


    FUNC_0();


    FUNC_2();
}
