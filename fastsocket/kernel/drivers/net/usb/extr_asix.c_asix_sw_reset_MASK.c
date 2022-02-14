
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct usbnet*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_1, u8 VAR_2)
{
 int VAR_3;

        VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2, 0, 0, ((void*)0));
 if (VAR_3 < 0)
  FUNC_1(VAR_1,"Failed to send software reset: %02x", VAR_3);

 return VAR_3;
}
