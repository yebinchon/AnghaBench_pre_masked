
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct Scsi_Host*,char*) ;

__attribute__((used)) static inline int FUNC_1(struct Scsi_Host *VAR_2,
           struct request *VAR_3,
           struct request *VAR_4)
{
 FUNC_0(VAR_1, VAR_2,
  "Cannot send SMP to a sas host (not enabled in CONFIG)\n");
 return -VAR_0;
}
