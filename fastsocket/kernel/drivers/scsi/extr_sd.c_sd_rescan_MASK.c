
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int disk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct scsi_disk* FUNC_1 (struct device*) ;
 int FUNC_2 (struct scsi_disk*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct scsi_disk *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1) {
  FUNC_0(VAR_1->disk);
  FUNC_2(VAR_1);
 }
}
