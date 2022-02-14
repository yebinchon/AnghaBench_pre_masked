
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*) ;
 unsigned short FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_8, unsigned short *VAR_9)
{
 int VAR_10;
 unsigned short VAR_11;

 FUNC_1(VAR_8, VAR_2 | VAR_3);
 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_8,
        "timeout or signal in cs5529_do_conversion()");
  return -VAR_7;
 }
 VAR_11 = FUNC_3(VAR_8, VAR_1);
 if (VAR_11 & VAR_4) {
  FUNC_4
      ("ni_mio_common: cs5529 conversion error, status CSS_OSC_DETECT\n");
  return -VAR_6;
 }
 if (VAR_11 & VAR_5) {
  FUNC_4
      ("ni_mio_common: cs5529 conversion error, overrange (ignoring)\n");
 }
 if (VAR_9) {
  *VAR_9 = FUNC_3(VAR_8, VAR_0);

  *VAR_9 ^= (1 << 15);
 }
 return 0;
}
