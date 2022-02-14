
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(int VAR_4)
{
 unsigned int VAR_5;



 VAR_5=VAR_4&0x3f;
 VAR_5|=VAR_5<<8;
 VAR_5|=VAR_5<<16;

 FUNC_0((int *)VAR_2, VAR_5, VAR_1*(8+(VAR_0-VAR_3)*8)/4);
}
