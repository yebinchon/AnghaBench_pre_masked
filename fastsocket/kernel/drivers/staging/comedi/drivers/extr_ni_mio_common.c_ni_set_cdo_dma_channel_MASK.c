
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int cdio_dma_select_reg; int soft_reg_copy_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_5(struct comedi_device *VAR_4,
       int VAR_5)
{
 unsigned long VAR_6;

 FUNC_3(&VAR_3->soft_reg_copy_lock, VAR_6);
 VAR_3->cdio_dma_select_reg &= ~VAR_0;
 if (VAR_5 >= 0) {



  VAR_3->cdio_dma_select_reg |=
      (FUNC_1(VAR_5) <<
       VAR_1) & VAR_0;
 }
 FUNC_2(VAR_3->cdio_dma_select_reg, VAR_2);
 FUNC_0();
 FUNC_4(&VAR_3->soft_reg_copy_lock, VAR_6);
}
