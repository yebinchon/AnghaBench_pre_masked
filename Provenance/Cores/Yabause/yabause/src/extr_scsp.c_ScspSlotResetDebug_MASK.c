
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int slot_t ;
struct TYPE_5__ {int enxt; int ecurp; int ecmp; int einca; int * einc; int ecnt; scalar_t__ fcnt; } ;
struct TYPE_4__ {int * slot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *,int) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

void
FUNC_1(u8 VAR_6)
{
  FUNC_0 (&VAR_3, &VAR_4.slot[VAR_6], sizeof(slot_t));


  VAR_3.fcnt = 0;
  VAR_3.ecnt = VAR_1;
  VAR_3.einc = &VAR_3.einca;
  VAR_3.ecmp = VAR_0;
  VAR_3.ecurp = VAR_2;
  VAR_3.enxt = VAR_5;
}
