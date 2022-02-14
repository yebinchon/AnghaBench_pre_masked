
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int Dacpol; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_10, uint16_t VAR_11, short VAR_12)
{
 register uint16_t VAR_13;
 register uint32_t VAR_14;



 VAR_13 = 1 << VAR_11;
 if (VAR_12 < 0) {
  VAR_12 = -VAR_12;
  VAR_9->Dacpol |= VAR_13;
 } else
  VAR_9->Dacpol &= ~VAR_13;


 if ((uint16_t) VAR_12 > 0x1FFF)
  VAR_12 = 0x1FFF;
 VAR_14 = (VAR_11 & 2) ? VAR_1 : VAR_2;

 FUNC_0(2, VAR_8 | VAR_5 | VAR_14);

 FUNC_0(3, VAR_8 | VAR_4 | VAR_14);

 FUNC_0(4, VAR_8 | VAR_7 | VAR_3);

 FUNC_0(5, VAR_8 | VAR_6 | VAR_3 | VAR_0);
 FUNC_1(VAR_10, 0x0F000000

  | 0x00004000


  | ((uint32_t) (VAR_11 & 1) << 15)

  | (uint32_t) VAR_12);

}
