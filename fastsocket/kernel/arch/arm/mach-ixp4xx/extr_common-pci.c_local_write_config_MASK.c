
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(int VAR_2, int VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 FUNC_2("local_write_config %#x to %d size %d\n", VAR_4, VAR_2, VAR_3);
 VAR_5 = VAR_2 % 4;
 VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (VAR_6 == 0xffffffff)
  return VAR_0;
 VAR_7 = VAR_4 << (8*VAR_5);
 FUNC_0((VAR_2 & ~3) | VAR_6, VAR_7);
 return VAR_1;
}
