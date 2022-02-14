
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_6__ {TYPE_1__* io; } ;
struct TYPE_5__ {char* uri; } ;




 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (char const*,char*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_2,
   VC_CONTAINER_FOURCC_T *VAR_3, unsigned int *VAR_4, unsigned int *VAR_5,
   unsigned int *VAR_6, unsigned int *VAR_7, unsigned *VAR_8 )
{
   VC_CONTAINER_FOURCC_T VAR_9 = 0;
   unsigned int VAR_10, VAR_11, VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
   const char *VAR_17 = VAR_2->priv->io->uri;


   for (VAR_10 = 0; VAR_17[VAR_10]; VAR_10++)
   {
      if (VAR_17[VAR_10] != '_' && VAR_17[VAR_10+1] != 'C')
         continue;

      VAR_11 = FUNC_0(VAR_17+VAR_10, "_C%4cW%iH%iF%i#%iS%i", (char *)&VAR_9,
         &VAR_12, &VAR_13, &VAR_14, &VAR_15, &VAR_16);
      if (VAR_11 >= 3)
         break;
   }
   if (!VAR_17[VAR_10])
      return VAR_0;

   if (!VAR_16)
   {
      switch (VAR_9)
      {
      case 129:
      case 128:
         VAR_16 = VAR_12 * VAR_13 * 3 / 2;
         break;
      default: break;
      }
   }

   if (!VAR_12 || !VAR_13 || !VAR_16)
      return VAR_0;

   if (VAR_8) *VAR_8 = VAR_16;
   if (VAR_3) *VAR_3 = VAR_9;
   if (VAR_4) *VAR_4 = VAR_12;
   if (VAR_5) *VAR_5 = VAR_13;
   if (VAR_6) *VAR_6 = VAR_14;
   if (VAR_7) *VAR_7 = VAR_15;
   if (VAR_8) *VAR_8 = VAR_16;

   return VAR_1;
}
