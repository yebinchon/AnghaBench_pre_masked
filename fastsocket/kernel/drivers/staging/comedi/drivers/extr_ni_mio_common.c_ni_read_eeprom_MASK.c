
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_6 = 0x0300 | ((VAR_4 & 0x100) << 3) | (VAR_4 & 0xff);
 FUNC_1(0x04, VAR_1);
 for (VAR_5 = 0x8000; VAR_5; VAR_5 >>= 1) {
  FUNC_1(0x04 | ((VAR_5 & VAR_6) ? 0x02 : 0),
     VAR_1);
  FUNC_1(0x05 | ((VAR_5 & VAR_6) ? 0x02 : 0),
     VAR_1);
 }
 VAR_6 = 0;
 for (VAR_5 = 0x80; VAR_5; VAR_5 >>= 1) {
  FUNC_1(0x04, VAR_1);
  FUNC_1(0x05, VAR_1);
  VAR_6 |= ((FUNC_0(VAR_2) & VAR_0) ? VAR_5 : 0);
 }
 FUNC_1(0x00, VAR_1);

 return VAR_6;
}
