
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_sense_hdr {int sense_key; } ;
struct TYPE_3__ {int unit_attention; int name; int device; } ;
typedef TYPE_1__ scsi_changer ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct scsi_sense_hdr*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,unsigned char*,int,void*,unsigned int,struct scsi_sense_hdr*,int,int ,int *) ;
 int FUNC_5 (int ,struct scsi_sense_hdr*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(scsi_changer *VAR_7, unsigned char *VAR_8,
    void *VAR_9, unsigned VAR_10,
    enum dma_data_direction VAR_11)
{
 int VAR_12, VAR_13 = 0, VAR_14, VAR_15;
 struct scsi_sense_hdr VAR_16;

 VAR_14 = (VAR_8[0] == VAR_2)
  ? VAR_5 : VAR_6;

 retry:
 VAR_12 = 0;
 if (VAR_4) {
  FUNC_2("command: ");
  FUNC_0(VAR_8);
 }

        VAR_15 = FUNC_4(VAR_7->device, VAR_8, VAR_11, VAR_9,
      VAR_10, &VAR_16, VAR_14 * VAR_1,
      VAR_3, ((void*)0));

 FUNC_2("result: 0x%x\n",VAR_15);
 if (FUNC_3(VAR_15) & VAR_0) {
  if (VAR_4)
   FUNC_5(VAR_7->name, &VAR_16);
  VAR_12 = FUNC_1(&VAR_16);

  switch(VAR_16.sense_key) {
  case 128:
   VAR_7->unit_attention = 1;
   if (VAR_13++ < 3)
    goto retry;
   break;
  }
 }
 return VAR_12;
}
