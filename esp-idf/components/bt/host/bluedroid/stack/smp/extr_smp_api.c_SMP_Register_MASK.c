
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tSMP_CALLBACK ;
struct TYPE_2__ {int * p_callback; int state; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

BOOLEAN FUNC_2 (tSMP_CALLBACK *VAR_2)
{
    FUNC_1 ("SMP_Register state=%d", VAR_1.state);

    if (VAR_1.p_callback != ((void*)0)) {
        FUNC_0 ("SMP_Register: duplicate registration, overwrite it");
    }
    VAR_1.p_callback = VAR_2;

    return (VAR_0);

}
