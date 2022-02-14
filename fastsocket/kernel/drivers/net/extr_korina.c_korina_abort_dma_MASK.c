
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int trans_start; } ;
struct dma_reg {int dmandptr; int dmadptr; int dmas; int dmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_3,
     struct dma_reg *VAR_4)
{
       if (FUNC_0(&VAR_4->dmac) & VAR_0) {
        FUNC_1(0x10, &VAR_4->dmac);

        while (!(FUNC_0(&VAR_4->dmas) & VAR_1))
         VAR_3->trans_start = VAR_2;

        FUNC_1(0, &VAR_4->dmas);
       }

       FUNC_1(0, &VAR_4->dmadptr);
       FUNC_1(0, &VAR_4->dmandptr);
}
