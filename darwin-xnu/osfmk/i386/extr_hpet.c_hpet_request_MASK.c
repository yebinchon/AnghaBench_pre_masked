
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; scalar_t__ HpetCmp; int HpetCfg; TYPE_4__* Hpet; } ;
typedef TYPE_1__ x86_pkg_t ;
struct TYPE_10__ {scalar_t__ primary; TYPE_3__* core; } ;
typedef TYPE_2__ x86_lcpu_t ;
struct TYPE_11__ {scalar_t__ HpetCmp; int HpetCfg; TYPE_4__* Hpet; int HpetVec; TYPE_1__* package; } ;
typedef TYPE_3__ x86_core_t ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_12__ {int Config; } ;
typedef TYPE_4__ hpetTimer_t ;
struct TYPE_13__ {int hpetOffset; int hpetVector; } ;
typedef TYPE_5__ hpetRequest_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,TYPE_5__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,int ,TYPE_5__*) ;

int
FUNC_5(uint32_t VAR_6)
{
    hpetRequest_t VAR_7;
    int VAR_8;
    x86_lcpu_t *VAR_9;
    x86_core_t *VAR_10;
    x86_pkg_t *VAR_11;
    boolean_t VAR_12;

    if (&FUNC_1 == ((void*)0)) {
 return(-1);
    }





    if (VAR_6 >= VAR_5) {
 VAR_12 = FUNC_3(VAR_0);
 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9 != ((void*)0)) {
     VAR_10 = VAR_9->core;
     VAR_11 = VAR_10->package;

     if (VAR_9->primary) {
  VAR_11->flags |= VAR_2;
     }
 }

 FUNC_3(VAR_12);
 return(0);
    }

    VAR_8 = FUNC_1)(FUNC_2(VAR_6), VAR_4, &VAR_7);
    if (VAR_8 != 0) {
 return(VAR_8);
    }

    VAR_12 = FUNC_3(VAR_0);
    VAR_9 = FUNC_0(VAR_6);
    VAR_10 = VAR_9->core;
    VAR_11 = VAR_10->package;




    VAR_10->Hpet = (hpetTimer_t *)((uint8_t *)VAR_3 + VAR_7.hpetOffset);
    VAR_10->HpetVec = VAR_7.hpetVector;




    VAR_10->Hpet->Config |= VAR_1;




    VAR_10->HpetCfg = VAR_10->Hpet->Config;
    VAR_10->HpetCmp = 0;





    if (VAR_9->primary) {
 VAR_11->Hpet = VAR_10->Hpet;
 VAR_11->HpetCfg = VAR_10->HpetCfg;
 VAR_11->HpetCmp = VAR_10->HpetCmp;
 VAR_11->flags |= VAR_2;
    }

    FUNC_3(VAR_12);

    return(0);
}
