
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_11__ {int type; scalar_t__ magic; int headerSize; scalar_t__ majorVersion; int dataSize; } ;
struct TYPE_16__ {TYPE_1__ header; scalar_t__ data; } ;
struct TYPE_15__ {TYPE_3__* ps; TYPE_2__* vs; scalar_t__ data; } ;
struct TYPE_14__ {scalar_t__ magic; int headerSize; scalar_t__ majorVersion; scalar_t__ gpuVersion; int align; } ;
struct TYPE_13__ {scalar_t__ program; } ;
struct TYPE_12__ {scalar_t__ program; } ;
typedef TYPE_2__ GX2VertexShader ;
typedef TYPE_3__ GX2PixelShader ;
typedef TYPE_4__ GFDFileHeader ;
typedef TYPE_5__ GFDFile ;
typedef int GFDBlockHeader ;
typedef TYPE_6__ GFDBlock ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;




 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__* FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (scalar_t__,int,int,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (char*,...) ;

GFDFile *FUNC_11(const char *VAR_10)
{
   GFDFile* VAR_11 = FUNC_2(1, sizeof(*VAR_11));
   FILE *VAR_12 = FUNC_4(VAR_10, "rb");

   if (!VAR_12)
      goto error;

   FUNC_6(VAR_12, 0, VAR_8);
   int VAR_13 = FUNC_7(VAR_12);
   FUNC_6(VAR_12, 0, VAR_9);
   VAR_11->data = FUNC_1(VAR_13, VAR_7);
   FUNC_5(VAR_11->data, 1, VAR_13, VAR_12);
   FUNC_3(VAR_12);

   GFDFileHeader *VAR_14 = (GFDFileHeader *)VAR_11->data;

   if (VAR_14->magic != VAR_4)
   {
      FUNC_10("wrong file magic number.\n");
      goto error;
   }

   if (VAR_14->headerSize != sizeof(GFDFileHeader))
   {
      FUNC_10("wrong file header size.\n");
      goto error;
   }

   if (VAR_14->majorVersion != VAR_5)
   {
      FUNC_10("file version not supported.\n");
      goto error;
   }

   if (VAR_14->gpuVersion != VAR_3)
   {
      FUNC_10("gpu version not supported.\n");
      goto error;
   }

   if (!VAR_14->align)
   {
      FUNC_10("data is not aligned.\n");
      goto error;
   }

   GFDBlock *VAR_15 = (GFDBlock *)(VAR_11->data + VAR_14->headerSize);

   while (VAR_15->header.type != VAR_2)
   {
      if (VAR_15->header.magic != VAR_0)
      {
         FUNC_10("wrong block magic number.\n");
         goto error;
      }

      if (VAR_15->header.headerSize != sizeof(GFDBlockHeader))
      {
         FUNC_10("wrong block header size.\n");
         goto error;
      }

      if (VAR_15->header.majorVersion != VAR_1)
      {
         FUNC_10("block version not supported.\n");
         goto error;
      }

      switch (VAR_15->header.type)
      {
      case 129:
         if (VAR_11->vs)
            continue;

         VAR_11->vs = (GX2VertexShader*)VAR_15->data;
         if(!FUNC_9(VAR_15))
            goto error;

         break;

      case 128:
         if(VAR_11->vs->program)
            continue;

         FUNC_0(VAR_6, VAR_15->data, VAR_15->header.dataSize);
         VAR_11->vs->program = VAR_15->data;
         break;

      case 131:
         if (VAR_11->ps)
            continue;

         VAR_11->ps = (GX2PixelShader*)VAR_15->data;
         if(!FUNC_9(VAR_15))
            goto error;

         break;

      case 130:
         if(VAR_11->ps->program)
            continue;

         FUNC_0(VAR_6, VAR_15->data, VAR_15->header.dataSize);
         VAR_11->ps->program = VAR_15->data;
         break;

      default:
         break;
      }

      VAR_15 = (GFDBlock *)((u8 *)VAR_15 + VAR_15->header.headerSize + VAR_15->header.dataSize);
   }

   if(!VAR_11->vs)
   {
      FUNC_10("vertex shader is missing.\n");
      goto error;
   }

   if(!VAR_11->vs->program)
   {
      FUNC_10("vertex shader program is missing.\n");
      goto error;
   }

   if(!VAR_11->ps)
   {
      FUNC_10("pixel shader is missing.\n");
      goto error;
   }

   if(!VAR_11->ps->program)
   {
      FUNC_10("pixel shader program is missing.\n");
      goto error;
   }

   return VAR_11;

error:
   FUNC_10("failed to open file : %s\n", VAR_10);
   FUNC_8(VAR_11);

   return ((void*)0);
}
