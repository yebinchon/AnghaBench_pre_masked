
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int dummy; } ;


 int FUNC_0 (struct usbnet*,char*,int ,int ) ;
 int FUNC_1 (struct usbnet*,int ,int ,int ,void*) ;

__attribute__((used)) static void FUNC_2(struct usbnet *VAR_0, u8 VAR_1, u16 VAR_2, void *VAR_3)
{
 FUNC_0(VAR_0, "dm_write_async() reg=0x%02x length=%d", VAR_1, VAR_2);

 FUNC_1(VAR_0, VAR_1, 0, VAR_2, VAR_3);
}
