
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_12__ {TYPE_1__* Server; int lock; } ;
struct TYPE_11__ {int lock; int HashedPassword; } ;
struct TYPE_10__ {scalar_t__ ServerType; int HashedPassword; } ;
typedef TYPE_2__ HUB ;
typedef TYPE_3__ CEDAR ;


 scalar_t__ FUNC_0 (int *,void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,int ,void*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;

UINT FUNC_10(CEDAR *VAR_7, void *VAR_8, void *VAR_9, char *VAR_10,
      bool VAR_11, bool *VAR_12)
{
 UCHAR VAR_13[VAR_6];
 bool VAR_14;

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return VAR_3;
 }
 if (VAR_12 == ((void*)0))
 {
  VAR_12 = &VAR_14;
 }

 *VAR_12 = 0;

 if (VAR_10 == ((void*)0) || FUNC_7(VAR_10) == 0)
 {

  FUNC_2(VAR_7->lock);
  {
   if (VAR_11 && FUNC_6(VAR_7->Server->HashedPassword))
   {

    *VAR_12 = 1;
   }

   FUNC_5(VAR_13, VAR_7->Server->HashedPassword, VAR_8);
  }
  FUNC_8(VAR_7->lock);

  if (FUNC_0(VAR_13, VAR_9, VAR_6) != 0)
  {

   return VAR_0;
  }
 }
 else
 {
  HUB *VAR_15;
  FUNC_3(VAR_7);
  {
   VAR_15 = FUNC_1(VAR_7, VAR_10);
  }
  FUNC_9(VAR_7);

  if (VAR_15 == ((void*)0))
  {

   return VAR_2;
  }

  FUNC_2(VAR_15->lock);
  {
   if (VAR_11 && FUNC_6(VAR_15->HashedPassword))
   {

    *VAR_12 = 1;
   }

   FUNC_5(VAR_13, VAR_15->HashedPassword, VAR_8);
  }
  FUNC_8(VAR_15->lock);

  FUNC_4(VAR_15);

  if (FUNC_0(VAR_13, VAR_9, VAR_6) != 0)
  {

   return VAR_0;
  }
 }

 return VAR_4;
}
