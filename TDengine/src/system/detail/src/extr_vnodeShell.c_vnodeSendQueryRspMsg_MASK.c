
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int thandle; } ;
typedef TYPE_1__ SShellObj ;


 int VAR_0 ;
 char* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(SShellObj *VAR_1, int VAR_2, void *VAR_3) {
  char *VAR_4, *VAR_5;
  int VAR_6;

  VAR_5 = FUNC_0(VAR_1->thandle, VAR_0, 128);
  if (VAR_5 == ((void*)0)) return -1;
  VAR_4 = VAR_5;

  *VAR_4 = VAR_2;
  VAR_4++;

  *((uint64_t *)VAR_4) = (uint64_t)VAR_3;
  VAR_4 += 8;

  VAR_6 = VAR_4 - VAR_5;
  FUNC_1(VAR_1->thandle, VAR_5, VAR_6);

  return VAR_6;
}
