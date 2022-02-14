
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {unsigned int sense_buffer; } ;
struct esp_cmd_priv {unsigned int cur_residue; } ;
struct esp_cmd_entry {int flags; unsigned int sense_ptr; } ;


 int VAR_0 ;
 struct esp_cmd_priv* FUNC_0 (struct scsi_cmnd*) ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_1(struct esp_cmd_entry *VAR_2,
        struct scsi_cmnd *VAR_3)
{
 struct esp_cmd_priv *VAR_4 = FUNC_0(VAR_3);

 if (VAR_2->flags & VAR_0) {
  return VAR_1 -
   (VAR_2->sense_ptr - VAR_3->sense_buffer);
 }
 return VAR_4->cur_residue;
}
