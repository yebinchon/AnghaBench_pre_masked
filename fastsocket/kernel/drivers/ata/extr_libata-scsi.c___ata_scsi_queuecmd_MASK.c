
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct scsi_cmnd {scalar_t__* cmnd; int cmd_len; int result; } ;
struct ata_device {scalar_t__ class; int cdb_len; } ;
typedef int * ata_xlat_func_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,scalar_t__,int) ;
 int * FUNC_2 (struct ata_device*,scalar_t__) ;
 int FUNC_3 (struct ata_device*,struct scsi_cmnd*,void (*) (struct scsi_cmnd*)) ;
 int FUNC_4 (struct ata_device*,struct scsi_cmnd*,void (*) (struct scsi_cmnd*),int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline int FUNC_7(struct scsi_cmnd *VAR_5,
          void (*VAR_6)(struct scsi_cmnd *),
          struct ata_device *VAR_7)
{
 u8 VAR_8 = VAR_5->cmnd[0];
 ata_xlat_func_t VAR_9;
 int VAR_10 = 0;

 if (VAR_7->class == VAR_1) {
  if (FUNC_6(!VAR_5->cmd_len || VAR_5->cmd_len > VAR_7->cdb_len))
   goto bad_cdb_len;

  VAR_9 = FUNC_2(VAR_7, VAR_8);
 } else {
  if (FUNC_6(!VAR_5->cmd_len))
   goto bad_cdb_len;

  VAR_9 = ((void*)0);
  if (FUNC_5((VAR_8 != VAR_0) || !VAR_3)) {

   int VAR_11 = FUNC_0(VAR_8);
   if (FUNC_6(VAR_11 > VAR_5->cmd_len || VAR_11 > VAR_7->cdb_len))
    goto bad_cdb_len;

   VAR_9 = VAR_4;
  } else {

   if (FUNC_6(VAR_5->cmd_len > 16))
    goto bad_cdb_len;

   VAR_9 = FUNC_2(VAR_7, VAR_8);
  }
 }

 if (VAR_9)
  VAR_10 = FUNC_4(VAR_7, VAR_5, VAR_6, VAR_9);
 else
  FUNC_3(VAR_7, VAR_5, VAR_6);

 return VAR_10;

 bad_cdb_len:
 FUNC_1("bad CDB len=%u, scsi_op=0x%02x, max=%u\n",
  VAR_5->cmd_len, VAR_8, VAR_7->cdb_len);
 VAR_5->result = VAR_2 << 16;
 VAR_6(VAR_5);
 return 0;
}
