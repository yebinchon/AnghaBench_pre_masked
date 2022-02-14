
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mb; int const ratio; } ;
struct TYPE_5__ {scalar_t__ flag; TYPE_1__ rs; } ;
typedef TYPE_2__ FDFSStorageReservedSpace ;


 scalar_t__ VAR_0 ;

int FUNC_0(const int VAR_1, FDFSStorageReservedSpace *VAR_2)

{
 if (VAR_2->flag == VAR_0)

 {
  return VAR_2->rs.mb;
 }
 else
 {
  return (int)(VAR_1 * VAR_2->rs.ratio);
 }
}
