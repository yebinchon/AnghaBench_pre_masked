
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ loopback; int clock_type; int clock_rate; } ;
typedef TYPE_3__ sync_serial_settings ;
typedef int sync ;
struct TYPE_6__ {int sync; } ;
struct TYPE_7__ {int size; TYPE_1__ ifs_ifsu; int type; } ;
struct ifreq {TYPE_2__ ifr_settings; } ;
struct fst_port_info {int hwif; int index; } ;
struct fst_card_info {int dummy; } ;
struct TYPE_9__ {int internalClock; int lineSpeed; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct fst_card_info*,int ) ;
 int FUNC_1 (struct fst_card_info*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;





 scalar_t__ FUNC_2 (int ,TYPE_3__*,int) ;
 TYPE_4__* VAR_11 ;

__attribute__((used)) static int
FUNC_3(struct fst_card_info *VAR_12, struct fst_port_info *VAR_13,
       struct ifreq *VAR_14)
{
 sync_serial_settings VAR_15;
 int VAR_16;





 switch (VAR_13->hwif) {
 case 133:
  VAR_14->ifr_settings.type = VAR_4;
  break;
 case 132:
  VAR_14->ifr_settings.type = VAR_5;
  break;
 case 130:
  VAR_14->ifr_settings.type = VAR_7;
  break;
 case 131:
  VAR_14->ifr_settings.type = VAR_6;
  break;
 case 128:
  VAR_14->ifr_settings.type = VAR_9;
  break;
 case 129:
 default:
  VAR_14->ifr_settings.type = VAR_8;
  break;
 }
 if (VAR_14->ifr_settings.size == 0) {
  return 0;
 }
 if (VAR_14->ifr_settings.size < sizeof (VAR_15)) {
  return -VAR_3;
 }

 VAR_16 = VAR_13->index;
 VAR_15.clock_rate = FUNC_1(VAR_12, VAR_11[VAR_16].lineSpeed);

 VAR_15.clock_type = FUNC_0(VAR_12, VAR_11[VAR_16].internalClock) ==
     VAR_10 ? VAR_1 : VAR_0;
 VAR_15.loopback = 0;

 if (FUNC_2(VAR_14->ifr_settings.ifs_ifsu.sync, &VAR_15, sizeof (VAR_15))) {
  return -VAR_2;
 }

 VAR_14->ifr_settings.size = sizeof (VAR_15);
 return 0;
}
