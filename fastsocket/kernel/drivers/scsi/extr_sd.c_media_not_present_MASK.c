
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; int asc; } ;
struct scsi_disk {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct scsi_sense_hdr*) ;
 int FUNC_1 (struct scsi_disk*) ;

__attribute__((used)) static int FUNC_2(struct scsi_disk *VAR_2,
        struct scsi_sense_hdr *VAR_3)
{

 if (!FUNC_0(VAR_3))
  return 0;

 if (VAR_3->sense_key != VAR_0 &&
     VAR_3->sense_key != VAR_1)
  return 0;
 if (VAR_3->asc != 0x3A)
  return 0;

 FUNC_1(VAR_2);
 return 1;
}
