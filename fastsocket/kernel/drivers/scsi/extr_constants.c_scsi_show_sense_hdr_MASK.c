
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int response_code; int sense_key; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct scsi_sense_hdr*) ;
 char* FUNC_2 (int ) ;

void
FUNC_3(struct scsi_sense_hdr *VAR_0)
{
 const char *VAR_1;

 VAR_1 = FUNC_2(VAR_0->sense_key);
 if (VAR_1)
  FUNC_0("Sense Key : %s ", VAR_1);
 else
  FUNC_0("Sense Key : 0x%x ", VAR_0->sense_key);

 FUNC_0("%s", FUNC_1(VAR_0) ? "[deferred] " :
        "[current] ");

 if (VAR_0->response_code >= 0x72)
  FUNC_0("[descriptor]");

 FUNC_0("\n");
}
