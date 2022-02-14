
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_wac {char* data; } ;
struct wacom_combo {struct urb* urb; } ;
struct urb {scalar_t__ actual_length; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char) ;
 int FUNC_1 (struct wacom_wac*,void*) ;
 int FUNC_2 (struct wacom_wac*,void*) ;
 int FUNC_3 (struct wacom_wac*,void*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct wacom_wac *VAR_1, void *VAR_2)
{
 char *VAR_3 = VAR_1->data;
 struct urb *VAR_4 = ((struct wacom_combo *)VAR_2)->urb;

 FUNC_0("wacom_tpc_irq: received report #%d", VAR_3[0]);

 if (VAR_4->actual_length == VAR_0 || VAR_3[0] == 6)
  return FUNC_3(VAR_1, VAR_2, VAR_4->actual_length);
 else if (VAR_3[0] == 13)
  return FUNC_1(VAR_1, VAR_2);
 else if (VAR_3[0] == 2)
  return FUNC_2(VAR_1, VAR_2);

 return 0;
}
