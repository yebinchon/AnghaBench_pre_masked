
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usbnet*,char*,int,int) ;
 scalar_t__ FUNC_2 (struct usbnet*) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_0, __le32 *VAR_1)
{
 if (FUNC_2(VAR_0))
  FUNC_1(VAR_0, "link speeds: %u kbps up, %u kbps down",
   FUNC_0(VAR_1[0]) / 1000,
  FUNC_0(VAR_1[1]) / 1000);
}
