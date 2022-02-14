
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_rcv_ctx {scalar_t__ type; int buf_size; int num_desc; int ** buf_cpu; } ;
typedef int quadlet_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct dma_rcv_ctx *VAR_4, int VAR_5,
    quadlet_t *VAR_6, int VAR_7,
    unsigned char VAR_8, int VAR_9)
{
 int VAR_10 = -1;

 if (VAR_4->type == VAR_0 || VAR_4->type == VAR_1) {
  VAR_10 = VAR_3[VAR_8];
  if (VAR_10 == 0) {
   if (VAR_7 + 12 >= VAR_4->buf_size) {
    VAR_10 = (FUNC_0(VAR_4->buf_cpu[(VAR_5 + 1) % VAR_4->num_desc]
      [3 - ((VAR_4->buf_size - VAR_7) >> 2)], VAR_9) >> 16);
   } else {
    VAR_10 = (FUNC_0(VAR_6[3], VAR_9) >> 16);
   }
   VAR_10 += 20;
  }
 } else if (VAR_4->type == VAR_2) {

  VAR_10 = (FUNC_0(VAR_6[0], VAR_9) >> 16) + 8;
 }

 if (VAR_10 > 0 && VAR_10 % 4)
  VAR_10 += 4 - (VAR_10 % 4);

 return VAR_10;
}
