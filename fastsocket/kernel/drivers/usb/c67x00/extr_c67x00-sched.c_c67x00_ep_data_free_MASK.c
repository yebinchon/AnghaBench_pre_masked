
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {struct c67x00_ep_data* hcpriv; } ;
struct c67x00_ep_data {int node; int queue; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct c67x00_ep_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct usb_host_endpoint *VAR_1)
{
 struct c67x00_ep_data *VAR_2 = VAR_1->hcpriv;

 if (!VAR_2)
  return 0;

 if (!FUNC_2(&VAR_2->queue))
  return -VAR_0;

 FUNC_3(VAR_2->dev);
 FUNC_1(&VAR_2->queue);
 FUNC_1(&VAR_2->node);

 FUNC_0(VAR_2);
 VAR_1->hcpriv = ((void*)0);

 return 0;
}
