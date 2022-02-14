
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ event_t ;
typedef int boolean ;
struct TYPE_10__ {size_t type; } ;
struct TYPE_9__ {size_t deathstate; scalar_t__ deathsound; } ;
struct TYPE_8__ {int tics; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* VAR_8 ;
 TYPE_2__* VAR_9 ;

boolean FUNC_1 (event_t* VAR_10)
{
    if (VAR_10->type != VAR_7)
 return 0;

    if (VAR_1)
 return 1;


    VAR_1 = 1;
    VAR_5 = &VAR_9[VAR_8[VAR_4[VAR_3].type].deathstate];
    VAR_6 = VAR_5->tics;
    VAR_2 = 0;
    VAR_0 = 0;
    if (VAR_8[VAR_4[VAR_3].type].deathsound)
 FUNC_0 (((void*)0), VAR_8[VAR_4[VAR_3].type].deathsound);

    return 1;
}
