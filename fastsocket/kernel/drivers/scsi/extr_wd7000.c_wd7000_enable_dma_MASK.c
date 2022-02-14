
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dma; scalar_t__ iobase; int control; } ;
typedef TYPE_1__ Adapter ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static inline void FUNC_5(Adapter * VAR_3)
{
 unsigned long VAR_4;
 VAR_3->control |= VAR_1;
 FUNC_2(VAR_3->control, VAR_3->iobase + VAR_0);

 VAR_4 = FUNC_0();
 FUNC_4(VAR_3->dma, VAR_2);
 FUNC_1(VAR_3->dma);
 FUNC_3(VAR_4);

}
