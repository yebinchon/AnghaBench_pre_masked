
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cas_tx_desc {void* buffer; void* control; } ;
struct cas {struct cas_tx_desc** init_txds; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct cas *VAR_3, int VAR_4, int VAR_5,
     dma_addr_t VAR_6, int VAR_7, u64 VAR_8, int VAR_9)
{
 struct cas_tx_desc *VAR_10 = VAR_3->init_txds[VAR_4] + VAR_5;

 VAR_8 |= FUNC_0(VAR_0, VAR_7);
 if (FUNC_1(VAR_4, VAR_5))
  VAR_8 |= VAR_2;
 if (VAR_9)
  VAR_8 |= VAR_1;
 VAR_10->control = FUNC_2(VAR_8);
 VAR_10->buffer = FUNC_2(VAR_6);
}
