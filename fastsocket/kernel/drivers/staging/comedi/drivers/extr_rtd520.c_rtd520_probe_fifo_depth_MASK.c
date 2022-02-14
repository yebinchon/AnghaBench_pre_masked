
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*) ;
 unsigned int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (struct comedi_device*,int,unsigned int*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(0, 0, VAR_0);
 unsigned VAR_6;
 static const unsigned VAR_7 = 0x2000;
 unsigned VAR_8 = 0;

 FUNC_1(VAR_4);
 FUNC_6(VAR_4, 1, &VAR_5);
 FUNC_2(VAR_4, 0);

 for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6) {
  unsigned VAR_9;

  FUNC_3(VAR_4);
  FUNC_7(1);
  VAR_9 = FUNC_4(VAR_4);
  if ((VAR_9 & VAR_3) == 0) {
   VAR_8 = 2 * VAR_6;
   break;
  }
 }
 if (VAR_6 == VAR_7) {
  FUNC_5("\ncomedi: %s: failed to probe fifo size.\n", VAR_1);
  return -VAR_2;
 }
 FUNC_1(VAR_4);
 if (VAR_8 != 0x400 && VAR_8 != 0x2000) {
  FUNC_5
      ("\ncomedi: %s: unexpected fifo size of %i, expected 1024 or 8192.\n",
       VAR_1, VAR_8);
  return -VAR_2;
 }
 return VAR_8;
}
