
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; } ;
struct scsi_device {int changed; scalar_t__ removable; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct scsi_sense_hdr*) ;
 struct scsi_sense_hdr* FUNC_1 (int,int ) ;
 int FUNC_2 (struct scsi_device*,char*,int ,int *,int ,struct scsi_sense_hdr*,int,int,int *) ;
 scalar_t__ FUNC_3 (struct scsi_sense_hdr*) ;

int
FUNC_4(struct scsi_device *VAR_5, int VAR_6, int VAR_7,
       struct scsi_sense_hdr *VAR_8)
{
 char VAR_9[] = {
  VAR_3, 0, 0, 0, 0, 0,
 };
 struct scsi_sense_hdr *VAR_10;
 int VAR_11;

 if (!VAR_8)
  VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_1);
 else
  VAR_10 = VAR_8;


 do {
  VAR_11 = FUNC_2(VAR_5, VAR_9, VAR_0, ((void*)0), 0, VAR_10,
       VAR_6, VAR_7, ((void*)0));
  if (VAR_5->removable && FUNC_3(VAR_10) &&
      VAR_10->sense_key == VAR_4)
   VAR_5->changed = 1;
 } while (FUNC_3(VAR_10) &&
   VAR_10->sense_key == VAR_4 && --VAR_7);

 if (!VAR_10)

  return VAR_11;

 if (VAR_5->removable && FUNC_3(VAR_10) &&
     (VAR_10->sense_key == VAR_4 ||
      VAR_10->sense_key == VAR_2)) {
  VAR_5->changed = 1;
  VAR_11 = 0;
 }
 if (!VAR_8)
  FUNC_0(VAR_10);
 return VAR_11;
}
