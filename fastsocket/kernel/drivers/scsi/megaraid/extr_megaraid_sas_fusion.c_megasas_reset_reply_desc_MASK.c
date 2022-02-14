
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union MPI2_REPLY_DESCRIPTORS_UNION {int Words; } ;
struct megasas_instance {scalar_t__ msix_vectors; struct fusion_context* ctrl_context; } ;
struct fusion_context {int reply_q_depth; union MPI2_REPLY_DESCRIPTORS_UNION* reply_frames_desc; scalar_t__* last_reply_idx; } ;


 int VAR_0 ;

void FUNC_0(struct megasas_instance *VAR_1)
{
 int VAR_2, VAR_3;
 struct fusion_context *VAR_4;
 union MPI2_REPLY_DESCRIPTORS_UNION *VAR_5;

 VAR_4 = VAR_1->ctrl_context;
 VAR_3 = VAR_1->msix_vectors > 0 ? VAR_1->msix_vectors : 1;
 for (VAR_2 = 0 ; VAR_2 < VAR_3 ; VAR_2++)
  VAR_4->last_reply_idx[VAR_2] = 0;
 VAR_5 = VAR_4->reply_frames_desc;
 for (VAR_2 = 0 ; VAR_2 < VAR_4->reply_q_depth * VAR_3; VAR_2++, VAR_5++)
  VAR_5->Words = VAR_0;
}
