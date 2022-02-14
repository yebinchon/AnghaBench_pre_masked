
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long time_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long const VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(const time_t VAR_3)
{
 unsigned long VAR_4, VAR_5;
 unsigned long VAR_6 = VAR_3 + VAR_2;

 do {
  FUNC_1((VAR_6 & 0xffff0000) >> 16, VAR_0);
  FUNC_1((VAR_6 & 0xffff), VAR_1);

  VAR_4 = ((FUNC_0(VAR_0) & 0xffff) << 16) |
   (FUNC_0(VAR_1) & 0xffff);

  VAR_5 = ((FUNC_0(VAR_0) & 0xffff) << 16) |
   (FUNC_0(VAR_1) & 0xffff);
 } while (VAR_4 != VAR_5);

 return 0;
}
