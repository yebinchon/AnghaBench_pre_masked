
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* firstline; void* numlines; } ;
typedef TYPE_1__ subsector_t ;
struct TYPE_7__ {int firstseg; int numsegs; } ;
typedef TYPE_2__ mapsubsector_t ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_6 (int VAR_4)
{
    byte* VAR_5;
    int VAR_6;
    mapsubsector_t* VAR_7;
    subsector_t* VAR_8;

    VAR_2 = FUNC_2 (VAR_4) / sizeof(mapsubsector_t);
    VAR_3 = FUNC_4 (VAR_2*sizeof(subsector_t),VAR_0,0);
    VAR_5 = FUNC_1 (VAR_4,VAR_1);

    VAR_7 = (mapsubsector_t *)VAR_5;
    FUNC_5 (VAR_3,0, VAR_2*sizeof(subsector_t));
    VAR_8 = VAR_3;

    for (VAR_6=0 ; VAR_6<VAR_2 ; VAR_6++, VAR_8++, VAR_7++)
    {
 VAR_8->numlines = FUNC_0(VAR_7->numsegs);
 VAR_8->firstline = FUNC_0(VAR_7->firstseg);
    }

    FUNC_3 (VAR_5);
}
