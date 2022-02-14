
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_1)
{
 u64 VAR_2;
 unsigned int VAR_3 = VAR_1;
 VAR_2 = (u64)VAR_0 * 1000;
 FUNC_0(VAR_2, VAR_3);
 if (VAR_2 > 0x7fffffffULL) {
  u64 VAR_4 = (u64)VAR_0 * 1000;
  FUNC_0(VAR_4, 0x7fffffffUL);
  VAR_3 = VAR_4 + 1;
 }
 return VAR_3;
}
