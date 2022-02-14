
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_sense {int dummy; } ;
struct cdrom_device_info {int * handle; } ;
typedef int ide_drive_t ;


 int FUNC_0 (int *,int,struct request_sense*) ;
 int FUNC_1 (int *,int ,struct request_sense*) ;

int FUNC_2(struct cdrom_device_info *VAR_0, int VAR_1)
{
 ide_drive_t *VAR_2 = VAR_0->handle;
 struct request_sense VAR_3;

 if (VAR_1) {
  int VAR_4 = FUNC_1(VAR_2, 0, &VAR_3);

  if (VAR_4)
   return VAR_4;
 }

 return FUNC_0(VAR_2, !VAR_1, &VAR_3);
}
