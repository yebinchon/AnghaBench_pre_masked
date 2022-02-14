
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int spinlock; } ;
struct TYPE_2__ {int intr_enable_bits; scalar_t__ main_iobase; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_7)
{
 unsigned long VAR_8;

 FUNC_2(&VAR_7->spinlock, VAR_8);
 FUNC_1(VAR_7)->intr_enable_bits &=
     ~VAR_3 & ~VAR_2 &
     ~VAR_1 & ~VAR_5 &
     ~VAR_4 & ~VAR_0;
 FUNC_4(FUNC_1(VAR_7)->intr_enable_bits,
        FUNC_1(VAR_7)->main_iobase + VAR_6);
 FUNC_3(&VAR_7->spinlock, VAR_8);

 FUNC_0("intr enable bits 0x%x\n", FUNC_1(VAR_7)->intr_enable_bits);
}
