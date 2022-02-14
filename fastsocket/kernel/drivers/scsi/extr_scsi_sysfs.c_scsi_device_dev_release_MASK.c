
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int ew; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1)
{
 struct scsi_device *VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_0,
       &VAR_2->ew);
}
