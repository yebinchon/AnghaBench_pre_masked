
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {unsigned char cmd_len; unsigned int* cmnd; TYPE_1__* device; } ;
struct atp_unit {unsigned int* ioport; unsigned int* pciport; TYPE_2__** id; int * in_snd; int * quend; int * quhd; int * last_cmd; int * working; } ;
struct Scsi_Host {int hostdata; } ;
struct TYPE_4__ {scalar_t__ last_len; struct scsi_cmnd* curr_req; } ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,...) ;
 unsigned char FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd * VAR_1)
{
 unsigned char VAR_2, VAR_3, VAR_4;
 struct scsi_cmnd *VAR_5;
 unsigned int VAR_6;
 struct atp_unit *VAR_7;
 struct Scsi_Host *VAR_8;
 VAR_8 = VAR_1->device->host;

 VAR_7 = (struct atp_unit *)&VAR_8->hostdata;
 VAR_4 = FUNC_2(VAR_1);
 FUNC_1(" atp870u: abort Channel = %x \n", VAR_4);
 FUNC_1("working=%x last_cmd=%x ", VAR_7->working[VAR_4], VAR_7->last_cmd[VAR_4]);
 FUNC_1(" quhdu=%x quendu=%x ", VAR_7->quhd[VAR_4], VAR_7->quend[VAR_4]);
 VAR_6 = VAR_7->ioport[VAR_4];
 for (VAR_2 = 0; VAR_2 < 0x18; VAR_2++) {
  FUNC_1(" r%2x=%2x", VAR_2, FUNC_0(VAR_6++));
 }
 VAR_6 += 0x04;
 FUNC_1(" r1c=%2x", FUNC_0(VAR_6));
 VAR_6 += 0x03;
 FUNC_1(" r1f=%2x in_snd=%2x ", FUNC_0(VAR_6), VAR_7->in_snd[VAR_4]);
 VAR_6= VAR_7->pciport[VAR_4];
 FUNC_1(" d00=%2x", FUNC_0(VAR_6));
 VAR_6 += 0x02;
 FUNC_1(" d02=%2x", FUNC_0(VAR_6));
 for(VAR_2=0;VAR_2<16;VAR_2++) {
    if (VAR_7->id[VAR_4][VAR_2].curr_req != ((void*)0)) {
  VAR_5 = VAR_7->id[VAR_4][VAR_2].curr_req;
  FUNC_1("\n que cdb= ");
  for (VAR_3=0; VAR_3 < VAR_5->cmd_len; VAR_3++) {
      FUNC_1(" %2x ",VAR_5->cmnd[VAR_3]);
  }
  FUNC_1(" last_lenu= %x ",(unsigned int)VAR_7->id[VAR_4][VAR_2].last_len);
    }
 }
 return VAR_0;
}
