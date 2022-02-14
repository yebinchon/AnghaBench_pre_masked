
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* asics; } ;
struct TYPE_5__ {int dio_num_asics; } ;
struct TYPE_4__ {int pagelock; scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_6, int VAR_7, int VAR_8)
{
 if (VAR_7 < 0 || VAR_7 >= VAR_5->dio_num_asics)
  return;
 if (VAR_8 < 0 || VAR_8 >= VAR_0)
  return;

 VAR_4->asics[VAR_7].pagelock &= ~VAR_3;
 VAR_4->asics[VAR_7].pagelock |= VAR_8 << VAR_2;


 FUNC_0(VAR_4->asics[VAR_7].pagelock,
      VAR_4->asics[VAR_7].iobase + VAR_1);
}
