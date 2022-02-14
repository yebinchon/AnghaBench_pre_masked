
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int pass; } ;
typedef TYPE_1__ SUserObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int ) ;
 TYPE_1__* FUNC_1 (char*) ;

int FUNC_2(char *VAR_2, char *VAR_3, char *VAR_4, uint8_t *VAR_5, uint8_t *VAR_6) {
  SUserObj *VAR_7 = ((void*)0);

  *VAR_3 = 0;
  *VAR_4 = 0;
  VAR_5[0] = 0;
  VAR_6[0] = 0;

  VAR_7 = FUNC_1(VAR_2);
  if (VAR_7 == ((void*)0)) return VAR_0;

  *VAR_3 = 1;
  *VAR_4 = 0;
  FUNC_0(VAR_5, VAR_7->pass, VAR_1);

  return 0;
}
