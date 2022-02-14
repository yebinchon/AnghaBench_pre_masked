
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ type; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (unsigned int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_4(unsigned VAR_2, uint8_t VAR_3)
{
   if (VAR_1[VAR_2].type != VAR_3)
   {
      int VAR_4;

      FUNC_3(VAR_2);
      VAR_4 = FUNC_1(VAR_2);

      if(VAR_4 < 0)
      {
         FUNC_0("Couldn't get a slot for this remote.\n");
         return;
      }

      VAR_1[VAR_2].type = VAR_3;
      FUNC_2(VAR_4, &VAR_0);
   }
}
