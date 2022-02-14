
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* issue; int enableint; int verifybios; int programbios; int erasebios; void* intr; int reset; int statinit; int statupd; int init; int isinit; int isintr; } ;
struct TYPE_9__ {TYPE_1__ func; } ;
typedef TYPE_2__ ips_ha_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

__attribute__((used)) static void
FUNC_4(ips_ha_t * VAR_32)
{




 if (FUNC_1(VAR_32) || FUNC_0(VAR_32)) {

  VAR_32->func.isintr = VAR_15;
  VAR_32->func.isinit = VAR_12;
  VAR_32->func.issue = VAR_19;
  VAR_32->func.init = VAR_7;
  VAR_32->func.statupd = VAR_29;
  VAR_32->func.reset = VAR_24;
  VAR_32->func.intr = VAR_9;
  VAR_32->func.enableint = VAR_2;
 } else if (FUNC_3(VAR_32)) {

  VAR_32->func.isintr = VAR_14;
  VAR_32->func.isinit = VAR_11;
  VAR_32->func.init = VAR_6;
  VAR_32->func.statupd = VAR_28;
  VAR_32->func.statinit = VAR_26;
  VAR_32->func.reset = VAR_23;
  VAR_32->func.intr = VAR_8;
  VAR_32->func.erasebios = VAR_4;
  VAR_32->func.programbios = VAR_21;
  VAR_32->func.verifybios = VAR_31;
  VAR_32->func.enableint = VAR_1;
  if (FUNC_2(VAR_32))
   VAR_32->func.issue = VAR_19;
  else
   VAR_32->func.issue = VAR_17;
 } else {

  VAR_32->func.isintr = VAR_13;
  VAR_32->func.isinit = VAR_10;
  VAR_32->func.init = VAR_5;
  VAR_32->func.statupd = VAR_27;
  VAR_32->func.statinit = VAR_25;
  VAR_32->func.reset = VAR_22;
  VAR_32->func.intr = VAR_8;
  VAR_32->func.erasebios = VAR_3;
  VAR_32->func.programbios = VAR_20;
  VAR_32->func.verifybios = VAR_30;
  VAR_32->func.enableint = VAR_0;

  if (FUNC_2(VAR_32))
   VAR_32->func.issue = VAR_18;
  else
   VAR_32->func.issue = VAR_16;
 }
}
