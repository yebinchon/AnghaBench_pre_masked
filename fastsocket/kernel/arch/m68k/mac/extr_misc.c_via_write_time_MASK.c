
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 long VAR_0 ;
 int FUNC_0 (int,int*) ;

__attribute__((used)) static void FUNC_1(long VAR_1)
{
 union {
  __u8 cdata[4];
  long idata;
 } VAR_2;
 __u8 VAR_3;



 VAR_3 = 0x55;
 FUNC_0(0x35, &VAR_3);

 VAR_2.idata = VAR_1 + VAR_0;
 FUNC_0(0x01, &VAR_2.cdata[3]);
 FUNC_0(0x05, &VAR_2.cdata[2]);
 FUNC_0(0x09, &VAR_2.cdata[1]);
 FUNC_0(0x0D, &VAR_2.cdata[0]);



 VAR_3 = 0xD5;
 FUNC_0(0x35, &VAR_3);
}
