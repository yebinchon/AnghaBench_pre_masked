
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_mode_data {int header_length; int length; int block_descriptor_length; int device_specific; } ;
struct scsi_disk {int WCE; int RCD; int DPOFUA; scalar_t__ first_scan; struct scsi_device* device; scalar_t__ cache_override; } ;
struct scsi_device {scalar_t__ type; int use_10_for_rw; scalar_t__ skip_ms_page_8; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct scsi_device*,int,int,unsigned char*,int,struct scsi_mode_data*,struct scsi_sense_hdr*) ;
 int FUNC_3 (int ,struct scsi_disk*,char*,...) ;

__attribute__((used)) static void
FUNC_4(struct scsi_disk *VAR_5, unsigned char *VAR_6)
{
 int VAR_7 = 0, VAR_8;
 struct scsi_device *VAR_9 = VAR_5->device;

 int VAR_10;
 int VAR_11;
 struct scsi_mode_data VAR_12;
 struct scsi_sense_hdr VAR_13;
 int VAR_14 = VAR_5->WCE;
 int VAR_15 = VAR_5->RCD;
 int VAR_16 = VAR_5->DPOFUA;


 if (VAR_5->cache_override)
  return;

 if (VAR_9->skip_ms_page_8)
  goto defaults;

 if (VAR_9->type == VAR_4) {
  VAR_11 = 6;
  VAR_10 = 8;
 } else {
  VAR_11 = 8;
  VAR_10 = 0;
 }


 VAR_8 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_6, 4, &VAR_12, &VAR_13);

 if (!FUNC_1(VAR_8))
  goto bad_sense;

 if (!VAR_12.header_length) {
  VAR_11 = 6;
  FUNC_3(VAR_1, VAR_5, "Missing header in MODE_SENSE response\n");
 }


 VAR_7 = VAR_12.length;





 if (VAR_7 < 3)
  goto bad_sense;
 if (VAR_7 > 20)
  VAR_7 = 20;


 VAR_7 += VAR_12.header_length + VAR_12.block_descriptor_length;
 if (VAR_7 > VAR_3)
  goto bad_sense;


 VAR_8 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_6, VAR_7, &VAR_12, &VAR_13);

 if (FUNC_1(VAR_8)) {
  int VAR_17 = VAR_12.header_length + VAR_12.block_descriptor_length;

  if (VAR_17 >= VAR_3 - 2) {
   FUNC_3(VAR_1, VAR_5, "Malformed MODE SENSE response\n");
   goto defaults;
  }

  if ((VAR_6[VAR_17] & 0x3f) != VAR_11) {
   FUNC_3(VAR_1, VAR_5, "Got wrong page\n");
   goto defaults;
  }

  if (VAR_11 == 8) {
   VAR_5->WCE = ((VAR_6[VAR_17 + 2] & 0x04) != 0);
   VAR_5->RCD = ((VAR_6[VAR_17 + 2] & 0x01) != 0);
  } else {
   VAR_5->WCE = ((VAR_6[VAR_17 + 2] & 0x01) == 0);
   VAR_5->RCD = 0;
  }

  VAR_5->DPOFUA = (VAR_12.device_specific & 0x10) != 0;
  if (VAR_5->DPOFUA && !VAR_5->device->use_10_for_rw) {
   FUNC_3(VAR_2, VAR_5,
      "Uses READ/WRITE(6), disabling FUA\n");
   VAR_5->DPOFUA = 0;
  }

  if (VAR_5->first_scan || VAR_14 != VAR_5->WCE ||
      VAR_15 != VAR_5->RCD || VAR_16 != VAR_5->DPOFUA)
   FUNC_3(VAR_2, VAR_5,
      "Write cache: %s, read cache: %s, %s\n",
      VAR_5->WCE ? "enabled" : "disabled",
      VAR_5->RCD ? "disabled" : "enabled",
      VAR_5->DPOFUA ? "supports DPO and FUA"
      : "doesn't support DPO or FUA");

  return;
 }

bad_sense:
 if (FUNC_0(&VAR_13) &&
     VAR_13.sense_key == VAR_0 &&
     VAR_13.asc == 0x24 && VAR_13.ascq == 0x0)

  FUNC_3(VAR_2, VAR_5, "Cache data unavailable\n");
 else
  FUNC_3(VAR_1, VAR_5, "Asking for cache data failed\n");

defaults:
 FUNC_3(VAR_1, VAR_5, "Assuming drive cache: write through\n");
 VAR_5->WCE = 0;
 VAR_5->RCD = 0;
 VAR_5->DPOFUA = 0;
}
