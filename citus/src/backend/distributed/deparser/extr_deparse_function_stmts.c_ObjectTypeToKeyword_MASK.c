
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ObjectType ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(ObjectType VAR_1)
{
 switch (VAR_1)
 {
  case 129:
  {
   return "FUNCTION";
  }

  case 128:
  {
   return "PROCEDURE";
  }

  case 130:
  {
   return "AGGREGATE";
  }

  default:
   FUNC_0(VAR_0, "Unknown object type: %d", VAR_1);
   return ((void*)0);
 }
}
