
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * file; int * ifo; } ;
typedef TYPE_1__ hb_dvdread_t ;
struct TYPE_5__ {TYPE_1__ dvdread; } ;
typedef TYPE_2__ hb_dvd_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( hb_dvd_t * VAR_0 )
{
    hb_dvdread_t *VAR_1 = &(VAR_0->dvdread);
    if( VAR_1->ifo )
    {
        FUNC_1( VAR_1->ifo );
        VAR_1->ifo = ((void*)0);
    }
    if( VAR_1->file )
    {
        FUNC_0( VAR_1->file );
        VAR_1->file = ((void*)0);
    }
}
