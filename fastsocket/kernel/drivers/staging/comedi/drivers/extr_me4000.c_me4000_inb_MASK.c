
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int FUNC_0 (char*,unsigned char,unsigned long) ;
 unsigned char FUNC_1 (unsigned long) ;

__attribute__((used)) static inline unsigned char FUNC_2(struct comedi_device *VAR_0,
           unsigned long VAR_1)
{
 unsigned char VAR_2;
 VAR_2 = FUNC_1(VAR_1);
 FUNC_0("<-- 0x%08X port 0x%04lX\n", VAR_2, VAR_1);
 return VAR_2;
}
