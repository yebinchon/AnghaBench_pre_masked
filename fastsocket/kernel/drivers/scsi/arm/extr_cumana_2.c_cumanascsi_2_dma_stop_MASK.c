
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_pointer {int dummy; } ;
struct TYPE_3__ {scalar_t__ dma; } ;
struct TYPE_4__ {TYPE_1__ scsi; } ;
struct cumanascsi2_info {TYPE_2__ info; scalar_t__ base; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct Scsi_Host *VAR_3, struct scsi_pointer *VAR_4)
{
 struct cumanascsi2_info *VAR_5 = (struct cumanascsi2_info *)VAR_3->hostdata;
 if (VAR_5->info.scsi.dma != VAR_2) {
  FUNC_1(VAR_0, VAR_5->base + VAR_1);
  FUNC_0(VAR_5->info.scsi.dma);
 }
}
