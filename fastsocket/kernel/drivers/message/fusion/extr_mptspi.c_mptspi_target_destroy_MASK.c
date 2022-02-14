
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int * hostdata; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct scsi_target *VAR_0)
{
 if (VAR_0->hostdata)
  FUNC_0(VAR_0->hostdata);
 VAR_0->hostdata = ((void*)0);
}
