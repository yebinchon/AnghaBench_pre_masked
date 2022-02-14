
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ok; } ;
struct usb_line6_variax {TYPE_1__ dumpreq; int line6; } ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int,void (*) (unsigned long),struct usb_line6_variax*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct usb_line6_variax *VAR_1 = (struct usb_line6_variax *)VAR_0;

 if (VAR_1->dumpreq.ok)
  return;

 FUNC_0(&VAR_1->dumpreq, &VAR_1->line6, 0);
 FUNC_1(&VAR_1->dumpreq, 1, FUNC_2,
         VAR_1);
}
