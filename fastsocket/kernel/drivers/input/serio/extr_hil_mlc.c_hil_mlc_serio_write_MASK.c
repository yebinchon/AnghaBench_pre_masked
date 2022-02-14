
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct serio_driver {int (* interrupt ) (struct serio*,scalar_t__,int ) ;} ;
struct serio {struct serio_driver* drv; struct hil_mlc_serio_map* port_data; } ;
struct hil_mlc_serio_map {size_t didx; struct hil_mlc* mlc; } ;
struct hil_mlc {int* serio_opacket; int* serio_oidx; TYPE_1__* di; } ;
typedef int hil_packet ;
struct TYPE_2__ {scalar_t__* rnm; scalar_t__* exd; scalar_t__* rsc; scalar_t__* idd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct serio*,int,int ) ;
 int FUNC_2 (struct serio*,int,int ) ;
 int FUNC_3 (struct serio*,int,int ) ;
 int FUNC_4 (struct serio*,scalar_t__,int ) ;
 int FUNC_5 (struct serio*,scalar_t__,int ) ;
 int FUNC_6 (struct serio*,int,int ) ;
 int FUNC_7 (struct serio*,int,int ) ;
 int FUNC_8 (struct serio*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_9(struct serio *VAR_4, unsigned char VAR_5)
{
 struct hil_mlc_serio_map *VAR_6;
 struct hil_mlc *VAR_7;
 struct serio_driver *VAR_8;
 uint8_t *VAR_9, *VAR_10;

 VAR_6 = VAR_4->port_data;
 FUNC_0(VAR_6 == ((void*)0));

 VAR_7 = VAR_6->mlc;
 FUNC_0(VAR_7 == ((void*)0));

 VAR_7->serio_opacket[VAR_6->didx] |=
  ((hil_packet)VAR_5) << (8 * (3 - VAR_7->serio_oidx[VAR_6->didx]));

 if (VAR_7->serio_oidx[VAR_6->didx] >= 3) {

  if (!(VAR_7->serio_opacket[VAR_6->didx] & VAR_2))
   return -VAR_0;
  switch (VAR_7->serio_opacket[VAR_6->didx] & VAR_3) {
  case 130:
   VAR_9 = VAR_7->di[VAR_6->didx].idd;
   goto emu;
  case 128:
   VAR_9 = VAR_7->di[VAR_6->didx].rsc;
   goto emu;
  case 131:
   VAR_9 = VAR_7->di[VAR_6->didx].exd;
   goto emu;
  case 129:
   VAR_9 = VAR_7->di[VAR_6->didx].rnm;
   goto emu;
  default:
   break;
  }
  VAR_7->serio_oidx[VAR_6->didx] = 0;
  VAR_7->serio_opacket[VAR_6->didx] = 0;
 }

 VAR_7->serio_oidx[VAR_6->didx]++;
 return -VAR_0;
 emu:
 VAR_8 = VAR_4->drv;
 FUNC_0(VAR_8 == ((void*)0));

 VAR_10 = VAR_9 + 15;
 while ((VAR_10 != VAR_9) && (*VAR_10 == 0))
  VAR_10--;

 while (VAR_9 != VAR_10) {
  VAR_8->interrupt(VAR_4, 0, 0);
  VAR_8->interrupt(VAR_4, VAR_1 >> 16, 0);
  VAR_8->interrupt(VAR_4, 0, 0);
  VAR_8->interrupt(VAR_4, *VAR_9, 0);
  VAR_9++;
 }
 VAR_8->interrupt(VAR_4, 0, 0);
 VAR_8->interrupt(VAR_4, VAR_1 >> 16, 0);
 VAR_8->interrupt(VAR_4, VAR_2 >> 8, 0);
 VAR_8->interrupt(VAR_4, *VAR_9, 0);

 VAR_7->serio_oidx[VAR_6->didx] = 0;
 VAR_7->serio_opacket[VAR_6->didx] = 0;

 return 0;
}
