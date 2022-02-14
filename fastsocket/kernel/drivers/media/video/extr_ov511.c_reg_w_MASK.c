
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {unsigned char* cbuf; scalar_t__ bclass; int cbuf_lock; int dev; } ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,unsigned char,unsigned char) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,int,int,int ,int ,unsigned char*,int,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct usb_ov511 *VAR_4, unsigned char VAR_5, unsigned char VAR_6)
{
 int VAR_7;

 FUNC_0(5, "0x%02X:0x%02X", VAR_5, VAR_6);

 FUNC_2(&VAR_4->cbuf_lock);
 VAR_4->cbuf[0] = VAR_6;
 VAR_7 = FUNC_5(VAR_4->dev,
        FUNC_6(VAR_4->dev, 0),
        (VAR_4->bclass == VAR_0)?1:2 ,
        VAR_2 | VAR_1,
        0, (__u16)VAR_5, &VAR_4->cbuf[0], 1, 1000);
 FUNC_3(&VAR_4->cbuf_lock);

 if (VAR_7 < 0)
  FUNC_1("reg write: error %d: %s", VAR_7, FUNC_4(VAR_3, VAR_7));

 return VAR_7;
}
