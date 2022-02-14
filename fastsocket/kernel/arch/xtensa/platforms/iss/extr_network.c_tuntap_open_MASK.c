
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* dev_name; int fd; int fixed_config; } ;
struct TYPE_5__ {TYPE_1__ tuntap; } ;
struct TYPE_6__ {TYPE_2__ info; } ;
struct iss_net_private {TYPE_3__ tp; } ;
struct ifreq {int ifr_flags; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifreq*,int ,int) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,void*) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(struct iss_net_private *VAR_5)
{
 struct ifreq VAR_6;
 char *VAR_7 = VAR_5->tp.info.tuntap.dev_name;
 int VAR_8 = -VAR_0;
 int VAR_9;



 if (!VAR_5->tp.info.tuntap.fixed_config)
  return -VAR_0;

 if ((VAR_9 = FUNC_4("/dev/net/tun", 02, 0)) < 0) {
  FUNC_1("Failed to open /dev/net/tun, returned %d "
         "(errno = %d)\n", VAR_9, VAR_4);
  return VAR_9;
 }

 FUNC_0(&VAR_6, 0, sizeof VAR_6);
 VAR_6.ifr_flags = VAR_2 | VAR_1;
 FUNC_5(VAR_6.ifr_name, VAR_7, sizeof VAR_6.ifr_name);

 if ((VAR_8 = FUNC_3(VAR_9, VAR_3, (void*) &VAR_6)) < 0) {
  FUNC_1("Failed to set interface, returned %d "
         "(errno = %d)\n", VAR_8, VAR_4);
  FUNC_2(VAR_9);
  return VAR_8;
 }

 VAR_5->tp.info.tuntap.fd = VAR_9;
 return VAR_8;
}
