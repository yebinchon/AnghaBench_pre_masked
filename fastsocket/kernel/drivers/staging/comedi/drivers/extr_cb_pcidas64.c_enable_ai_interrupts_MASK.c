
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct comedi_device {int spinlock; } ;
struct comedi_cmd {int flags; } ;
struct TYPE_4__ {scalar_t__ layout; } ;
struct TYPE_3__ {int intr_enable_bits; scalar_t__ main_iobase; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_1 (struct comedi_device*) ;
 TYPE_1__* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_9,
     const struct comedi_cmd *VAR_10)
{
 uint32_t VAR_11;
 unsigned long VAR_12;

 VAR_11 = VAR_4 | VAR_2 |
     VAR_1 | VAR_5;

 if (VAR_10->flags & VAR_8) {

  if (FUNC_1(VAR_9)->layout != VAR_7)
   VAR_11 |= VAR_0 | VAR_3;
 }
 FUNC_3(&VAR_9->spinlock, VAR_12);
 FUNC_2(VAR_9)->intr_enable_bits |= VAR_11;
 FUNC_5(FUNC_2(VAR_9)->intr_enable_bits,
        FUNC_2(VAR_9)->main_iobase + VAR_6);
 FUNC_0("intr enable bits 0x%x\n", FUNC_2(VAR_9)->intr_enable_bits);
 FUNC_4(&VAR_9->spinlock, VAR_12);
}
