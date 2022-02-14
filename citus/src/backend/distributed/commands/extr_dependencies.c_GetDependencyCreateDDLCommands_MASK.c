
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int objectId; } ;
typedef TYPE_1__ ObjectAddress ;
typedef int List ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__ const*) ;
 char* FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_1__ const*) ;
 int VAR_0 ;
 int * VAR_1 ;




 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (TYPE_1__ const*) ;
 int FUNC_9 (TYPE_1__ const*) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (void*) ;

__attribute__((used)) static List *
FUNC_12(const ObjectAddress *VAR_3)
{
 switch (FUNC_8(VAR_3))
 {
  case 131:
  {




   if (FUNC_10(VAR_3->objectId) == VAR_2)
   {
    return VAR_1;
   }


   break;
  }

  case 130:
  {
   return FUNC_1(VAR_3);
  }

  case 129:
  {
   const char *VAR_4 = FUNC_2(VAR_3->objectId);

   if (VAR_4 == ((void*)0))
   {

    return VAR_1;
   }

   return FUNC_11((void *) VAR_4);
  }

  case 128:
  {
   return FUNC_3(VAR_3);
  }

  default:
  {
   break;
  }
 }





 FUNC_0(0);
 FUNC_4(VAR_0, (FUNC_7("unsupported object %s for distribution by citus",
         FUNC_9(VAR_3)),
     FUNC_5(
      "citus tries to recreate an unsupported object on its workers"),
     FUNC_6("please report a bug as this should not be happening")));
}
