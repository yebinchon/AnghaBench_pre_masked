
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int offset; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;


 int FUNC_0 (TYPE_1__*,int*) ;

__attribute__((used)) static int64_t FUNC_1(VC_CONTAINER_IO_T *VAR_0, int64_t *VAR_1)
{
   int64_t VAR_2, VAR_3 = VAR_0->offset;
   VAR_2 = FUNC_0(VAR_0, VAR_1);
   VAR_3 = VAR_0->offset - VAR_3;

   switch(VAR_3)
   {
   case 1: VAR_2 -= 0x3F; break;
   case 2: VAR_2 -= 0x1FFF; break;
   case 3: VAR_2 -= 0xFFFFF; break;
   case 4: VAR_2 -= 0x7FFFFFF; break;
   default: break;
   }
   return VAR_2;
}
