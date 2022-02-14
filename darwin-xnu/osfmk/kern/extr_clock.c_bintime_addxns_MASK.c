
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bintime {int dummy; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bintime*,int) ;
 int FUNC_1 (struct bintime*,int) ;
 int FUNC_2 (struct bintime*,int) ;
 int FUNC_3 (struct bintime*,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static __inline void
FUNC_5(struct bintime *VAR_1, uint64_t VAR_2, int64_t VAR_3)
{
 uint64_t VAR_4 = (VAR_3 > 0)?(uint64_t )VAR_3:(uint64_t)-VAR_3;
 uint64_t VAR_5 = FUNC_4(VAR_2, VAR_4);
 if (VAR_3 > 0) {
  if (VAR_5)
   FUNC_0(VAR_1, VAR_5);
  VAR_5 = (VAR_2 * VAR_4) / (uint64_t)VAR_0;
  FUNC_1(VAR_1, VAR_5);
 }
 else{
  if (VAR_5)
   FUNC_2(VAR_1, VAR_5);
  VAR_5 = (VAR_2 * VAR_4) / (uint64_t)VAR_0;
  FUNC_3(VAR_1,VAR_5);
 }
}
