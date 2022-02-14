
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {TYPE_2__* priv; TYPE_1__* format; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_BITS_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_12__ {char* name; char* value; } ;
struct TYPE_10__ {int * extradata; } ;
struct TYPE_9__ {int extradata_size; } ;
typedef TYPE_4__ PARAMETER_T ;


 int FUNC_0 (int *,int *,int *,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char const*,size_t) ;
 int * FUNC_5 (char const*,size_t,int *,int) ;
 char* FUNC_6 (char const*,char) ;
 size_t FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int *,TYPE_3__*,int) ;
 int FUNC_9 (int const*,TYPE_4__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_10(VC_CONTAINER_T *VAR_2,
      VC_CONTAINER_TRACK_T *VAR_3,
      const VC_CONTAINERS_LIST_T *VAR_4)
{
   VC_CONTAINER_STATUS_T VAR_5;
   PARAMETER_T VAR_6;
   size_t VAR_7;
   uint32_t VAR_8 = 0;
   uint8_t *VAR_9;
   const char *VAR_10;
   const char *VAR_11;





   VAR_6.name = "sprop-parameter-sets";
   if (!FUNC_9(VAR_4, &VAR_6) || !VAR_6.value)
   {
      FUNC_1(VAR_2, "H.264: sprop-parameter-sets is required, but not found");
      return VAR_0;
   }


   VAR_10 = VAR_6.value;
   do {
      VAR_11 = FUNC_6(VAR_10, ',');
      VAR_7 = VAR_11 ? (size_t)(VAR_11 - VAR_10) : FUNC_7(VAR_10);

      VAR_8 += FUNC_4(VAR_10, VAR_7) + 4;
      VAR_10 = VAR_11 + 1;
   } while (VAR_11);

   if (!VAR_8)
   {
      FUNC_1(VAR_2, "H.264: sprop-parameter-sets doesn't contain useful data");
      return VAR_0;
   }

   VAR_5 = FUNC_8(VAR_2, VAR_3, VAR_8);
   if(VAR_5 != VAR_1) return VAR_5;

   VAR_3->format->extradata_size = VAR_8;
   VAR_9 = VAR_3->priv->extradata;


   VAR_10 = VAR_6.value;
   do {
      uint8_t *VAR_12;
      uint32_t VAR_13;
      VC_CONTAINER_BITS_T VAR_14;

      VAR_11 = FUNC_6(VAR_10, ',');
      VAR_7 = VAR_11 ? (size_t)(VAR_11 - VAR_10) : FUNC_7(VAR_10);


      *VAR_9++ = 0x00; *VAR_9++ = 0x00; *VAR_9++ = 0x00; *VAR_9++ = 0x01;
      VAR_8 -= 4;

      VAR_12 = FUNC_5(VAR_10, VAR_7, VAR_9, VAR_8);
      if (!VAR_12)
      {
         FUNC_1(VAR_2, "H.264: sprop-parameter-sets failed to decode");
         return VAR_0;
      }

      VAR_13 = VAR_12 - VAR_9;
      if (VAR_13)
      {
         uint32_t VAR_15;


         VAR_15 = FUNC_3(VAR_9, VAR_13);

         FUNC_0(VAR_2, &VAR_14, VAR_9, VAR_15);
         VAR_5 = FUNC_2(VAR_2, VAR_3, &VAR_14);
         if(VAR_5 != VAR_1) return VAR_5;


         if (VAR_15 != VAR_13)
            FUNC_5(VAR_10, VAR_7, VAR_9, VAR_13);

         VAR_8 -= VAR_13;
         VAR_9 = VAR_12;
      }

      VAR_10 = VAR_11 + 1;
   } while (VAR_11);

   return VAR_1;
}
