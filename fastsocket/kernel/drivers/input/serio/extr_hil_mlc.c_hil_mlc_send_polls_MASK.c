
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct serio_driver {int (* interrupt ) (struct serio*,int,int ) ;} ;
struct serio {struct serio_driver* drv; } ;
typedef int hil_packet ;
struct TYPE_3__ {int* ipacket; size_t* di_map; int icount; struct serio** serio; } ;
typedef TYPE_1__ hil_mlc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct serio*,int,int ) ;
 int FUNC_1 (struct serio*,int,int ) ;
 int FUNC_2 (struct serio*,int,int ) ;
 int FUNC_3 (struct serio*,int,int ) ;
 int FUNC_4 (struct serio*,int,int ) ;
 int FUNC_5 (struct serio*,int,int ) ;
 int FUNC_6 (struct serio*,int,int ) ;
 int FUNC_7 (struct serio*,int,int ) ;

__attribute__((used)) static void FUNC_8(hil_mlc *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct serio *VAR_8;
 struct serio_driver *VAR_9;

 VAR_6 = VAR_7 = 0;
 VAR_5 = (VAR_4->ipacket[0] & VAR_2) >> 8;
 VAR_8 = VAR_5 ? VAR_4->serio[VAR_4->di_map[VAR_5 - 1]] : ((void*)0);
 VAR_9 = (VAR_8 != ((void*)0)) ? VAR_8->drv : ((void*)0);

 while (VAR_4->icount < 15 - VAR_6) {
  hil_packet VAR_10;

  VAR_10 = VAR_4->ipacket[VAR_6];
  if (VAR_5 != (VAR_10 & VAR_2) >> 8) {
   if (VAR_9 && VAR_9->interrupt) {
    VAR_9->interrupt(VAR_8, 0, 0);
    VAR_9->interrupt(VAR_8, VAR_1 >> 16, 0);
    VAR_9->interrupt(VAR_8, VAR_3 >> 8, 0);
    VAR_9->interrupt(VAR_8, VAR_0 + VAR_7, 0);
   }

   VAR_5 = (VAR_10 & VAR_2) >> 8;
   VAR_8 = VAR_5 ? VAR_4->serio[VAR_4->di_map[VAR_5-1]] : ((void*)0);
   VAR_9 = (VAR_8 != ((void*)0)) ? VAR_8->drv : ((void*)0);
   VAR_7 = 0;
  }

  VAR_7++;
  VAR_6++;

  if (VAR_9 && VAR_9->interrupt) {
   VAR_9->interrupt(VAR_8, (VAR_10 >> 24), 0);
   VAR_9->interrupt(VAR_8, (VAR_10 >> 16) & 0xff, 0);
   VAR_9->interrupt(VAR_8, (VAR_10 >> 8) & ~VAR_2, 0);
   VAR_9->interrupt(VAR_8, VAR_10 & 0xff, 0);
  }
 }
}
