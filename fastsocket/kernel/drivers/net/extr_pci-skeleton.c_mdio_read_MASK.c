
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdrv_private {void* mmio_addr; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 int* VAR_5 ;
 struct netdrv_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int,void*) ;

__attribute__((used)) static int FUNC_7 (struct net_device *VAR_6, int VAR_7, int VAR_8)
{
 struct netdrv_private *VAR_9 = FUNC_3(VAR_6);
 void *VAR_10 = VAR_9->mmio_addr + VAR_0;
 int VAR_11 = (0xf6 << 10) | (VAR_7 << 5) | VAR_8;
 int VAR_12 = 0;
 int VAR_13;

 FUNC_0 ("ENTER\n");

 if (VAR_7 > 31) {
  FUNC_0 ("EXIT after directly using 8139 internal regs\n");
  return VAR_8 < 8 && VAR_5[VAR_8] ?
      FUNC_5 (VAR_9->mmio_addr + VAR_5[VAR_8]) : 0;
 }
 FUNC_2 (VAR_10);

 for (VAR_13 = 15; VAR_13 >= 0; VAR_13--) {
  int VAR_14 = (VAR_11 & (1 << VAR_13)) ? VAR_3 : 0;

  FUNC_6 (VAR_4 | VAR_14, VAR_10);
  FUNC_1 ();
  FUNC_6 (VAR_4 | VAR_14 | VAR_1, VAR_10);
  FUNC_1 ();
 }


 for (VAR_13 = 19; VAR_13 > 0; VAR_13--) {
  FUNC_6 (0, VAR_10);
  FUNC_1 ();
  VAR_12 =
      (VAR_12 << 1) | ((FUNC_4 (VAR_10) & VAR_2) ? 1
         : 0);
  FUNC_6 (VAR_1, VAR_10);
  FUNC_1 ();
 }

 FUNC_0 ("EXIT, returning %d\n", (VAR_12 >> 1) & 0xffff);
 return (VAR_12 >> 1) & 0xffff;
}
