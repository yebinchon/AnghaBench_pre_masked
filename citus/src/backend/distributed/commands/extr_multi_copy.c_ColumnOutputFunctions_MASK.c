
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_4__ {int natts; } ;
typedef int Oid ;
typedef int FmgrInfo ;


 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ,int *,int) ;

FmgrInfo *
FUNC_2(TupleDesc VAR_0, bool VAR_1)
{
 uint32 VAR_2 = (uint32) VAR_0->natts;
 Oid *VAR_3 = FUNC_0(VAR_0);
 FmgrInfo *VAR_4 =
  FUNC_1(VAR_2, VAR_3, VAR_1);

 return VAR_4;
}
