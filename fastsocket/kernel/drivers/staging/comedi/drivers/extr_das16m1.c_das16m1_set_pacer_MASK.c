
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int divisor2; int divisor1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,int *,int *,unsigned int*,int) ;
 int FUNC_1 (scalar_t__,int ,int,int ,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct comedi_device *VAR_4,
          unsigned int VAR_5, int VAR_6)
{
 FUNC_0(VAR_1, &(VAR_3->divisor1),
           &(VAR_3->divisor2), &VAR_5,
           VAR_6 & VAR_2);


 FUNC_1(VAR_4->iobase + VAR_0, 0, 1, VAR_3->divisor1,
     2);
 FUNC_1(VAR_4->iobase + VAR_0, 0, 2, VAR_3->divisor2,
     2);

 return VAR_5;
}
