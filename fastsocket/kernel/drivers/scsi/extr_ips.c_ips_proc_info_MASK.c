
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int off_t ;
typedef int ips_ha_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int VAR_1 ;
 struct Scsi_Host** VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct Scsi_Host *VAR_3, char *VAR_4, char **VAR_5, off_t VAR_6,
       int VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;
 ips_ha_t *VAR_11 = ((void*)0);

 FUNC_0("ips_proc_info", 1);


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (VAR_2[VAR_9]) {
   if (VAR_2[VAR_9] == VAR_3) {
    VAR_11 = (ips_ha_t *) VAR_2[VAR_9]->hostdata;
    break;
   }
  }
 }

 if (!VAR_11)
  return (-VAR_0);

 if (VAR_8) {

  return (0);
 } else {

  if (VAR_5)
   *VAR_5 = VAR_4;

  VAR_10 = FUNC_1(VAR_11, VAR_4, VAR_6, VAR_7);

  return (VAR_10);
 }
}
