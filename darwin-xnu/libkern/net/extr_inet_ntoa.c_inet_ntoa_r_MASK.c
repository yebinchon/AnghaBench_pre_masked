
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;


 int FUNC_0 (char*,size_t,char*,unsigned char,unsigned char,unsigned char,unsigned char) ;

char *
FUNC_1(struct in_addr VAR_0, char *VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3 = (unsigned char *)&VAR_0;

 FUNC_0(VAR_1, VAR_2, "%d.%d.%d.%d",
  VAR_3[0] & 0xff,
  VAR_3[1] & 0xff,
  VAR_3[2] & 0xff,
  VAR_3[3] & 0xff);
 return VAR_1;
}
