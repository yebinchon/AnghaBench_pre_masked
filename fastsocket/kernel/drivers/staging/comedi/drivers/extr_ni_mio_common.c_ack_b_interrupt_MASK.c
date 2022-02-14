
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
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 int VAR_14 ;
 TYPE_1__* VAR_15 ;
 int FUNC_0 (struct comedi_device*,unsigned short,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_16, unsigned short VAR_17)
{
 unsigned short VAR_18 = 0;
 if (VAR_17 & VAR_1) {
  VAR_18 |= VAR_0;
 }
 if (VAR_17 & VAR_3) {
  VAR_18 |= VAR_2;
 }
 if (VAR_17 & VAR_7) {
  VAR_18 |= VAR_6;
 }
 if (VAR_17 & VAR_5) {
  VAR_18 |= VAR_4;
 }
 if (VAR_17 & VAR_9) {
  VAR_18 |= VAR_8;
 }
 if (VAR_17 & VAR_11) {
  VAR_18 |= VAR_10;
 }
 if (VAR_17 & VAR_13) {
  VAR_18 |= VAR_12;
 }
 if (VAR_18)
  VAR_15->stc_writew(VAR_16, VAR_18, VAR_14);
}
