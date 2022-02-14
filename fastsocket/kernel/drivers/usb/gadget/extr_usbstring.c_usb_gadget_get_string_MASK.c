
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_string {int id; int s; } ;
struct usb_gadget_strings {int language; struct usb_string* strings; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int) ;

int
FUNC_4 (struct usb_gadget_strings *VAR_2, int VAR_3, u8 *VAR_4)
{
 struct usb_string *VAR_5;
 int VAR_6;


 if (VAR_3 == 0) {
  VAR_4 [0] = 4;
  VAR_4 [1] = VAR_1;
  VAR_4 [2] = (u8) VAR_2->language;
  VAR_4 [3] = (u8) (VAR_2->language >> 8);
  return 4;
 }
 for (VAR_5 = VAR_2->strings; VAR_5 && VAR_5->s; VAR_5++)
  if (VAR_5->id == VAR_3)
   break;


 if (!VAR_5 || !VAR_5->s)
  return -VAR_0;


 VAR_6 = FUNC_1 ((size_t) 126, FUNC_2 (VAR_5->s));
 FUNC_0 (VAR_4 + 2, 0, 2 * VAR_6);
 VAR_6 = FUNC_3(VAR_5->s, (__le16 *)&VAR_4[2], VAR_6);
 if (VAR_6 < 0)
  return -VAR_0;
 VAR_4 [0] = (VAR_6 + 1) * 2;
 VAR_4 [1] = VAR_1;
 return VAR_4 [0];
}
