
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_segment {size_t size; void* data; } ;
struct hash_desc {int dummy; } ;
typedef int iscsi_segment_done_fn_t ;


 int FUNC_0 (struct iscsi_segment*,size_t,int *,struct hash_desc*) ;

inline void
FUNC_1(struct iscsi_segment *VAR_0, void *VAR_1,
     size_t VAR_2, iscsi_segment_done_fn_t *VAR_3,
     struct hash_desc *VAR_4)
{
 FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4);
 VAR_0->data = VAR_1;
 VAR_0->size = VAR_2;
}
