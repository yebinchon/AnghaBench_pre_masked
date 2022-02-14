
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct printer_dev {int * out; int * in; TYPE_1__* out_ep; TYPE_1__* in_ep; int gadget; } ;
struct TYPE_3__ {int name; struct printer_dev* driver_data; } ;


 int FUNC_0 (struct printer_dev*,char*,int ,int) ;
 void* FUNC_1 (int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_4(struct printer_dev *VAR_4)
{
 int VAR_5 = 0;

 VAR_4->in = FUNC_1(VAR_4->gadget, &VAR_2, &VAR_0);
 VAR_4->in_ep->driver_data = VAR_4;

 VAR_4->out = FUNC_1(VAR_4->gadget, &VAR_3, &VAR_1);
 VAR_4->out_ep->driver_data = VAR_4;

 VAR_5 = FUNC_3(VAR_4->in_ep, VAR_4->in);
 if (VAR_5 != 0) {
  FUNC_0(VAR_4, "enable %s --> %d\n", VAR_4->in_ep->name, VAR_5);
  goto done;
 }

 VAR_5 = FUNC_3(VAR_4->out_ep, VAR_4->out);
 if (VAR_5 != 0) {
  FUNC_0(VAR_4, "enable %s --> %d\n", VAR_4->in_ep->name, VAR_5);
  goto done;
 }

done:

 if (VAR_5 != 0) {
  (void) FUNC_2(VAR_4->in_ep);
  (void) FUNC_2(VAR_4->out_ep);
  VAR_4->in = ((void*)0);
  VAR_4->out = ((void*)0);
 }


 return VAR_5;
}
