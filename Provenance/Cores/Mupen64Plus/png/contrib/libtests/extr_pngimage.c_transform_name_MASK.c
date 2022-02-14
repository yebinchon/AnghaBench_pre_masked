
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; int transform; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_2)



{
   unsigned int VAR_3;

   VAR_2 &= -VAR_2;

   for (VAR_3=0; VAR_3<VAR_0; ++VAR_3) if (VAR_1[VAR_3].name != ((void*)0))
   {
      if ((VAR_1[VAR_3].transform & VAR_2) != 0)
         return VAR_1[VAR_3].name;
   }

   return "invalid transform";
}
