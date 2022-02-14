
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ushort ;
struct TYPE_4__ {int scsi_reset_wait; } ;
typedef TYPE_1__ ADV_DVC_VAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,long) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(ADV_DVC_VAR *VAR_4)
{
 int VAR_5;





 VAR_5 = FUNC_0(VAR_4, (ushort)VAR_3, 0L);
 if (VAR_5 != VAR_0) {
  return VAR_5;
 }







 FUNC_2(VAR_1);





 VAR_5 = FUNC_0(VAR_4, (ushort)VAR_2, 0L);
 if (VAR_5 != VAR_0) {
  return VAR_5;
 }

 FUNC_1(VAR_4->scsi_reset_wait * 1000);

 return VAR_5;
}
