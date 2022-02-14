
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ length; } ;
struct iscsi_segment {unsigned int sg_offset; int * data; scalar_t__ total_copied; scalar_t__ total_size; int size; struct scatterlist* sg; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct iscsi_segment *VAR_0,
     struct scatterlist *VAR_1, unsigned int VAR_2)
{
 VAR_0->sg = VAR_1;
 VAR_0->sg_offset = VAR_2;
 VAR_0->size = FUNC_0(VAR_1->length - VAR_2,
       VAR_0->total_size - VAR_0->total_copied);
 VAR_0->data = ((void*)0);
}
