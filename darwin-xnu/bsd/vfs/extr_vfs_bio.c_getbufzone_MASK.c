
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zone_t ;
struct TYPE_2__ {size_t mz_size; int mz_zone; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,size_t) ;

__attribute__((used)) static __inline__ zone_t
FUNC_1(size_t VAR_3)
{
 int VAR_4;

 if ((VAR_3 % 512) || (VAR_3 < VAR_1) || (VAR_3 > VAR_0))
  FUNC_0("getbufzone: incorect size = %lu", VAR_3);

 for (VAR_4 = 0; VAR_2[VAR_4].mz_size != 0; VAR_4++) {
  if (VAR_2[VAR_4].mz_size >= VAR_3)
   break;
 }

 return (VAR_2[VAR_4].mz_zone);
}
