
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; int kevent; int flags; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;

void FUNC_5 (struct usbnet *VAR_0, int VAR_1)
{
 FUNC_4 (VAR_1, &VAR_0->flags);
 if (!FUNC_3 (&VAR_0->kevent)) {
  if (FUNC_0())
   FUNC_2(VAR_0->net, "kevent %d may have been dropped\n", VAR_1);
 } else {
  FUNC_1(VAR_0->net, "kevent %d scheduled\n", VAR_1);
 }
}
