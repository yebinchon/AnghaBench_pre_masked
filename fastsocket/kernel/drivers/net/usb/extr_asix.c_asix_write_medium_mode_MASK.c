
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct usbnet*,char*,int ) ;
 int FUNC_2 (struct usbnet*,char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_1, u16 VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1,"asix_write_medium_mode() - mode = 0x%04x", VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2, 0, 0, ((void*)0));
 if (VAR_3 < 0)
  FUNC_2(VAR_1, "Failed to write Medium Mode mode to 0x%04x: %02x",
   VAR_2, VAR_3);

 return VAR_3;
}
