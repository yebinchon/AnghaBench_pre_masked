
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct MPT3SAS_ADAPTER {int (* base_add_sg_single ) (void*,size_t,int ) ;int sge_size; } ;
typedef int dma_addr_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,void*) ;
 int FUNC_1 (void*,size_t,int ) ;
 int FUNC_2 (void*,size_t,int ) ;
 int FUNC_3 (void*,size_t,int ) ;
 int FUNC_4 (void*,size_t,int ) ;

__attribute__((used)) static void
FUNC_5(struct MPT3SAS_ADAPTER *VAR_6, void *VAR_7,
 dma_addr_t VAR_8, size_t VAR_9, dma_addr_t VAR_10,
 size_t VAR_11)
{
 u32 VAR_12;

 if (!VAR_9 && !VAR_11) {
  FUNC_0(VAR_6, VAR_7);
  return;
 }

 if (VAR_9 && VAR_11) {

  VAR_12 = (VAR_5 |
      VAR_0 | VAR_2);
  VAR_12 = VAR_12 << VAR_4;
  VAR_6->base_add_sg_single(VAR_7, VAR_12 |
      VAR_9, VAR_8);


  VAR_7 += VAR_6->sge_size;


  VAR_12 = (VAR_5 |
      VAR_3 | VAR_0 |
      VAR_1);
  VAR_12 = VAR_12 << VAR_4;
  VAR_6->base_add_sg_single(VAR_7, VAR_12 |
      VAR_11, VAR_10);
 } else if (VAR_9) {
  VAR_12 = (VAR_5 |
      VAR_3 | VAR_0 |
      VAR_1 | VAR_2);
  VAR_12 = VAR_12 << VAR_4;
  VAR_6->base_add_sg_single(VAR_7, VAR_12 |
      VAR_9, VAR_8);
 } else if (VAR_11) {
  VAR_12 = (VAR_5 |
      VAR_3 | VAR_0 |
      VAR_1);
  VAR_12 = VAR_12 << VAR_4;
  VAR_6->base_add_sg_single(VAR_7, VAR_12 |
      VAR_11, VAR_10);
 }
}
