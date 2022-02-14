
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_14__ {int pgConn; } ;
struct TYPE_13__ {scalar_t__ partitionMethod; } ;
typedef int ShardPlacementAccess ;
typedef TYPE_1__ ShardPlacement ;
typedef TYPE_2__ MultiConnection ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_1__*,int ) ;
 char* FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (int ,int ,int *) ;
 TYPE_2__* FUNC_4 (int ,TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_2__*,int const) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static MultiConnection *
FUNC_10(ShardPlacement *VAR_8, bool VAR_9)
{
 MultiConnection *VAR_10 = ((void*)0);
 uint32 VAR_11 = VAR_4;
 char *VAR_12 = FUNC_2();
 ShardPlacementAccess *VAR_13 = ((void*)0);





 VAR_13 = FUNC_1(VAR_8, VAR_6);
 VAR_10 = FUNC_3(VAR_11,
              FUNC_9(VAR_13),
              ((void*)0));
 if (VAR_10 != ((void*)0))
 {
  return VAR_10;
 }






 if (VAR_8->partitionMethod == VAR_2 &&
  VAR_5 != VAR_7)
 {
  VAR_11 |= VAR_1;
 }

 VAR_10 = FUNC_4(VAR_11, VAR_8, VAR_12);

 if (FUNC_7(VAR_10->pgConn) != VAR_0)
 {
  if (VAR_9)
  {
   FUNC_8(VAR_10, VAR_3);
  }
  else
  {
   const bool VAR_14 = 1;

   FUNC_5(VAR_10, VAR_14);

   return ((void*)0);
  }
 }






 FUNC_6(VAR_10);

 if (VAR_5 != VAR_7)
 {
  FUNC_0(VAR_10);
 }

 return VAR_10;
}
