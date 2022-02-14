
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* name; struct TYPE_4__* data; } ;
typedef TYPE_1__ hb_attachment_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1( hb_attachment_t **VAR_0 )
{
    if ( VAR_0 && *VAR_0 )
    {
        FUNC_0((*VAR_0)->data);
        FUNC_0((*VAR_0)->name);
        FUNC_0(*VAR_0);
        *VAR_0 = ((void*)0);
    }
}
