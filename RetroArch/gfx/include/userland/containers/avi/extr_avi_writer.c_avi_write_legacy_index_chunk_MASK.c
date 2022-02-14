
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_19__ {TYPE_1__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_18__ {int io; } ;
struct TYPE_17__ {scalar_t__ refcount; } ;
struct TYPE_20__ {TYPE_3__ temp_io; int index_offset; TYPE_2__ null_io; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_16__ {TYPE_5__* module; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char,char,char,char) ;
 int FUNC_5 (TYPE_4__*,int *,int) ;
 int FUNC_6 (TYPE_4__*,int ,char*) ;
 int FUNC_7 (TYPE_4__*,int,char*) ;
 int FUNC_8 (TYPE_4__*,int *,unsigned int) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,unsigned int*,int*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_13( VC_CONTAINER_T *VAR_5, uint32_t VAR_6 )
{
   VC_CONTAINER_MODULE_T *VAR_7 = VAR_5->priv->module;
   VC_CONTAINER_STATUS_T VAR_8;
   uint32_t VAR_9 = 4;
   unsigned int VAR_10;

   FUNC_11(8 + FUNC_9(VAR_5) * FUNC_1(16) <= (int64_t)VAR_3);

   if(VAR_7->null_io.refcount)
   {


      FUNC_5(VAR_5, ((void*)0), 8 + FUNC_9(VAR_5) * (int64_t)VAR_2);
      return FUNC_3(VAR_5);
   }

   VAR_7->index_offset = FUNC_2(VAR_5);

   FUNC_6(VAR_5, FUNC_4('i','d','x','1'), "Chunk ID");
   FUNC_7(VAR_5, VAR_6, "Chunk Size");


   FUNC_12(VAR_7->temp_io.io, FUNC_1(0));

   while((VAR_8 = FUNC_3(VAR_5)) == VAR_4)
   {
      VC_CONTAINER_FOURCC_T VAR_11;
      uint32_t VAR_12, VAR_13;

      VAR_8 = FUNC_10(VAR_5, &VAR_10, &VAR_12);
      if (VAR_8 != VAR_4) break;

      FUNC_8(VAR_5, &VAR_11, VAR_10);
      VAR_13 = (VAR_12 & VAR_1) ? 0 : VAR_0;
      VAR_12 &= ~VAR_1;

      FUNC_6(VAR_5, VAR_11, "Chunk ID");
      FUNC_7(VAR_5, VAR_13, "dwFlags");
      FUNC_7(VAR_5, VAR_9, "dwOffset");
      FUNC_7(VAR_5, VAR_12, "dwSize");

      VAR_9 += ((VAR_12 + 1) & ~1) + 8;
   }

   FUNC_0(VAR_5);




   return FUNC_3(VAR_5);
}
