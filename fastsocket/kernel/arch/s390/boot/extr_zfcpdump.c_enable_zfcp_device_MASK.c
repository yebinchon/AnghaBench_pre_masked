
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_2__ {char* dump_devno; char* dump_wwpn; char* dump_lun; char* dump_bootprog; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,char*,...) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(void)
{
 char VAR_4[1024], VAR_5[1024];
 struct stat VAR_6;


 if (FUNC_0(VAR_0, VAR_3.dump_devno, sizeof(VAR_3.dump_devno)))
  return -1;
 FUNC_1(VAR_5, "/sys/bus/ccw/drivers/zfcp/%s/online", VAR_3.dump_devno);
 if (FUNC_3(VAR_5, "1\n"))
  return -1;


 if (FUNC_0(VAR_2, VAR_3.dump_wwpn, sizeof(VAR_3.dump_wwpn)))
  return -1;
 FUNC_1(VAR_5, "/sys/bus/ccw/drivers/zfcp/%s/port_add", VAR_3.dump_devno);

 if (FUNC_2(VAR_5, &VAR_6) == 0) {
  FUNC_1(VAR_4, "%s\n", VAR_3.dump_wwpn);
  if (FUNC_3(VAR_5, VAR_4))
   return -1;
 }


 if (FUNC_0(VAR_1, VAR_3.dump_lun, sizeof(VAR_3.dump_lun)))
  return -1;
 FUNC_1(VAR_5, "/sys/bus/ccw/drivers/zfcp/%s/%s/unit_add", VAR_3.dump_devno,
  VAR_3.dump_wwpn);
 FUNC_1(VAR_4, "%s\n", VAR_3.dump_lun);
 if (FUNC_3(VAR_5, VAR_4))
  return -1;


 FUNC_0("/sys/firmware/ipl/bootprog", VAR_3.dump_bootprog,
  sizeof(VAR_3.dump_bootprog));

 return 0;
}
