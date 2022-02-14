
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
struct TYPE_4__ {unsigned long iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct comedi_device*,int,int) ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_7)
{

 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->dio_num_asics; ++VAR_8) {
  int VAR_9, VAR_10;
  unsigned long VAR_11 = VAR_5->asics[VAR_8].iobase;

  FUNC_1(VAR_7, VAR_8, 0);


  for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9)
   FUNC_0(0, VAR_11 + VAR_4 + VAR_9);


  for (VAR_10 = 1; VAR_10 < VAR_2; ++VAR_10) {
   int VAR_12;

   FUNC_1(VAR_7, VAR_8, VAR_10);
   for (VAR_12 = VAR_0;
        VAR_12 < VAR_0 + VAR_1; ++VAR_12)
    FUNC_0(0, VAR_11 + VAR_12);
  }
  FUNC_1(VAR_7, VAR_8, 0);

 }
}
