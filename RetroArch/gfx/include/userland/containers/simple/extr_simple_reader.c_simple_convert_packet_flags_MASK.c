
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {TYPE_3__** tracks; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* module; } ;
struct TYPE_6__ {int variant; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static uint32_t FUNC_0(VC_CONTAINER_T *VAR_6,
   unsigned int VAR_7, uint32_t VAR_8)
{
   typedef struct { uint32_t from; uint32_t to; } convert_from_t;
   const convert_from_t VAR_9[] =
   { {1<<1, VAR_4},
     {1<<2, VAR_3},
     {1<<3, VAR_5},
     {1<<4, VAR_1},
     {1<<5, VAR_0},
     {1<<6, VAR_2},
     {0, 0} };
   const convert_from_t VAR_10[] =
   { {0x10, VAR_3},
     {0x20, VAR_5},
     {0x80, VAR_0},
     {0, 0} };
   const convert_from_t *VAR_11 = ((void*)0);
   int VAR_12;

   switch (VAR_6->tracks[VAR_7]->priv->module->variant)
   {
      case 129: VAR_11 = VAR_9; break;
      case 128: VAR_11 = VAR_10; break;
      default: break;
   }

   if (VAR_11)
   {
      uint32_t VAR_13 = 0;
      for (VAR_12 = 0; VAR_11[VAR_12].from; VAR_12++)
         if (VAR_11[VAR_12].from & VAR_8)
            VAR_13 |= VAR_11[VAR_12].to;
      return VAR_13;
   }

   return VAR_8;
}
