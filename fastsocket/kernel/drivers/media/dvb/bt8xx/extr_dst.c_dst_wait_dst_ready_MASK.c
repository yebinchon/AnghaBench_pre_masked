
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 scalar_t__ FUNC_1 (struct dst_state*,int*) ;
 int FUNC_2 (int) ;
 int VAR_4 ;

int FUNC_3(struct dst_state *VAR_5, u8 VAR_6)
{
 u8 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 200; VAR_8++) {
  if (FUNC_1(VAR_5, &VAR_7) < 0) {
   FUNC_0(VAR_4, VAR_0, 1, "dst_gpio_inb ERROR !");
   return -1;
  }
  if ((VAR_7 & VAR_3) == 0) {
   FUNC_0(VAR_4, VAR_1, 1, "dst wait ready after %d", VAR_8);
   return 1;
  }
  FUNC_2(10);
 }
 FUNC_0(VAR_4, VAR_2, 1, "dst wait NOT ready after %d", VAR_8);

 return 0;
}
