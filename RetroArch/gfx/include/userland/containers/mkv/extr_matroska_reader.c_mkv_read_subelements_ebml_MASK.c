
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int64_t ;
typedef int doctype ;
struct TYPE_10__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_11__ {int is_doctype_valid; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_9__ {TYPE_3__* module; } ;
typedef int MKV_ELEMENT_ID_T ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int VAR_0 ;






 scalar_t__ FUNC_1 (TYPE_2__*,char*,int,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int,int*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5( VC_CONTAINER_T *VAR_3, MKV_ELEMENT_ID_T VAR_4, int64_t VAR_5 )
{
   VC_CONTAINER_STATUS_T VAR_6 = VAR_2;
   VC_CONTAINER_MODULE_T *VAR_7 = VAR_3->priv->module;
   uint64_t VAR_8;


   if(VAR_4 == VAR_0)
   {
      char VAR_9[] = "matroska doctype";


      if(VAR_5 <= 0) goto unknown_doctype;
      if(VAR_5 > (int)sizeof(VAR_9)) goto unknown_doctype;
      if((int)FUNC_1(VAR_3, VAR_9, VAR_5, "string") != VAR_5) return FUNC_2(VAR_3);
      if((VAR_5 != sizeof("matroska")-1 || FUNC_4(VAR_9, "matroska", (int)VAR_5)) &&
         (VAR_5 != sizeof("webm")-1 || FUNC_4(VAR_9, "webm", (int)VAR_5)))
         goto unknown_doctype;

      VAR_7->is_doctype_valid = 1;
      return VAR_2;

 unknown_doctype:
      FUNC_0(VAR_3, "invalid doctype");
      return VAR_1;
   }


   VAR_6 = FUNC_3(VAR_3, VAR_5, &VAR_8);
   if(VAR_6 != VAR_2) return VAR_6;

   switch(VAR_4)
   {
   case 128:
   case 129:
      if(VAR_8 != 1) return VAR_1;
      break;
   case 131:
      if(VAR_8 > 4) return VAR_1;
      break;
   case 130:
      if(VAR_8 > 8) return VAR_1;
      break;
   case 132:
   case 133:
   default: break;
   }

   return FUNC_2(VAR_3);
}
