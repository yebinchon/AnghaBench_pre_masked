
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct se_cmd {int se_cmd_flags; void* t_bidi_data_nents; struct scatterlist* t_bidi_data_sg; void* t_data_nents; struct scatterlist* t_data_sg; } ;
struct scatterlist {int dummy; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static sense_reason_t
FUNC_1(struct se_cmd *VAR_3, struct scatterlist *VAR_4,
  u32 VAR_5, struct scatterlist *VAR_6, u32 VAR_7)
{
 if (!VAR_4 || !VAR_5)
  return 0;






 if (VAR_3->se_cmd_flags & VAR_0) {
  FUNC_0("Rejecting SCSI DATA overflow for fabric using"
   " SCF_PASSTHROUGH_SG_TO_MEM_NOALLOC\n");
  return VAR_2;
 }

 VAR_3->t_data_sg = VAR_4;
 VAR_3->t_data_nents = VAR_5;

 if (VAR_6 && VAR_7) {
  VAR_3->t_bidi_data_sg = VAR_6;
  VAR_3->t_bidi_data_nents = VAR_7;
 }
 VAR_3->se_cmd_flags |= VAR_1;
 return 0;
}
