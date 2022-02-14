
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eesoxscsi_info {int control; int info; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef long off_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (struct Scsi_Host*,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,char*,char*) ;

int FUNC_5(struct Scsi_Host *VAR_2, char *VAR_3, char **VAR_4, off_t VAR_5,
       int VAR_6, int VAR_7)
{
 struct eesoxscsi_info *VAR_8;
 char *VAR_9 = VAR_3;
 int VAR_10;

 if (VAR_7 == 1)
  return FUNC_0(VAR_2, VAR_3, VAR_6);

 VAR_8 = (struct eesoxscsi_info *)VAR_2->hostdata;

 VAR_9 += FUNC_4(VAR_9, "EESOX SCSI driver v%s\n", VAR_1);
 VAR_9 += FUNC_2(&VAR_8->info, VAR_9);
 VAR_9 += FUNC_4(VAR_9, "Term    : o%s\n",
   VAR_8->control & VAR_0 ? "n" : "ff");

 VAR_9 += FUNC_3(&VAR_8->info, VAR_9);
 VAR_9 += FUNC_1(&VAR_8->info, VAR_9);

 *VAR_4 = VAR_3 + VAR_5;
 VAR_10 = VAR_9 - VAR_3 - VAR_5;
 if (VAR_10 > VAR_6)
  VAR_10 = VAR_6;

 return VAR_10;
}
