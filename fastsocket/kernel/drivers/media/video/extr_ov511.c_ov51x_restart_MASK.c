
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ bclass; scalar_t__ stopped; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_ov511*,int,int) ;

__attribute__((used)) static inline int
FUNC_2(struct usb_ov511 *VAR_2)
{
 if (VAR_2->stopped) {
  FUNC_0(4, "restarting");
  VAR_2->stopped = 0;


  if (VAR_2->bclass == VAR_0)
   FUNC_1(VAR_2, 0x2f, 0x80);

  return (FUNC_1(VAR_2, VAR_1, 0x00));
 }

 return 0;
}
