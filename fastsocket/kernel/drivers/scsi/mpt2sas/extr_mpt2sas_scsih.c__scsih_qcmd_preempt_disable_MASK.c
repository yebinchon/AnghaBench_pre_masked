
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;


 int FUNC_0 (struct scsi_cmnd*,void (*) (struct scsi_cmnd*)) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(struct scsi_cmnd *VAR_0, void (*VAR_1)(struct scsi_cmnd *))
{
 int VAR_2;
 FUNC_1();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2();
 return VAR_2;
}
