
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int single_transfer; int active; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;

void FUNC_4(void)
{
 FUNC_0(VAR_4.active);
 if (!VAR_3) {

  FUNC_2(0x5440, VAR_0);
  FUNC_2(0x9102, VAR_1);
  FUNC_2(0x0004, VAR_2);
 }
 FUNC_3();
 if (!VAR_3) {
  u16 VAR_5;

  VAR_5 = FUNC_1(VAR_0);





  VAR_5 |= 1 << 11;
  if (!VAR_4.single_transfer)
   VAR_5 |= (3 << 8);
  FUNC_2(VAR_5, VAR_0);
 }
}
