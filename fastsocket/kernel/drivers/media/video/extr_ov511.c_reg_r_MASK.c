
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ bclass; int* cbuf; int cbuf_lock; int dev; } ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,unsigned char,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int,int,int ,int ,int*,int,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct usb_ov511 *VAR_5, unsigned char VAR_6)
{
 int VAR_7;

 FUNC_2(&VAR_5->cbuf_lock);
 VAR_7 = FUNC_5(VAR_5->dev,
        FUNC_6(VAR_5->dev, 0),
        (VAR_5->bclass == VAR_0)?1:3 ,
        VAR_1 | VAR_3 | VAR_2,
        0, (__u16)VAR_6, &VAR_5->cbuf[0], 1, 1000);

 if (VAR_7 < 0) {
  FUNC_1("reg read: error %d: %s", VAR_7, FUNC_4(VAR_4, VAR_7));
 } else {
  VAR_7 = VAR_5->cbuf[0];
  FUNC_0(5, "0x%02X:0x%02X", VAR_6, VAR_5->cbuf[0]);
 }

 FUNC_3(&VAR_5->cbuf_lock);

 return VAR_7;
}
