
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_unit {int * device; } ;
struct scsi_device {scalar_t__ hostdata; } ;


 int FUNC_0 (struct zfcp_unit*) ;

__attribute__((used)) static void FUNC_1(struct scsi_device *VAR_0)
{
 struct zfcp_unit *VAR_1 = (struct zfcp_unit *) VAR_0->hostdata;


 if (!VAR_1)
  return;

 VAR_1->device = ((void*)0);
 FUNC_0(VAR_1);
}
