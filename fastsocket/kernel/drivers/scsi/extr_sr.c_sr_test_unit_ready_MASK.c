
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_sense_hdr {scalar_t__ sense_key; } ;
struct scsi_device {int changed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct scsi_device*,int *,int ,int *,int ,struct scsi_sense_hdr*,int ,int ,int *) ;
 scalar_t__ FUNC_1 (struct scsi_sense_hdr*) ;
 int FUNC_2 (int) ;

int FUNC_3(struct scsi_device *VAR_5, struct scsi_sense_hdr *VAR_6)
{
 int VAR_7 = VAR_1;
 int VAR_8;
 u8 VAR_9[] = {VAR_3, 0, 0, 0, 0, 0 };




 do {
  VAR_8 = FUNC_0(VAR_5, VAR_9, VAR_0, ((void*)0),
           0, VAR_6, VAR_2,
           VAR_7--, ((void*)0));
  if (FUNC_1(VAR_6) &&
      VAR_6->sense_key == VAR_4)
   VAR_5->changed = 1;

 } while (VAR_7 > 0 &&
   (!FUNC_2(VAR_8) ||
    (FUNC_1(VAR_6) &&
     VAR_6->sense_key == VAR_4)));
 return VAR_8;
}
