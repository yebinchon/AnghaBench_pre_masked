
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int x; int y; } ;
struct TYPE_7__ {int x; int y; int button; } ;
struct TYPE_9__ {int type; TYPE_2__ xmotion; TYPE_1__ xbutton; int xkey; } ;
typedef TYPE_3__ XEvent ;
struct TYPE_10__ {int (* pXLookupKeysym ) (int *,int ) ;int display; int (* pXCheckTypedEvent ) (int ,int const,TYPE_3__*) ;int (* pXNextEvent ) (int ,TYPE_3__*) ;scalar_t__ (* pXPending ) (int ) ;} ;
 TYPE_6__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,int const,TYPE_3__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(int (*VAR_1)(void *VAR_2, int VAR_3, int VAR_4),
   int (*VAR_5)(void *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10),
   int (*VAR_11)(void *VAR_12, int VAR_13, int VAR_14),
   void *VAR_15)
{
 XEvent VAR_16;
 int VAR_17;

 while (VAR_0.pXPending(VAR_0.display))
 {
  VAR_0.pXNextEvent(VAR_0.display, &VAR_16);
  switch (VAR_16.type)
  {
  case 131:
   while (VAR_0.pXCheckTypedEvent(VAR_0.display, 131, &VAR_16))
    ;
   break;

  case 130:
   VAR_17 = VAR_0.pXLookupKeysym(&VAR_16.xkey, 0);
   if (VAR_1 != ((void*)0))
    VAR_1(VAR_15, VAR_17, 1);
   break;

  case 129:
   VAR_17 = VAR_0.pXLookupKeysym(&VAR_16.xkey, 0);
   if (VAR_1 != ((void*)0))
    VAR_1(VAR_15, VAR_17, 0);
   break;

  case 133:
   if (VAR_5 != ((void*)0))
    VAR_5(VAR_15, VAR_16.xbutton.x, VAR_16.xbutton.y,
       VAR_16.xbutton.button, 1);
   break;

  case 132:
   if (VAR_5 != ((void*)0))
    VAR_5(VAR_15, VAR_16.xbutton.x, VAR_16.xbutton.y,
       VAR_16.xbutton.button, 0);
   break;

  case 128:
   if (VAR_11 != ((void*)0))
    VAR_11(VAR_15, VAR_16.xmotion.x, VAR_16.xmotion.y);
   break;
  }
 }
}
