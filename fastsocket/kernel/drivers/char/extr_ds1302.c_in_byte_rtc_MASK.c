
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static unsigned char
FUNC_2(unsigned int VAR_3)
{
 unsigned char VAR_4;


 FUNC_1(0x0001,(unsigned long)VAR_2);

 FUNC_1((VAR_3&0xff),(unsigned long)VAR_1);

 FUNC_1(0x0001,(unsigned long)VAR_0);

 while(FUNC_0((unsigned long)VAR_0));


 VAR_4=(FUNC_0((unsigned long)VAR_1) & 0xff00)>>8;


 FUNC_1(0x0000,(unsigned long)VAR_2);

 return VAR_4;
}
