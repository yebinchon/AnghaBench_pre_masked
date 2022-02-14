
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int int64_t ;
struct TYPE_3__ {int createdTime; scalar_t__ numOfVnodes; void* thandle; int numOfTotalVnodes; int alternativeRole; int status; scalar_t__ numOfCores; scalar_t__ lastReboot; int privateIp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

int FUNC_3() {
  VAR_3.privateIp = FUNC_0(VAR_4);;
  VAR_3.createdTime = (int64_t)VAR_7 * 1000;
  VAR_3.lastReboot = VAR_7;
  VAR_3.numOfCores = (uint16_t)VAR_5;
  VAR_3.status = VAR_2;
  VAR_3.alternativeRole = VAR_0;
  VAR_3.numOfTotalVnodes = VAR_6;
  VAR_3.thandle = (void*)(1);
  if (VAR_3.numOfVnodes == VAR_1) {
    FUNC_2(&VAR_3);
    FUNC_1("first access, set total vnodes:%d", VAR_3.numOfVnodes);
  }
  return 0;
}
