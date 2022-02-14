
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numOfCores; int numOfTotalVnodes; scalar_t__ alternativeRole; int numOfVnodes; int numOfFreeVnodes; int status; scalar_t__ openVnodes; } ;
typedef TYPE_1__ SDnodeObj ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(SDnodeObj *VAR_6) {
  int VAR_7 = VAR_6->numOfCores * VAR_5;
  VAR_7 = VAR_7 > VAR_1 ? VAR_1 : VAR_7;
  VAR_7 = VAR_7 < VAR_2 ? VAR_2 : VAR_7;
  if (VAR_6->numOfTotalVnodes != 0) {
    VAR_7 = VAR_6->numOfTotalVnodes;
  }
  if (VAR_6->alternativeRole == VAR_0) {
    VAR_7 = 0;
  }

  VAR_6->numOfVnodes = VAR_7;
  VAR_6->numOfFreeVnodes = VAR_7;
  VAR_6->openVnodes = 0;




  VAR_6->status = VAR_4;

}
