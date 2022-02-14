
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int flag1; int Now; TYPE_1__* NativeNat; } ;
typedef TYPE_2__ VH ;
typedef int UINT ;
struct TYPE_12__ {int Ref; } ;
struct TYPE_10__ {int SendStateChanged; int Lock; TYPE_3__* HaltTube; } ;
typedef TYPE_3__ TUBE ;
typedef int PKT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (void*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int *) ;

bool FUNC_12(VH *VAR_0, void *VAR_1, UINT VAR_2)
{
 if (VAR_1 == ((void*)0))
 {

  VAR_0->flag1 = 0;

  if (VAR_0->NativeNat != ((void*)0))
  {
   if (VAR_0->NativeNat->SendStateChanged)
   {
    TUBE *VAR_3 = ((void*)0);

    FUNC_3(VAR_0->NativeNat->Lock);
    {
     if (VAR_0->NativeNat->HaltTube != ((void*)0))
     {
      VAR_3 = VAR_0->NativeNat->HaltTube;

      FUNC_0(VAR_3->Ref);
     }
    }
    FUNC_9(VAR_0->NativeNat->Lock);

    if (VAR_3 != ((void*)0))
    {
     FUNC_8(VAR_3, 1);

     VAR_0->NativeNat->SendStateChanged = 0;

     FUNC_6(VAR_3);
    }
   }
  }
 }
 else
 {

  PKT *VAR_4 = FUNC_5(VAR_1, VAR_2);

  if (VAR_0->flag1 == 0)
  {
   VAR_0->flag1 = 1;
   VAR_0->Now = FUNC_7();
  }


  FUNC_4(VAR_0);
  {
   if (VAR_4 != ((void*)0))
   {

    FUNC_11(VAR_0, VAR_4);


    FUNC_2(VAR_4);
   }
  }
  FUNC_10(VAR_0);

  FUNC_1(VAR_1);
 }

 return 1;
}
