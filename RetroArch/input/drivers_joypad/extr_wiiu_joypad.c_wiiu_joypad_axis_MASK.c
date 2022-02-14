
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_2__ {int (* axis ) (unsigned int,int ) ;} ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int16_t FUNC_2(unsigned VAR_1, uint32_t VAR_2)
{
   if (!FUNC_1(VAR_1))
      return 0;

   return VAR_0[VAR_1]->axis(VAR_1, VAR_2);
}
