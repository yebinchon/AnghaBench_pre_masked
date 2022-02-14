
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_2,
          unsigned long VAR_3,
          unsigned long VAR_4)
{
 VAR_4 = VAR_3 + VAR_4;

 if (FUNC_1(VAR_2, VAR_4))
  return 0;
 if (VAR_4 < VAR_2) {

  VAR_4 -= VAR_1;
  VAR_2 -= VAR_1;
 }
 FUNC_0(VAR_4 < VAR_2);

 return (VAR_4 - VAR_2) / VAR_0;
}
