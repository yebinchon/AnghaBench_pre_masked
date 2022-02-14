
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifreq {int ifr_slave; int ifr_name; } ;
struct TYPE_2__ {int ifr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,struct ifreq*) ;
 int VAR_6 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_7(char *VAR_10, char *VAR_11)
{
 struct ifreq VAR_12;
 int VAR_13 = 0;

 if (!(VAR_8.ifr_flags & VAR_1)) {
  FUNC_0(VAR_9,
   "Illegal operation: The specified slave interface "
   "'%s' is not a slave\n",
   VAR_11);
  return 1;
 }

 FUNC_5(VAR_12.ifr_name, VAR_10, VAR_2);
 FUNC_5(VAR_12.ifr_slave, VAR_11, VAR_2);
 if ((FUNC_1(VAR_7, VAR_3, &VAR_12) < 0) &&
     (FUNC_1(VAR_7, VAR_0, &VAR_12) < 0)) {
  VAR_6 = VAR_5;
  FUNC_6("Master '%s': Error: SIOCBONDRELEASE failed: %s\n",
   VAR_10, FUNC_4(VAR_6));
  return 1;
 } else if (VAR_4 < 1) {



  VAR_13 = FUNC_2(VAR_11, VAR_8.ifr_flags);
  if (VAR_13) {
   FUNC_0(VAR_9,
    "Slave '%s': Error: bring interface "
    "down failed\n",
    VAR_11);
  }
 }


 FUNC_3(VAR_11, 1500);

 return VAR_13;
}
