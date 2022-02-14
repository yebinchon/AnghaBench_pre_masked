
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct rdac_dh_data {int mode; int preferred; int lun_state; } ;
typedef int (* activate_complete ) (void*,int) ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_device*,struct rdac_dh_data*) ;
 struct rdac_dh_data* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*,int (*) (void*,int),void*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_3,
   activate_complete VAR_4, void *VAR_5)
{
 struct rdac_dh_data *VAR_6 = FUNC_1(VAR_3);
 int VAR_7 = VAR_2;
 int VAR_8 = 0;

 VAR_7 = FUNC_0(VAR_3, VAR_6);
 if (VAR_7 != VAR_2)
  goto done;

 switch (VAR_6->mode) {
 case 129:
  if (VAR_6->lun_state == VAR_0)
   VAR_8 = 1;
  break;
 case 128:
  if ((VAR_6->lun_state == VAR_0) &&
      (VAR_6->preferred == VAR_1))
   VAR_8 = 1;
  break;
 default:
  break;
 }

 if (VAR_8) {
  VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
  if (VAR_7 == VAR_2)
   return 0;
 }
done:
 if (VAR_4)
  VAR_4(VAR_5, VAR_7);
 return 0;
}
