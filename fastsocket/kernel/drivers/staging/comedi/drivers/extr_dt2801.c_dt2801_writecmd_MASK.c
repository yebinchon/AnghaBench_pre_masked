
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_4);

 VAR_6 = FUNC_1(VAR_4->iobase + VAR_1);
 if (VAR_6 & VAR_2) {
  FUNC_3
      ("dt2801: composite-error in dt2801_writecmd(), ignoring\n");
 }
 if (!(VAR_6 & VAR_3)) {
  FUNC_3("dt2801: !ready in dt2801_writecmd(), ignoring\n");
 }
 FUNC_2(VAR_5, VAR_4->iobase + VAR_0);

 return 0;
}
