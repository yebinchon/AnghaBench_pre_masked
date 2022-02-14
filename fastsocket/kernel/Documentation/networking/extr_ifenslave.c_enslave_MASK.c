
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ifreq {int ifr_slave; int ifr_name; } ;
struct TYPE_12__ {int ifr_flags; } ;
struct TYPE_11__ {int ifr_hwaddr; } ;
struct TYPE_10__ {scalar_t__ ifr_mtu; } ;
struct TYPE_9__ {int ifr_flags; } ;
struct TYPE_8__ {int ifr_hwaddr; } ;
struct TYPE_7__ {scalar_t__ ifr_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ,struct ifreq*) ;
 TYPE_6__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 TYPE_4__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (char*,scalar_t__) ;
 int VAR_11 ;
 TYPE_3__ VAR_12 ;
 TYPE_2__ VAR_13 ;
 TYPE_1__ VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_12(char *VAR_16, char *VAR_17)
{
 struct ifreq VAR_18;
 int VAR_19 = 0;

 if (VAR_12.ifr_flags & VAR_1) {
  FUNC_1(VAR_15,
   "Illegal operation: The specified slave interface "
   "'%s' is already a slave\n",
   VAR_17);
  return 1;
 }

 VAR_19 = FUNC_4(VAR_17, VAR_12.ifr_flags);
 if (VAR_19) {
  FUNC_1(VAR_15,
   "Slave '%s': Error: bring interface down failed\n",
   VAR_17);
  return VAR_19;
 }

 if (VAR_4 < 2) {



  FUNC_3(VAR_16, VAR_17);
 } else {
  VAR_19 = FUNC_0(VAR_17);
  if (VAR_19) {
   FUNC_1(VAR_15,
    "Slave '%s': Error: clear address failed\n",
    VAR_17);
   return VAR_19;
  }
 }

 if (VAR_9.ifr_mtu != VAR_14.ifr_mtu) {
  VAR_19 = FUNC_8(VAR_17, VAR_9.ifr_mtu);
  if (VAR_19) {
   FUNC_1(VAR_15,
    "Slave '%s': Error: set MTU failed\n",
    VAR_17);
   return VAR_19;
  }
 }

 if (VAR_6) {



  if (VAR_4 < 1) {




   VAR_19 = FUNC_7(VAR_17,
            &(VAR_8.ifr_hwaddr));
   if (VAR_19) {
    FUNC_1(VAR_15,
     "Slave '%s': Error: set hw address "
     "failed\n",
     VAR_17);
    goto undo_mtu;
   }




   VAR_19 = FUNC_5(VAR_17, VAR_12.ifr_flags);
   if (VAR_19) {
    FUNC_1(VAR_15,
     "Slave '%s': Error: bring interface "
     "down failed\n",
     VAR_17);
    goto undo_slave_mac;
   }
  }





 } else {



  if (VAR_4 < 1) {



   VAR_19 = FUNC_4(VAR_16, VAR_7.ifr_flags);
   if (VAR_19) {
    FUNC_1(VAR_15,
     "Master '%s': Error: bring interface "
     "down failed\n",
     VAR_16);
    goto undo_mtu;
   }
  }

  VAR_19 = FUNC_6(VAR_16,
     &(VAR_13.ifr_hwaddr));
  if (VAR_19) {
   FUNC_1(VAR_15,
    "Master '%s': Error: set hw address "
    "failed\n",
    VAR_16);
   goto undo_mtu;
  }

  if (VAR_4 < 1) {



   VAR_19 = FUNC_5(VAR_16, VAR_7.ifr_flags);
   if (VAR_19) {
    FUNC_1(VAR_15,
     "Master '%s': Error: bring interface "
     "up failed\n",
     VAR_16);
    goto undo_master_mac;
   }
  }

  VAR_6 = 1;
 }


 FUNC_10(VAR_18.ifr_name, VAR_16, VAR_2);
 FUNC_10(VAR_18.ifr_slave, VAR_17, VAR_2);
 if ((FUNC_2(VAR_11, VAR_3, &VAR_18) < 0) &&
     (FUNC_2(VAR_11, VAR_0, &VAR_18) < 0)) {
  VAR_10 = VAR_5;
  FUNC_11("Master '%s': Error: SIOCBONDENSLAVE failed: %s\n",
   VAR_16, FUNC_9(VAR_10));
  VAR_19 = 1;
 }

 if (VAR_19) {
  goto undo_master_mac;
 }

 return 0;


undo_master_mac:
 FUNC_6(VAR_16, &(VAR_8.ifr_hwaddr));
 VAR_6 = 0;
 goto undo_mtu;
undo_slave_mac:
 FUNC_7(VAR_17, &(VAR_13.ifr_hwaddr));
undo_mtu:
 FUNC_8(VAR_17, VAR_14.ifr_mtu);
 return VAR_19;
}
