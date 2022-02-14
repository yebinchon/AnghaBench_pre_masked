
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_5)
{


 FUNC_1(VAR_2, VAR_1);
 FUNC_1(0x00, VAR_0);
 FUNC_1(VAR_3, VAR_1);
 FUNC_1(0x00, VAR_0);
 FUNC_1(VAR_4, VAR_1);
 FUNC_1((FUNC_0(VAR_0) & 0xAA), VAR_0);


 FUNC_2("comedi%d: dnp: remove\n", VAR_5->minor);

 return 0;

}
