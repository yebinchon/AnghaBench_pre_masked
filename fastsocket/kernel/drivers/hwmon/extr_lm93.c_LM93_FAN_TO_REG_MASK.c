
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 void* FUNC_0 (int,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u16 FUNC_2(long VAR_0)
{
 u16 VAR_1, VAR_2;

 if (VAR_0 == 0) {
  VAR_1 = 0x3fff;
 } else {
  VAR_0 = FUNC_0(VAR_0, 1, 1000000);
  VAR_1 = FUNC_0((1350000 + VAR_0) / VAR_0, 1, 0x3ffe);
 }

 VAR_2 = VAR_1 << 2;
 return FUNC_1(VAR_2);
}
