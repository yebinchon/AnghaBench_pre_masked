
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct request {struct scsi_cmnd* special; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_2(struct request *VAR_0)
{
 struct scsi_cmnd *VAR_1 = VAR_0->special;

 FUNC_0(VAR_0);
 VAR_0->special = ((void*)0);

 FUNC_1(VAR_1);
}
