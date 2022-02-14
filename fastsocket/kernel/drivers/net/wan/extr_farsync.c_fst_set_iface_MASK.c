
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int clock_type; int clock_rate; scalar_t__ loopback; } ;
typedef TYPE_3__ sync_serial_settings ;
typedef int sync ;
struct TYPE_6__ {int sync; } ;
struct TYPE_7__ {int size; int type; TYPE_1__ ifs_ifsu; } ;
struct ifreq {TYPE_2__ ifr_settings; } ;
struct fst_port_info {int index; void* hwif; } ;
struct fst_card_info {int dummy; } ;
struct TYPE_9__ {int lineSpeed; int internalClock; int lineInterface; } ;




 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fst_card_info*,int ,int ) ;
 int FUNC_1 (struct fst_card_info*,int ,int ) ;
 int FUNC_2 (struct fst_card_info*,int ,void*) ;







 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,int) ;
 TYPE_4__* VAR_11 ;

__attribute__((used)) static int
FUNC_4(struct fst_card_info *VAR_12, struct fst_port_info *VAR_13,
       struct ifreq *VAR_14)
{
 sync_serial_settings VAR_15;
 int VAR_16;

 if (VAR_14->ifr_settings.size != sizeof (VAR_15)) {
  return -VAR_3;
 }

 if (FUNC_3
     (&VAR_15, VAR_14->ifr_settings.ifs_ifsu.sync, sizeof (VAR_15))) {
  return -VAR_1;
 }

 if (VAR_15.loopback)
  return -VAR_2;

 VAR_16 = VAR_13->index;

 switch (VAR_14->ifr_settings.type) {
 case 130:
  FUNC_2(VAR_12, VAR_11[VAR_16].lineInterface, VAR_8);
  VAR_13->hwif = VAR_8;
  break;

 case 131:
  FUNC_2(VAR_12, VAR_11[VAR_16].lineInterface, VAR_7);
  VAR_13->hwif = VAR_7;
  break;

 case 129:
  FUNC_2(VAR_12, VAR_11[VAR_16].lineInterface, VAR_9);
  VAR_13->hwif = VAR_9;
  break;

 case 128:
  FUNC_2(VAR_12, VAR_11[VAR_16].lineInterface, VAR_10);
  VAR_13->hwif = VAR_10;
  break;

 case 132:
  FUNC_2(VAR_12, VAR_11[VAR_16].lineInterface, VAR_6);
  VAR_13->hwif = VAR_6;
  break;

 case 134:
  FUNC_2(VAR_12, VAR_11[VAR_16].lineInterface, VAR_0);
  VAR_13->hwif = VAR_0;
  break;

 case 133:
  break;

 default:
  return -VAR_2;
 }

 switch (VAR_15.clock_type) {
 case 136:
  FUNC_0(VAR_12, VAR_11[VAR_16].internalClock, VAR_4);
  break;

 case 135:
  FUNC_0(VAR_12, VAR_11[VAR_16].internalClock, VAR_5);
  break;

 default:
  return -VAR_2;
 }
 FUNC_1(VAR_12, VAR_11[VAR_16].lineSpeed, VAR_15.clock_rate);
 return 0;
}
