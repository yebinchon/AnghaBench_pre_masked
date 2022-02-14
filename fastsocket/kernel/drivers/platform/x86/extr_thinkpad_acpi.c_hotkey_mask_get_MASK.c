
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ hotkey_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static int FUNC_1(void)
{
 if (VAR_6.hotkey_mask) {
  u32 VAR_7 = 0;

  if (!FUNC_0(VAR_1, &VAR_7, "DHKN", "d"))
   return -VAR_0;

  VAR_2 = VAR_7;
 } else {

  VAR_2 = VAR_3;
 }


 VAR_5 &= (VAR_2 | VAR_4);

 return 0;
}
