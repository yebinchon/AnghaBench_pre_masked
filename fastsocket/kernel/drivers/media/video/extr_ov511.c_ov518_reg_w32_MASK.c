
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_ov511 {int cbuf_lock; scalar_t__ cbuf; int dev; } ;
typedef int __u16 ;
typedef int __le32 ;


 int FUNC_0 (int,char*,unsigned char,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int,int,int ,int ,scalar_t__,int,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct usb_ov511 *VAR_3, unsigned char VAR_4, u32 VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_0(5, "0x%02X:%7d, n=%d", VAR_4, VAR_5, VAR_6);

 FUNC_3(&VAR_3->cbuf_lock);

 *((__le32 *)VAR_3->cbuf) = FUNC_1(VAR_5);

 VAR_7 = FUNC_6(VAR_3->dev,
        FUNC_7(VAR_3->dev, 0),
        1 ,
        VAR_1 | VAR_0,
        0, (__u16)VAR_4, VAR_3->cbuf, VAR_6, 1000);
 FUNC_4(&VAR_3->cbuf_lock);

 if (VAR_7 < 0)
  FUNC_2("reg write multiple: error %d: %s", VAR_7,
      FUNC_5(VAR_2, VAR_7));

 return VAR_7;
}
