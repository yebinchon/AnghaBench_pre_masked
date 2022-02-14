
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wlandevice_t ;
typedef int u16 ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ hfa384x_usbin_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(wlandevice_t *VAR_0,
      hfa384x_usbin_t *VAR_1)
{
 u16 VAR_2;

 VAR_2 = FUNC_1(VAR_1->type);


 if (FUNC_0(VAR_2))
  FUNC_3(VAR_0, VAR_2);
 else
  FUNC_2(VAR_0, VAR_2);
}
