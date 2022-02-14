
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_flags; int ifr_name; } ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,int ,...) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct ifreq*,int ,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(char VAR_12[VAR_3])
{
 struct ifreq VAR_13;
 int VAR_14;


 FUNC_3(&VAR_13, 0, sizeof(VAR_13));







 VAR_14 = FUNC_4("/dev/net/tun", VAR_4);
 VAR_13.ifr_flags = VAR_1 | VAR_0 | VAR_2;
 FUNC_5(VAR_13.ifr_name, "tap%d");
 if (FUNC_1(VAR_14, VAR_5, &VAR_13) != 0)
  FUNC_0(1, "configuring /dev/net/tun");

 if (FUNC_1(VAR_14, VAR_7,
    VAR_8|VAR_9|VAR_10|VAR_11) != 0)
  FUNC_0(1, "Could not set features for tun device");





 FUNC_1(VAR_14, VAR_6, 1);

 FUNC_2(VAR_12, VAR_13.ifr_name, VAR_3);
 return VAR_14;
}
