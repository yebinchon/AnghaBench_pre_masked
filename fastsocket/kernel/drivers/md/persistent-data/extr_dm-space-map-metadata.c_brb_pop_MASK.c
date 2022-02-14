
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bop_ring_buffer {int begin; struct block_op* bops; } ;
struct block_op {int block; int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bop_ring_buffer*) ;
 int FUNC_1 (struct bop_ring_buffer*,int) ;

__attribute__((used)) static int FUNC_2(struct bop_ring_buffer *VAR_1, struct block_op *VAR_2)
{
 struct block_op *VAR_3;

 if (FUNC_0(VAR_1))
  return -VAR_0;

 VAR_3 = VAR_1->bops + VAR_1->begin;
 VAR_2->type = VAR_3->type;
 VAR_2->block = VAR_3->block;

 VAR_1->begin = FUNC_1(VAR_1, VAR_1->begin);

 return 0;
}
