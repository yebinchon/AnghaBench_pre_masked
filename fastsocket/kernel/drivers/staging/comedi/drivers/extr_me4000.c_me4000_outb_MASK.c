
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int FUNC_0 (char*,unsigned char,unsigned long) ;
 int FUNC_1 (unsigned char,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct comedi_device *VAR_0, unsigned char VAR_1,
          unsigned long VAR_2)
{
 FUNC_0("--> 0x%02X port 0x%04lX\n", VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_2);
}
