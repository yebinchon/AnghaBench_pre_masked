
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct rmsgpack_read_callbacks {int (* read_map_start ) (unsigned int,void*) ;} ;
typedef int RFILE ;


 int FUNC_0 (int *,struct rmsgpack_read_callbacks*,void*) ;
 int FUNC_1 (unsigned int,void*) ;

__attribute__((used)) static int FUNC_2(RFILE *VAR_0, uint32_t VAR_1,
        struct rmsgpack_read_callbacks *VAR_2, void *VAR_3)
{
   int VAR_4;
   unsigned VAR_5;

   if (VAR_2->read_map_start &&
         (VAR_4 = VAR_2->read_map_start(VAR_1, VAR_3)) < 0)
      return VAR_4;

   for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   {
      if ((VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3)) < 0)
         return VAR_4;
      if ((VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3)) < 0)
         return VAR_4;
   }

   return 0;
}
