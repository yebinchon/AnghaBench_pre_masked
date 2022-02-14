
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_iso_ctx {unsigned int* buffer_status; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline unsigned FUNC_2(struct dma_iso_ctx *VAR_0,
           unsigned int VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3;
 FUNC_0(&VAR_0->lock, VAR_2);
 VAR_3 = VAR_0->buffer_status[VAR_1];
 FUNC_1(&VAR_0->lock, VAR_2);
 return VAR_3;
}
