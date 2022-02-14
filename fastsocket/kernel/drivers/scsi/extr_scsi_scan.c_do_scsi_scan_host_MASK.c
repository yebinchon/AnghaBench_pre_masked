
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {TYPE_1__* hostt; } ;
struct TYPE_2__ {int (* scan_finished ) (struct Scsi_Host*,unsigned long) ;int (* scan_start ) (struct Scsi_Host*) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct Scsi_Host*,int ,int ,int ,int ) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct Scsi_Host *VAR_2)
{
 if (VAR_2->hostt->scan_finished) {
  unsigned long VAR_3 = VAR_1;
  if (VAR_2->hostt->scan_start)
   VAR_2->hostt->scan_start(VAR_2);

  while (!VAR_2->hostt->scan_finished(VAR_2, VAR_1 - VAR_3))
   FUNC_0(10);
 } else {
  FUNC_1(VAR_2, VAR_0, VAR_0,
    VAR_0, 0);
 }
}
