
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdrv_private {void* mmio_addr; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 int* VAR_4 ;
 struct netdrv_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int,void*) ;
 int FUNC_6 (int,void*) ;

__attribute__((used)) static void FUNC_7 (struct net_device *VAR_5, int VAR_6, int VAR_7,
   int VAR_8)
{
 struct netdrv_private *VAR_9 = FUNC_3(VAR_5);
 void *VAR_10 = VAR_9->mmio_addr + VAR_0;
 int VAR_11 =
     (0x5002 << 16) | (VAR_6 << 23) | (VAR_7 << 18) | VAR_8;
 int VAR_12;

 FUNC_0 ("ENTER\n");

 if (VAR_6 > 31) {
  if (VAR_7 < 8 && VAR_4[VAR_7]) {
   FUNC_6 (VAR_8,
    VAR_9->mmio_addr + VAR_4[VAR_7]);
   FUNC_4 (VAR_9->mmio_addr + VAR_4[VAR_7]);
  }
  FUNC_0 ("EXIT after directly using 8139 internal regs\n");
  return;
 }
 FUNC_2 (VAR_10);


 for (VAR_12 = 31; VAR_12 >= 0; VAR_12--) {
  int VAR_13 =
      (VAR_11 & (1 << VAR_12)) ? VAR_3 : VAR_2;
  FUNC_5 (VAR_13, VAR_10);
  FUNC_1 ();
  FUNC_5 (VAR_13 | VAR_1, VAR_10);
  FUNC_1 ();
 }


 for (VAR_12 = 2; VAR_12 > 0; VAR_12--) {
  FUNC_5 (0, VAR_10);
  FUNC_1 ();
  FUNC_5 (VAR_1, VAR_10);
  FUNC_1 ();
 }

 FUNC_0 ("EXIT\n");
}
