
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_pointer {int this_residual; int ptr; } ;
struct eesoxscsi_info {int base; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef scalar_t__ fasdmadir_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct Scsi_Host *VAR_1, struct scsi_pointer *VAR_2,
       fasdmadir_t VAR_3, int VAR_4)
{
 struct eesoxscsi_info *VAR_5 = (struct eesoxscsi_info *)VAR_1->hostdata;
 if (VAR_3 == VAR_0) {
  FUNC_0(VAR_2->ptr, VAR_2->this_residual, VAR_5->base);
 } else {
  FUNC_1(VAR_2->ptr, VAR_2->this_residual, VAR_5->base);
 }
}
