
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {int buffer_versionreq; int line6; } ;
typedef int pod_request_version ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct usb_line6_pod *VAR_0)
{
 return FUNC_0(&VAR_0->line6, VAR_0->buffer_versionreq, sizeof(pod_request_version));
}
