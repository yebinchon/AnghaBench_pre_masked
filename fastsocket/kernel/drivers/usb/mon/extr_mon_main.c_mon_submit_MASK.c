
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {struct mon_bus* mon_bus; } ;
struct urb {int dummy; } ;
struct mon_bus {int dummy; } ;


 struct mon_bus VAR_0 ;
 int FUNC_0 (struct mon_bus*,struct urb*) ;

__attribute__((used)) static void FUNC_1(struct usb_bus *VAR_1, struct urb *VAR_2)
{
 struct mon_bus *VAR_3;

 if ((VAR_3 = VAR_1->mon_bus) != ((void*)0))
  FUNC_0(VAR_3, VAR_2);
 FUNC_0(&VAR_0, VAR_2);
}
