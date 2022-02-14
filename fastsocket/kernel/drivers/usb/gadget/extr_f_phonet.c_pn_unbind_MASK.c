
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct usb_configuration {int dummy; } ;
struct f_phonet {scalar_t__* out_reqv; int out_ep; scalar_t__ in_req; int in_ep; } ;


 struct f_phonet* FUNC_0 (struct usb_function*) ;
 int FUNC_1 (struct f_phonet*) ;
 int VAR_0 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct usb_configuration *VAR_1, struct usb_function *VAR_2)
{
 struct f_phonet *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;


 if (VAR_3->in_req)
  FUNC_2(VAR_3->in_ep, VAR_3->in_req);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_3->out_reqv[VAR_4])
   FUNC_2(VAR_3->out_ep, VAR_3->out_reqv[VAR_4]);

 FUNC_1(VAR_3);
}
