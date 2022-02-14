
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int objectId; } ;
typedef TYPE_1__ ObjectAddress ;


 int FUNC_0 (int) ;
 int VAR_0 ;




 int VAR_1 ;



 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

bool
FUNC_5(const ObjectAddress *VAR_2)
{
 if (!VAR_0)
 {




  switch (FUNC_1(VAR_2))
  {
   case 132:
   {
    return 1;
   }

   default:
   {
    return 0;
   }
  }


  FUNC_0(0);
 }





 switch (FUNC_1(VAR_2))
 {
  case 132:
  {
   return 1;
  }

  case 133:
  {
   return 1;
  }

  case 131:
  {
   switch (FUNC_3(VAR_2->objectId))
   {
    case 128:
    case 129:
    {
     return 1;
    }

    case 130:
    {




     return FUNC_4(VAR_2->objectId);
    }

    default:
    {

     return 0;
    }
   }




   break;
  }

  case 134:
  {




   if (FUNC_2(VAR_2->objectId) == VAR_1)
   {
    return 1;
   }

   return 0;
  }

  default:
  {

   return 0;
  }
 }
}
