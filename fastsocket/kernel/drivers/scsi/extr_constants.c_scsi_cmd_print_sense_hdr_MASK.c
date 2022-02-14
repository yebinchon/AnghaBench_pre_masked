
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int ascq; int asc; } ;
struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct scsi_cmnd*,char*,char const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct scsi_sense_hdr*) ;

void
FUNC_3(struct scsi_cmnd *VAR_1, const char *VAR_2,
     struct scsi_sense_hdr *VAR_3)
{
 FUNC_0(VAR_0, VAR_1, "%s: ", VAR_2);
 FUNC_2(VAR_3);
 FUNC_0(VAR_0, VAR_1, "%s: ", VAR_2);
 FUNC_1(VAR_3->asc, VAR_3->ascq);
}
