
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {double ratio; } ;
struct TYPE_5__ {scalar_t__ flag; TYPE_1__ rs; } ;
typedef TYPE_2__ FDFSStorageReservedSpace ;


 scalar_t__ VAR_0 ;

bool FUNC_0(const int64_t VAR_1, const int64_t VAR_2, const int VAR_3, FDFSStorageReservedSpace *VAR_4)


{
 if (VAR_4->flag == VAR_0)

 {
  return VAR_2 > VAR_3;
 }
 else
 {
  if (VAR_1 == 0)
  {
   return 0;
  }
  return ((double)VAR_2 / (double)VAR_1) > VAR_4->rs.ratio;

 }
}
