
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_device*,unsigned int) ;
 scalar_t__ FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6)
{
 FUNC_3(VAR_4, ((VAR_5 >> 16) & 0xff),
         VAR_0);
 FUNC_3(VAR_4, (VAR_5 & 0xffff),
         VAR_1);
 VAR_6 &= VAR_3;
 FUNC_1(VAR_4, VAR_2 | VAR_6);
 if (FUNC_2(VAR_4))
  FUNC_0(VAR_4, "time or signal in cs5529_config_write()");
}
