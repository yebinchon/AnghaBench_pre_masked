
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
 int FUNC_1 (int *,int ,unsigned int,char*) ;
 int FUNC_2 (int *,int ,unsigned int,char*) ;
 int FUNC_3 (int *,unsigned int) ;
 TYPE_1__* FUNC_4 (int *,int ,unsigned int) ;

__attribute__((used)) static VC_CONTAINER_METADATA_T *FUNC_5( VC_CONTAINER_T *VAR_0,
   VC_CONTAINER_METADATA_KEY_T VAR_1, unsigned int VAR_2, const char *VAR_3 )
{
   VC_CONTAINER_METADATA_T *VAR_4;

   if ((VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_3 ? VAR_2 + 2 : VAR_2 + 1)) != ((void*)0))
   {
      unsigned int VAR_5;

      if (VAR_3)
      {
         VAR_5 = VAR_4->size - 2;
         FUNC_2(VAR_0, VAR_4->value, VAR_5, "ID3v2 data");
      }
      else
      {
         VAR_5 = VAR_4->size - 1;
         FUNC_1(VAR_0, VAR_4->value, VAR_5, "ID3v2 data");
      }

      if (VAR_2 > VAR_5)
      {
         FUNC_0(VAR_0, "metadata value truncated (%d characters lost)", VAR_2 - VAR_5);
         FUNC_3(VAR_0, VAR_2 - VAR_5);
      }
   }

   return VAR_4;
}
