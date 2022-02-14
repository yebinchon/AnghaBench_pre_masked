
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int ascq; int asc; } ;
struct scsi_disk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct scsi_sense_hdr*) ;
 int FUNC_2 (int ,struct scsi_disk*,char*) ;

__attribute__((used)) static void FUNC_3(struct scsi_disk *VAR_1,
          struct scsi_sense_hdr *VAR_2)
{
 FUNC_2(VAR_0, VAR_1, "");
 FUNC_1(VAR_2);
 FUNC_2(VAR_0, VAR_1, "");
 FUNC_0(VAR_2->asc, VAR_2->ascq);
}
