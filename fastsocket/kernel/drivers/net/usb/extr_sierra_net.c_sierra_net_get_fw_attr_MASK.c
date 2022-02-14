
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int dummy; } ;
typedef int attrdata ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usbnet*,int ,int,int,int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_4, u16 *VAR_5)
{
 int VAR_6 = 0;
 __le16 VAR_7;

 VAR_6 = FUNC_1(VAR_4,

    VAR_1,
    VAR_2 | VAR_3,
    0x0000,
    0x0000,
    &VAR_7,
    sizeof(VAR_7)
    );

 if (VAR_6 < 0)
  return -VAR_0;

 *VAR_5 = FUNC_0(VAR_7);
 return VAR_6;
}
