
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int isValid; } ;
typedef int Oid ;
typedef TYPE_1__ DistTableCacheEntry ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_9 (int ,void*,int ,int*) ;
 int FUNC_10 (char*,int ,int) ;

__attribute__((used)) static DistTableCacheEntry *
FUNC_11(Oid VAR_6)
{
 DistTableCacheEntry *VAR_7 = ((void*)0);
 bool VAR_8 = 0;
 void *VAR_9 = (void *) &VAR_6;






 if (!FUNC_3())
 {
  return ((void*)0);
 }

 FUNC_5();





 if (!VAR_5 && VAR_3)
 {
  bool VAR_10 = FUNC_6(VAR_6);
  int VAR_11 = VAR_0;







  if (VAR_10)
  {
   VAR_11 = VAR_2;
  }

  if (!FUNC_2(VAR_11))
  {

   return ((void*)0);
  }
 }

 VAR_7 = FUNC_9(VAR_1, VAR_9, VAR_4, &VAR_8);


 if (VAR_8)
 {




  FUNC_0();

  if (VAR_7->isValid)
  {
   return VAR_7;
  }


  FUNC_8(VAR_7);
 }


 FUNC_10(((char *) VAR_7) + sizeof(Oid), 0,
     sizeof(DistTableCacheEntry) - sizeof(Oid));







 FUNC_4();


 FUNC_1(VAR_7);


 VAR_7->isValid = 1;

 FUNC_7();

 return VAR_7;
}
