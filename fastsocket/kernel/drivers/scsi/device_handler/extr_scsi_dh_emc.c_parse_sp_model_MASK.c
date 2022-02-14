
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,struct scsi_device*,char*,int ,unsigned char) ;
 int FUNC_1 (unsigned char*,char*,int) ;

__attribute__((used)) static char * FUNC_2(struct scsi_device *VAR_3, unsigned char *VAR_4)
{
 unsigned char VAR_5 = VAR_4[4] + 5;
 char *VAR_6 = ((void*)0);
 unsigned char VAR_7, VAR_8;

 if (VAR_5 < 160) {
  FUNC_0(VAR_1, VAR_3,
       "%s: Invalid information section length %d\n",
       VAR_0, VAR_5);

  if (!FUNC_1(VAR_4 + 8, "DGC", 3)) {

   VAR_6 = VAR_2;
  }
  goto out;
 }




 VAR_8 = VAR_4[160];
 if (VAR_8 == 0 || VAR_8 + 161 > VAR_5) {
  FUNC_0(VAR_1, VAR_3,
       "%s: Invalid array serial number length %d\n",
       VAR_0, VAR_8);
  goto out;
 }
 VAR_7 = VAR_4[99];
 if (VAR_7 == 0 || VAR_8 + VAR_7 + 161 > VAR_5) {
  FUNC_0(VAR_1, VAR_3,
       "%s: Invalid model number length %d\n",
       VAR_0, VAR_7);
  goto out;
 }
 VAR_6 = &VAR_4[VAR_8 + 161];

 while (VAR_7 > 1 && VAR_6[VAR_7 - 1] == ' ')
  VAR_7--;

 VAR_6[VAR_7] = '\0';

out:
 return VAR_6;
}
