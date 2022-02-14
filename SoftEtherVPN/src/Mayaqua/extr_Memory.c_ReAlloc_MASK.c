
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int ZeroFree; scalar_t__ Size; int Magic; } ;
typedef TYPE_1__ MEMTAG ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (void*,void*,scalar_t__) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int ) ;
 int VAR_0 ;
 void* FUNC_6 (TYPE_1__*) ;
 void* FUNC_7 (scalar_t__,int) ;
 TYPE_1__* FUNC_8 (void*) ;
 int FUNC_9 (TYPE_1__*,int) ;

void *FUNC_10(void *VAR_1, UINT VAR_2)
{
 MEMTAG *VAR_3;
 bool VAR_4;

 if (FUNC_4(VAR_1))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_8(VAR_1);
 FUNC_1(VAR_3);

 VAR_4 = VAR_3->ZeroFree;

 if (VAR_3->Size == VAR_2)
 {

  return VAR_1;
 }
 else
 {
  if (VAR_4)
  {

   void *VAR_5 = FUNC_7(VAR_2, 1);

   if (VAR_3->Size <= VAR_2)
   {

    FUNC_2(VAR_5, VAR_1, VAR_3->Size);
   }
   else
   {

    FUNC_2(VAR_5, VAR_1, VAR_2);
   }


   FUNC_3(VAR_1);

   return VAR_5;
  }
  else
  {

   MEMTAG *VAR_6 = FUNC_5(VAR_3, FUNC_0(VAR_2));

   FUNC_9(VAR_6, sizeof(MEMTAG));
   VAR_6->Magic = VAR_0;
   VAR_6->Size = VAR_2;

   return FUNC_6(VAR_6);
  }
 }
}
