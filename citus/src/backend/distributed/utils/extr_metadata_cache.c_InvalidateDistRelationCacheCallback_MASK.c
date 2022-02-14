
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ distPartitionRelationId; scalar_t__ distObjectRelationId; } ;
struct TYPE_4__ {int isValid; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ DistTableCacheEntry ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_3__ VAR_3 ;
 TYPE_1__* FUNC_3 (int ,void*,int ,int*) ;

__attribute__((used)) static void
FUNC_4(Datum VAR_4, Oid VAR_5)
{

 if (VAR_5 == VAR_2)
 {
  FUNC_1();
  FUNC_0();
 }
 else
 {
  void *VAR_6 = (void *) &VAR_5;
  bool VAR_7 = 0;


  DistTableCacheEntry *VAR_8 = FUNC_3(VAR_0, VAR_6,
               VAR_1, &VAR_7);
  if (VAR_7)
  {
   VAR_8->isValid = 0;
  }






  if (VAR_5 == VAR_3.distPartitionRelationId)
  {
   FUNC_2();
  }

  if (VAR_5 == VAR_3.distObjectRelationId)
  {
   FUNC_0();
  }
 }
}
