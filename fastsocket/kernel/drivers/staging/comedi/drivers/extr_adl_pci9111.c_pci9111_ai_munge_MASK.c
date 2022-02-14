
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9111_board {int ai_resolution; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ board_ptr; } ;


 short VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;

__attribute__((used)) static void FUNC_0(struct comedi_device *VAR_5,
        struct comedi_subdevice *VAR_6, void *VAR_7,
        unsigned int VAR_8,
        unsigned int VAR_9)
{
 unsigned int VAR_10, VAR_11 = VAR_8 / sizeof(short);
 short *VAR_12 = VAR_7;
 int VAR_13 =
     ((struct pci9111_board *)VAR_5->board_ptr)->ai_resolution;

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  if (VAR_13 == VAR_2)
   VAR_12[VAR_10] =
       (VAR_12[VAR_10] & VAR_4) ^
       VAR_3;
  else
   VAR_12[VAR_10] =
       ((VAR_12[VAR_10] >> 4) & VAR_1) ^
       VAR_0;
 }
}
