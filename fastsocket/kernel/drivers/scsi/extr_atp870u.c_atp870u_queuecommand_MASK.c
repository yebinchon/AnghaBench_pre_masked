
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; void (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; scalar_t__* sense_buffer; } ;
struct atp_unit {unsigned int* active_id; size_t* quend; size_t* quhd; int* ioport; scalar_t__* in_int; scalar_t__* in_snd; struct scsi_cmnd*** quereq; } ;
struct Scsi_Host {int hostdata; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,...) ;
 size_t VAR_0 ;
 int FUNC_2 (struct scsi_cmnd*) ;
 unsigned int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*,int ) ;
 int FUNC_5 (struct atp_unit*,unsigned char) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd * VAR_1,
    void (*VAR_2) (struct scsi_cmnd *))
{
 unsigned char VAR_3;
 unsigned int VAR_4,VAR_5;
 struct atp_unit *VAR_6;
 struct Scsi_Host *VAR_7;

 VAR_3 = FUNC_2(VAR_1);
 VAR_1->sense_buffer[0]=0;
 FUNC_4(VAR_1, 0);
 if (FUNC_2(VAR_1) > 1) {
  VAR_1->result = 0x00040000;
  VAR_2(VAR_1);



  return 0;
 }

 VAR_7 = VAR_1->device->host;
 VAR_6 = (struct atp_unit *)&VAR_7->hostdata;



 VAR_5 = 1;
 VAR_5 = VAR_5 << FUNC_3(VAR_1);





 if ((VAR_5 & VAR_6->active_id[VAR_3]) == 0) {
  VAR_1->result = 0x00040000;
  VAR_2(VAR_1);
  return 0;
 }

 if (VAR_2) {
  VAR_1->scsi_done = VAR_2;
 } else {



  VAR_1->result = 0;
  VAR_2(VAR_1);
  return 0;
 }




 VAR_6->quend[VAR_3]++;
 if (VAR_6->quend[VAR_3] >= VAR_0) {
  VAR_6->quend[VAR_3] = 0;
 }




 if (VAR_6->quhd[VAR_3] == VAR_6->quend[VAR_3]) {
  if (VAR_6->quend[VAR_3] == 0) {
   VAR_6->quend[VAR_3] = VAR_0;
  }



  VAR_6->quend[VAR_3]--;
  VAR_1->result = 0x00020000;
  VAR_2(VAR_1);
  return 0;
 }
 VAR_6->quereq[VAR_3][VAR_6->quend[VAR_3]] = VAR_1;
 VAR_4 = VAR_6->ioport[VAR_3] + 0x1c;



 if ((FUNC_0(VAR_4) == 0) && (VAR_6->in_int[VAR_3] == 0) && (VAR_6->in_snd[VAR_3] == 0)) {



  FUNC_5(VAR_6,VAR_3);
 }



 return 0;
}
