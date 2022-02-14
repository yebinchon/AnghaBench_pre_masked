
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct MPT3SAS_ADAPTER {int sge_size_ieee; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int,int ,size_t,int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,void*) ;

__attribute__((used)) static void
FUNC_2(struct MPT3SAS_ADAPTER *VAR_3, void *VAR_4,
 dma_addr_t VAR_5, size_t VAR_6, dma_addr_t VAR_7,
 size_t VAR_8)
{
 u8 VAR_9;

 if (!VAR_6 && !VAR_8) {
  FUNC_1(VAR_3, VAR_4);
  return;
 }

 if (VAR_6 && VAR_8) {

  VAR_9 = VAR_1 |
      VAR_2;
  FUNC_0(VAR_4, VAR_9, 0, VAR_6,
      VAR_5);


  VAR_4 += VAR_3->sge_size_ieee;


  VAR_9 |= VAR_0;
  FUNC_0(VAR_4, VAR_9, 0, VAR_8,
      VAR_7);
 } else if (VAR_6) {
  VAR_9 = VAR_1 |
      VAR_0 |
      VAR_2;
  FUNC_0(VAR_4, VAR_9, 0, VAR_6,
      VAR_5);
 } else if (VAR_8) {
  VAR_9 = VAR_1 |
      VAR_0 |
      VAR_2;
  FUNC_0(VAR_4, VAR_9, 0, VAR_8,
      VAR_7);
 }
}
