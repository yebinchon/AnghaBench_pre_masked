
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int model; int vendor; } ;
struct TYPE_2__ {scalar_t__ model; scalar_t__ vendor; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_3(struct scsi_device *VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_1))
  return 0;

 for (VAR_2 = 0; VAR_0[VAR_2].vendor; VAR_2++) {
  if (!FUNC_2(VAR_1->vendor, VAR_0[VAR_2].vendor,
   FUNC_1(VAR_0[VAR_2].vendor)) &&
      !FUNC_2(VAR_1->model, VAR_0[VAR_2].model,
   FUNC_1(VAR_0[VAR_2].model))) {
   return 1;
  }
 }
 return 0;
}
