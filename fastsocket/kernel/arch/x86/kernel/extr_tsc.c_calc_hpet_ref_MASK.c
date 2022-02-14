
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(u64 VAR_1, u64 VAR_2, u64 VAR_3)
{
 u64 VAR_4;

 if (VAR_3 < VAR_2)
  VAR_3 += 0x100000000ULL;
 VAR_3 -= VAR_2;
 VAR_4 = ((u64)VAR_3 * FUNC_1(VAR_0));
 FUNC_0(VAR_4, 1000000);
 FUNC_0(VAR_1, VAR_4);

 return (unsigned long) VAR_1;
}
