
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powertec_info {int info; scalar_t__ term_ctl; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef long off_t ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct Scsi_Host*,char*,int) ;
 int FUNC_4 (char*,char*,char*) ;

int FUNC_5(struct Scsi_Host *VAR_1, char *VAR_2, char **VAR_3, off_t VAR_4,
       int VAR_5, int VAR_6)
{
 struct powertec_info *VAR_7;
 char *VAR_8 = VAR_2;
 int VAR_9;

 if (VAR_6 == 1)
  return FUNC_3(VAR_1, VAR_2, VAR_5);

 VAR_7 = (struct powertec_info *)VAR_1->hostdata;

 VAR_8 += FUNC_4(VAR_8, "PowerTec SCSI driver v%s\n", VAR_0);
 VAR_8 += FUNC_1(&VAR_7->info, VAR_8);
 VAR_8 += FUNC_4(VAR_8, "Term    : o%s\n",
   VAR_7->term_ctl ? "n" : "ff");

 VAR_8 += FUNC_2(&VAR_7->info, VAR_8);
 VAR_8 += FUNC_0(&VAR_7->info, VAR_8);

 *VAR_3 = VAR_2 + VAR_4;
 VAR_9 = VAR_8 - VAR_2 - VAR_4;
 if (VAR_9 > VAR_5)
  VAR_9 = VAR_5;

 return VAR_9;
}
