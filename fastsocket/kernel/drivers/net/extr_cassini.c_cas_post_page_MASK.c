
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cas {int* rx_old; int cas_flags; scalar_t__ regs; TYPE_1__** init_rxds; } ;
struct TYPE_5__ {int dma_addr; } ;
typedef TYPE_2__ cas_page_t ;
struct TYPE_4__ {void* index; void* buffer; } ;


 int FUNC_0 (int ,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int const,int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (struct cas*,int const,int const) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct cas *VAR_6, const int VAR_7, const int VAR_8)
{
 cas_page_t *VAR_9;
 int VAR_10;

 VAR_10 = VAR_6->rx_old[VAR_7];

 VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8);
 VAR_6->init_rxds[VAR_7][VAR_10].buffer = FUNC_3(VAR_9->dma_addr);
 VAR_6->init_rxds[VAR_7][VAR_10].index =
  FUNC_3(FUNC_0(VAR_4, VAR_8) |
       FUNC_0(VAR_5, VAR_7));

 VAR_10 = FUNC_1(VAR_7, VAR_10 + 1);
 VAR_6->rx_old[VAR_7] = VAR_10;

 if (VAR_10 % 4)
  return;

 if (VAR_7 == 0)
  FUNC_4(VAR_10, VAR_6->regs + VAR_3);
 else if ((VAR_1 > 1) &&
   (VAR_6->cas_flags & VAR_0))
  FUNC_4(VAR_10, VAR_6->regs + VAR_2);
}
