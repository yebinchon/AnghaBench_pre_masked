
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VC_CONTAINER_T ;
struct TYPE_4__ {int size; int value; } ;
typedef TYPE_1__ VC_CONTAINER_METADATA_T ;
typedef int VC_CONTAINER_METADATA_KEY_T ;


 int FUNC_0 (int *,char*,unsigned int) ;
 TYPE_1__* FUNC_1 (int *,int ,unsigned int) ;
 unsigned int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*,unsigned int) ;

__attribute__((used)) static VC_CONTAINER_METADATA_T *FUNC_4( VC_CONTAINER_T *VAR_0,
   VC_CONTAINER_METADATA_KEY_T VAR_1, const char *VAR_2 )
{
   VC_CONTAINER_METADATA_T *VAR_3;
   unsigned int VAR_4 = FUNC_2(VAR_2);

   if ((VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_4 + 1)) != ((void*)0))
   {
      unsigned int VAR_5 = VAR_3->size - 1;

      if (VAR_4 > VAR_5)
      {
         FUNC_0(VAR_0, "metadata value truncated (%d characters lost)", VAR_4 - VAR_5);
      }

      FUNC_3(VAR_3->value, VAR_2, VAR_5);
   }

   return VAR_3;
}
