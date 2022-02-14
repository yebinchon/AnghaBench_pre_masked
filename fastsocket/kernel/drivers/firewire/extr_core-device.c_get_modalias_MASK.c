
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_unit {int * directory; } ;
struct fw_device {int * config_rom; } ;
struct fw_csr_iterator {int dummy; } ;






 int FUNC_0 (struct fw_csr_iterator*,int *) ;
 scalar_t__ FUNC_1 (struct fw_csr_iterator*,int*,int*) ;
 struct fw_device* FUNC_2 (struct fw_unit*) ;
 int FUNC_3 (char*,size_t,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct fw_unit *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct fw_device *VAR_3 = FUNC_2(VAR_0);
 struct fw_csr_iterator VAR_4;

 int VAR_5, VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;

 FUNC_0(&VAR_4, &VAR_3->config_rom[5]);
 while (FUNC_1(&VAR_4, &VAR_5, &VAR_6)) {
  switch (VAR_5) {
  case 129:
   VAR_7 = VAR_6;
   break;
  case 131:
   VAR_8 = VAR_6;
   break;
  }
 }

 FUNC_0(&VAR_4, VAR_0->directory);
 while (FUNC_1(&VAR_4, &VAR_5, &VAR_6)) {
  switch (VAR_5) {
  case 130:
   VAR_9 = VAR_6;
   break;
  case 128:
   VAR_10 = VAR_6;
   break;
  }
 }

 return FUNC_3(VAR_1, VAR_2,
   "ieee1394:ven%08Xmo%08Xsp%08Xver%08X",
   VAR_7, VAR_8, VAR_9, VAR_10);
}
