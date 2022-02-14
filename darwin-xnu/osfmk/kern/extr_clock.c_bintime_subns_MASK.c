
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bintime {int sec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bintime*,int) ;

__attribute__((used)) static __inline void
FUNC_1(struct bintime *VAR_1, uint64_t VAR_2)
{
 VAR_1->sec -= VAR_2/ (uint64_t)VAR_0;
 VAR_2 = VAR_2 % (uint64_t)VAR_0;
 if (VAR_2) {

  VAR_2 = VAR_2 * (uint64_t)18446744073LL;
  FUNC_0(VAR_1, VAR_2);
 }
}
