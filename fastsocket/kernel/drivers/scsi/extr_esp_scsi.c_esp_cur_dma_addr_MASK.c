
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__ sense_buffer; } ;
struct esp_cmd_priv {scalar_t__ cur_residue; int cur_sg; } ;
struct esp_cmd_entry {int flags; scalar_t__ sense_ptr; scalar_t__ sense_dma; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 struct esp_cmd_priv* FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static dma_addr_t FUNC_3(struct esp_cmd_entry *VAR_1,
       struct scsi_cmnd *VAR_2)
{
 struct esp_cmd_priv *VAR_3 = FUNC_0(VAR_2);

 if (VAR_1->flags & VAR_0) {
  return VAR_1->sense_dma +
   (VAR_1->sense_ptr - VAR_2->sense_buffer);
 }

 return FUNC_1(VAR_3->cur_sg) +
  (FUNC_2(VAR_3->cur_sg) -
   VAR_3->cur_residue);
}
