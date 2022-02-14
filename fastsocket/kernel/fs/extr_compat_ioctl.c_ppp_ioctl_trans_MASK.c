
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;


 int FUNC_0 (unsigned int,unsigned int,unsigned long) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned long) ;
 int FUNC_2 (char*,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 switch (VAR_2) {
 case 129:
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  break;

 case 128:
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;

 default:
  do {
   static int VAR_5;
   if (++VAR_5 <= 20)
    FUNC_2("ppp_ioctl: Unknown cmd fd(%d) "
           "cmd(%08x) arg(%08x)\n",
           (int)VAR_1, (unsigned int)VAR_2, (unsigned int)VAR_3);
  } while(0);
  VAR_4 = -VAR_0;
  break;
 };

 return VAR_4;
}
