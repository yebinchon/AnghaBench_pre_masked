
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ifr_flags; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_6)
{
 int VAR_7 = 0;

 FUNC_2(VAR_5.ifr_name, VAR_6, VAR_0);
 VAR_7 = FUNC_0(VAR_4, VAR_1, &VAR_5);
 if (VAR_7 < 0) {
  VAR_3 = VAR_2;
  FUNC_3("Slave '%s': Error: SIOCGIFFLAGS failed: %s\n",
   VAR_6, FUNC_1(VAR_3));
 } else {
  FUNC_3("Slave %s: flags %04X.\n",
   VAR_6, VAR_5.ifr_flags);
 }

 return VAR_7;
}
