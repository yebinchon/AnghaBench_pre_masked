
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int iobase; } ;
struct TYPE_2__ {int num_asics; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct comedi_device*,int,int) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_7)
{

 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->num_asics; ++VAR_8) {
  int VAR_9, VAR_10;
  unsigned long VAR_11 = VAR_7->iobase + VAR_8 * VAR_0;

  FUNC_1(VAR_7, VAR_8, 0);


  for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9)
   FUNC_0(0, VAR_11 + VAR_5 + VAR_9);


  for (VAR_10 = 1; VAR_10 < VAR_3; ++VAR_10) {
   int VAR_12;

   FUNC_1(VAR_7, VAR_8, VAR_10);
   for (VAR_12 = VAR_1;
        VAR_12 < VAR_1 + VAR_2; ++VAR_12)
    FUNC_0(0, VAR_11 + VAR_12);
  }
  FUNC_1(VAR_7, VAR_8, 0);

 }
}
