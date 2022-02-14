
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int window_type; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(int VAR_5, int VAR_6, int VAR_7)
{
 if (VAR_7 & VAR_3) {
  VAR_4 = ((VAR_4 & 0xfc) | 0x01);



 } else {
  VAR_4 = (VAR_4 & 0xfc);



 }

 FUNC_1(VAR_0, VAR_5);
 FUNC_1(VAR_1, VAR_6);
 FUNC_1(VAR_2, VAR_4);
}
