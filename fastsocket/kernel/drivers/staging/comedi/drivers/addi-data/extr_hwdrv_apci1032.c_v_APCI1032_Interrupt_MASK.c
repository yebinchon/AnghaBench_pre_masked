
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; int tsk_Current; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(int VAR_6, void *VAR_7)
{
 struct comedi_device *VAR_8 = VAR_7;

 unsigned int VAR_9;

 VAR_9 = FUNC_0(VAR_4->iobase + VAR_2);
 FUNC_1(VAR_9 & VAR_0,
  VAR_4->iobase + VAR_2);
 VAR_5 =
  FUNC_0(VAR_4->iobase + VAR_1);
 VAR_5 = VAR_5 & 0X0000FFFF;
 FUNC_2(VAR_3, VAR_4->tsk_Current, 0);
 FUNC_1(VAR_9, VAR_4->iobase + VAR_2);
 return;
}
