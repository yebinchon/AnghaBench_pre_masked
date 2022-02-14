
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {scalar_t__ keycode; scalar_t__ time; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ xkey; } ;
typedef TYPE_2__ XEvent ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static qboolean FUNC_4(XEvent *VAR_4)
{
  XEvent VAR_5;
  qboolean VAR_6 = VAR_2;

  FUNC_3(VAR_1 != ((void*)0));

  if (FUNC_0())
  {
    FUNC_2(VAR_1, &VAR_5);

    if ((VAR_5.type == VAR_0) &&
        (VAR_5.xkey.keycode == VAR_4->xkey.keycode) &&
        (VAR_5.xkey.time == VAR_4->xkey.time))
    {
      VAR_6 = VAR_3;
      FUNC_1(VAR_1, &VAR_5);
    }
  }

  return(VAR_6);
}
