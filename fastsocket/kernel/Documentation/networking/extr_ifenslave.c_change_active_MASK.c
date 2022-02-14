
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
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,struct ifreq*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_5(char *VAR_9, char *VAR_10)
{
 struct ifreq VAR_11;
 int VAR_12 = 0;

 if (!(VAR_7.ifr_flags & VAR_1)) {
  FUNC_0(VAR_8,
   "Illegal operation: The specified slave interface "
   "'%s' is not a slave\n",
   VAR_10);
  return 1;
 }

 FUNC_3(VAR_11.ifr_name, VAR_9, VAR_2);
 FUNC_3(VAR_11.ifr_slave, VAR_10, VAR_2);
 if ((FUNC_1(VAR_6, VAR_3, &VAR_11) < 0) &&
     (FUNC_1(VAR_6, VAR_0, &VAR_11) < 0)) {
  VAR_5 = VAR_4;
  FUNC_4("Master '%s': Error: SIOCBONDCHANGEACTIVE failed: "
   "%s\n",
   VAR_9, FUNC_2(VAR_5));
  VAR_12 = 1;
 }

 return VAR_12;
}
