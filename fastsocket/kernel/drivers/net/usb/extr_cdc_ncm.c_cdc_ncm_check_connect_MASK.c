
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {scalar_t__* data; } ;
struct cdc_ncm_ctx {int connected; } ;



__attribute__((used)) static int FUNC_0(struct usbnet *VAR_0)
{
 struct cdc_ncm_ctx *VAR_1;

 VAR_1 = (struct cdc_ncm_ctx *)VAR_0->data[0];
 if (VAR_1 == ((void*)0))
  return 1;

 return !VAR_1->connected;
}
