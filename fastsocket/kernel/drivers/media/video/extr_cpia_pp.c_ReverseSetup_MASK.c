
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pp_cam_entry {TYPE_2__* port; } ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {int modes; TYPE_1__ ieee1284; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_3(struct pp_cam_entry *VAR_8, int VAR_9)
{
 int VAR_10;
 int VAR_11, VAR_12 = VAR_2;
 int VAR_13 = VAR_0;

 if (!(VAR_8->port->modes & VAR_5) &&
      !(VAR_8->port->modes & VAR_6)) {
  VAR_12 = VAR_3;
  VAR_13 = VAR_4;
 }

 VAR_11 = VAR_12;
 if(VAR_9) VAR_12 = VAR_7|VAR_13|VAR_1;




 for(VAR_10 = 0; VAR_10 < 4; ++VAR_10) {
  if(!FUNC_2(VAR_8->port, VAR_12)) {
   break;
  }
  FUNC_1(10);
 }
 if(VAR_10 == 4) {
  if(VAR_9)
   FUNC_0("Unable to negotiate upload extensibility mode\n");
  else
   FUNC_0("Unable to negotiate upload mode\n");
  return -1;
 }
 if(VAR_9) VAR_8->port->ieee1284.mode = VAR_11;
 return 0;
}
