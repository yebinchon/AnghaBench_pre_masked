
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct ifreq {int ifr_flags; int ifr_name; int ifr_addr; } ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int ,struct ifreq*) ;
 int FUNC_3 (struct ifreq*,int ,int) ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static void FUNC_5(int VAR_4, const char *VAR_5, u32 VAR_6)
{
 struct ifreq VAR_7;
 struct sockaddr_in *VAR_8 = (struct sockaddr_in *)&VAR_7.ifr_addr;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 FUNC_4(VAR_7.ifr_name, VAR_5);


 VAR_8->sin_family = VAR_0;
 VAR_8->sin_addr.s_addr = FUNC_1(VAR_6);
 if (FUNC_2(VAR_4, VAR_2, &VAR_7) != 0)
  FUNC_0(1, "Setting %s interface address", VAR_5);
 VAR_7.ifr_flags = VAR_1;
 if (FUNC_2(VAR_4, VAR_3, &VAR_7) != 0)
  FUNC_0(1, "Bringing interface %s up", VAR_5);
}
