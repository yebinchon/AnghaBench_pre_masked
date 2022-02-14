
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int initial_state; int flags; } ;
typedef TYPE_1__ XWMHints ;
struct TYPE_10__ {int override_redirect; } ;
typedef TYPE_2__ XSetWindowAttributes ;
struct TYPE_11__ {int type; } ;
typedef TYPE_3__ XEvent ;
typedef int Window ;
struct TYPE_12__ {scalar_t__ (* pXNextEvent ) (int *,TYPE_3__*) ;int (* pXSync ) (int *,int ) ;int (* pXkbSetDetectableAutoRepeat ) (int *,int,int *) ;int (* pXGrabKeyboard ) (int *,int ,int ,int ,int ,int ) ;int (* pXMapWindow ) (int *,int ) ;int (* pXMoveResizeWindow ) (int *,int ,int ,int ,int,int) ;int (* pXChangeWindowAttributes ) (int *,int ,int ,TYPE_2__*) ;int (* pXWithdrawWindow ) (int *,int ,int) ;int (* pXSetWMHints ) (int *,int ,TYPE_1__*) ;int * display; int window; } ;
typedef int Display ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_8__ VAR_7 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ,TYPE_2__*) ;
 int FUNC_8 (int *,int ,TYPE_1__*) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,int ,int ,TYPE_2__*) ;
 int FUNC_13 (int *,int ,int ,int ,int,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(void)
{
 XSetWindowAttributes VAR_8;
 Display *VAR_9 = VAR_7.display;
 Window VAR_10 = VAR_7.window;
 int VAR_11 = FUNC_0(VAR_7.display);
 int VAR_12, VAR_13;
 XWMHints VAR_14;
 XEvent VAR_15;

 VAR_7.pXWithdrawWindow(VAR_9, VAR_10, VAR_11);

 VAR_8.override_redirect = VAR_2;
 VAR_7.pXChangeWindowAttributes(VAR_9, VAR_10,
  VAR_0, &VAR_8);

 VAR_14.flags = VAR_5;
 VAR_14.initial_state = VAR_4;
 VAR_7.pXSetWMHints(VAR_9, VAR_10, &VAR_14);

 VAR_7.pXMapWindow(VAR_9, VAR_10);

 while (VAR_7.pXNextEvent(VAR_9, &VAR_15) == 0)
 {

  switch (VAR_15.type)
  {
   case 128:
    goto out;
   default:
    break;
  }
 }

out:
 VAR_7.pXWithdrawWindow(VAR_9, VAR_10, VAR_11);


 FUNC_15();

 VAR_8.override_redirect = VAR_6;
 VAR_7.pXChangeWindowAttributes(VAR_9, VAR_10,
  VAR_0, &VAR_8);


 VAR_12 = FUNC_2(VAR_9, VAR_11);
 VAR_13 = FUNC_1(VAR_9, VAR_11);
 VAR_7.pXMoveResizeWindow(VAR_9, VAR_10, 0, 0, VAR_12, VAR_13);

 VAR_7.pXMapWindow(VAR_9, VAR_10);
 VAR_7.pXGrabKeyboard(VAR_9, VAR_10, VAR_2, VAR_3, VAR_3, VAR_1);
 VAR_7.pXkbSetDetectableAutoRepeat(VAR_9, 1, ((void*)0));


 VAR_7.pXSync(VAR_9, VAR_2);

 return 0;
}
