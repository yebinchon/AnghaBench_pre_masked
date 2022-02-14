
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arxescsi_info {int info; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef long off_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static int
FUNC_4(struct Scsi_Host *VAR_2, char *VAR_3, char **VAR_4, off_t VAR_5, int VAR_6,
     int VAR_7)
{
 struct arxescsi_info *VAR_8;
 char *VAR_9 = VAR_3;
 int VAR_10;

 VAR_8 = (struct arxescsi_info *)VAR_2->hostdata;
 if (VAR_7 == 1)
  return -VAR_0;

 VAR_9 += FUNC_3(VAR_9, "ARXE 16-bit SCSI driver v%s\n", VAR_1);
 VAR_9 += FUNC_1(&VAR_8->info, VAR_9);
 VAR_9 += FUNC_2(&VAR_8->info, VAR_9);
 VAR_9 += FUNC_0(&VAR_8->info, VAR_9);

 *VAR_4 = VAR_3 + VAR_5;
 VAR_10 = VAR_9 - VAR_3 - VAR_5;
 if (VAR_10 > VAR_6)
  VAR_10 = VAR_6;

 return VAR_10;
}
