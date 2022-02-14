
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double mb; double ratio; } ;
struct TYPE_5__ {scalar_t__ flag; TYPE_1__ rs; } ;
typedef TYPE_2__ FDFSStorageReservedSpace ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,double) ;

const char *FUNC_1(FDFSStorageReservedSpace *VAR_1, char *VAR_2)

{
 if (VAR_1->flag == VAR_0)

 {
  FUNC_0(VAR_2, "%d MB", VAR_1->rs.mb);
 }
 else
 {
  FUNC_0(VAR_2, "%.2f%%", 100.00 * VAR_1->rs.ratio);

 }

 return VAR_2;
}
