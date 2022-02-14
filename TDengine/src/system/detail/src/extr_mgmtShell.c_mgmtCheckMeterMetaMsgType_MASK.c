
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_2__ {int meterId; int createFlag; } ;
typedef int STabObj ;
typedef TYPE_1__ SMeterInfoMsg ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int * FUNC_2 (int ) ;

bool FUNC_3(char *VAR_0) {
  SMeterInfoMsg *VAR_1 = (SMeterInfoMsg *)VAR_0;

  int16_t VAR_2 = FUNC_0(VAR_1->createFlag);
  STabObj *VAR_3 = FUNC_2(VAR_1->meterId);


  bool VAR_4 = (VAR_3 == ((void*)0) && VAR_2 == 1);
  if (VAR_4) {
    FUNC_1("meter:%s auto created task added", VAR_1->meterId);
  }

  return VAR_4;
}
