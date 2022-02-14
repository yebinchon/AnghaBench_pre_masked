
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb {int dummy; } ;
struct zd_ioreq16 {int dummy; } ;


 int FUNC_0 (struct zd_usb*,struct zd_ioreq16 const*,unsigned int) ;
 int FUNC_1 (struct zd_usb*,int) ;
 int FUNC_2 (struct zd_usb*) ;

int FUNC_3(struct zd_usb *VAR_0, const struct zd_ioreq16 *VAR_1,
   unsigned int VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_0);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_0, 0);
  return VAR_3;
 }
 return FUNC_1(VAR_0, 50 );
}
