
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int (* stc_writew ) (struct comedi_device*,unsigned short,int ) ;} ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_0 (struct comedi_device*,unsigned short,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_10, unsigned short VAR_11)
{
 unsigned short VAR_12 = 0;

 if (VAR_11 & VAR_1) {
  VAR_12 |= VAR_0;
 }
 if (VAR_11 & VAR_3) {
  VAR_12 |= VAR_2;
 }
 if (VAR_11 & VAR_5) {
  VAR_12 |= VAR_4;
 }
 if (VAR_11 & VAR_7) {

  VAR_12 |= VAR_6 ;
 }
 if (VAR_12)
  VAR_9->stc_writew(VAR_10, VAR_12, VAR_8);
}
