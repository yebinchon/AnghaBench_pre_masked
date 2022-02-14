
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* handler ) (int ,int) ;scalar_t__ beh; int id; int selectable; int enabled; } ;
typedef TYPE_1__ menu_entry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,void (*) ()) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(menu_entry *VAR_10, int *VAR_11, void (*VAR_12)(void), void (*VAR_13)(void))
{
 int VAR_14 = 0, VAR_15, VAR_16 = *VAR_11, VAR_17;

 VAR_17 = FUNC_4(VAR_10) - 1;
 if (VAR_17 < 0) {
  FUNC_3("no enabled menu entries\n");
  return 0;
 }

 while ((!VAR_10[VAR_16].enabled || !VAR_10[VAR_16].selectable) && VAR_16 < VAR_17)
  VAR_16++;


 FUNC_5(VAR_10, VAR_16, ((void*)0));
 while (FUNC_2(((void*)0), 50) & (VAR_6|VAR_4|VAR_5));

 for (;;)
 {
  if (VAR_12 != ((void*)0))
   VAR_12();

  FUNC_5(VAR_10, VAR_16, VAR_13);
  VAR_15 = FUNC_1(VAR_9|VAR_1|VAR_3|VAR_8|
   VAR_6|VAR_4|VAR_5|VAR_2|VAR_7, ((void*)0), 70);
  if (VAR_15 & (VAR_5|VAR_4))
   break;

  if (VAR_15 & VAR_9 ) {
   do {
    VAR_16--;
    if (VAR_16 < 0)
     VAR_16 = VAR_17;
   }
   while (!VAR_10[VAR_16].enabled || !VAR_10[VAR_16].selectable);
  }
  if (VAR_15 & VAR_1) {
   do {
    VAR_16++;
    if (VAR_16 > VAR_17)
     VAR_16 = 0;
   }
   while (!VAR_10[VAR_16].enabled || !VAR_10[VAR_16].selectable);
  }


  if ((VAR_15 & (VAR_2|VAR_7)) == (VAR_2|VAR_7))
   FUNC_0();

  if (VAR_15 & (VAR_3|VAR_8|VAR_2|VAR_7)) {
   if (FUNC_6(&VAR_10[VAR_16], (VAR_15 & (VAR_8|VAR_7)) ? 1 : 0,
      VAR_15 & (VAR_2|VAR_7)))
    continue;
  }

  if (VAR_15 & (VAR_6|VAR_3|VAR_8|VAR_2|VAR_7))
  {

   if (VAR_10[VAR_16].handler != ((void*)0) && (VAR_10[VAR_16].beh != VAR_0 || (VAR_15 & VAR_6))) {
    VAR_14 = VAR_10[VAR_16].handler(VAR_10[VAR_16].id, VAR_15);
    if (VAR_14) break;
    VAR_17 = FUNC_4(VAR_10) - 1;
   }
  }
 }
 *VAR_11 = VAR_16;

 return VAR_14;
}
