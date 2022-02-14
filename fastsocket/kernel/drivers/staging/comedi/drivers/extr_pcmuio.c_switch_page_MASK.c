
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_6__ {TYPE_1__* asics; } ;
struct TYPE_5__ {int num_asics; } ;
struct TYPE_4__ {int pagelock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_7, int VAR_8, int VAR_9)
{
 if (VAR_8 < 0 || VAR_8 >= VAR_6->num_asics)
  return;
 if (VAR_9 < 0 || VAR_9 >= VAR_1)
  return;

 VAR_5->asics[VAR_8].pagelock &= ~VAR_4;
 VAR_5->asics[VAR_8].pagelock |= VAR_9 << VAR_3;


 FUNC_0(VAR_5->asics[VAR_8].pagelock,
      VAR_7->iobase + VAR_0 * VAR_8 + VAR_2);
}
