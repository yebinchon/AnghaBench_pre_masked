
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ free_mb; scalar_t__ trunk_free_mb; scalar_t__ total_mb; } ;
struct TYPE_6__ {scalar_t__ mb; double ratio; } ;
struct TYPE_7__ {scalar_t__ flag; TYPE_1__ rs; } ;
typedef TYPE_2__ FDFSStorageReservedSpace ;
typedef TYPE_3__ FDFSGroupInfo ;


 scalar_t__ VAR_0 ;

bool FUNC_0(FDFSGroupInfo *VAR_1, FDFSStorageReservedSpace *VAR_2)

{
 if (VAR_2->flag == VAR_0)

 {
  return (VAR_1->free_mb + VAR_1->trunk_free_mb >
   VAR_2->rs.mb);
 }
 else
 {
  if (VAR_1->total_mb == 0)
  {
   return 0;
  }







  return ((double)(VAR_1->free_mb + VAR_1->trunk_free_mb) / (double)VAR_1->total_mb) > VAR_2->rs.ratio;

 }
}
