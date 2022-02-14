
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_request {int dummy; } ;
struct TYPE_5__ {int sense_key; int asc; } ;
struct st_cmdstatus {TYPE_2__ sense_hdr; scalar_t__ have_sense; } ;
struct scsi_tape {TYPE_3__* buffer; TYPE_1__* device; int long_timeout; } ;
struct TYPE_6__ {int syscall_result; struct st_cmdstatus cmdstat; } ;
struct TYPE_4__ {scalar_t__ scsi_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (void*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 struct st_request* FUNC_2 (struct st_request*,struct scsi_tape*,unsigned char*,int ,int ,int ,int ,int) ;
 int FUNC_3 (struct st_request*) ;

__attribute__((used)) static int FUNC_4(struct scsi_tape *VAR_15, int VAR_16)
{
 int VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21 = VAR_3, VAR_22 = 0;
 unsigned char VAR_23[VAR_8];
 struct st_request *VAR_24 = ((void*)0);
 struct st_cmdstatus *VAR_25 = &VAR_15->buffer->cmdstat;

 VAR_19 = VAR_16 ? VAR_12 : 0;

 for (VAR_17=VAR_18=0; ; ) {
  FUNC_0((void *) &VAR_23[0], 0, VAR_8);
  VAR_23[0] = VAR_13;
  VAR_24 = FUNC_2(VAR_24, VAR_15, VAR_23, 0, VAR_4,
       VAR_15->long_timeout, VAR_9, 1);

  if (!VAR_24) {
   VAR_21 = (VAR_15->buffer)->syscall_result;
   break;
  }

  if (VAR_25->have_sense) {

   VAR_20 = VAR_25->sense_hdr.sense_key;

   if (VAR_20 == VAR_14) {
    VAR_22 = 1;
    if (VAR_17 < VAR_7) {
     VAR_17++;
     continue;
    }
    else {
     VAR_21 = (-VAR_6);
     break;
    }
   }

   if (VAR_20 == VAR_10) {
    if (VAR_18 < VAR_19) {
     if (FUNC_1(1000)) {
      VAR_21 = (-VAR_5);
      break;
     }
     VAR_18++;
     continue;
    }
    else {
     if ((VAR_15->device)->scsi_level >= VAR_11 &&
         VAR_25->sense_hdr.asc == 0x3a)
      VAR_21 = VAR_2;
     else
      VAR_21 = VAR_1;
     break;
    }
   }
  }

  VAR_21 = (VAR_15->buffer)->syscall_result;
  if (!VAR_21)
   VAR_21 = VAR_22 ? VAR_0 : VAR_3;
  break;
 }

 if (VAR_24 != ((void*)0))
  FUNC_3(VAR_24);
 return VAR_21;
}
