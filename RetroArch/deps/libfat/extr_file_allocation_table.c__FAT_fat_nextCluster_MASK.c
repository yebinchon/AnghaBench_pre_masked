
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef scalar_t__ sec_t ;
struct TYPE_4__ {scalar_t__ fatStart; } ;
struct TYPE_5__ {int filesysType; scalar_t__ bytesPerSector; int cache; TYPE_1__ fat; } ;
typedef TYPE_2__ PARTITION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 int FUNC_0 (int ,...) ;

uint32_t FUNC_1(PARTITION* VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5 = VAR_2;
 sec_t VAR_6;
 int VAR_7;

 if (VAR_4 == VAR_2)
  return VAR_2;

 switch (VAR_3->filesysType)
 {
  case 128:
   return VAR_1;
   break;

  case 131:
  {
   u32 VAR_8;
   VAR_6 = VAR_3->fat.fatStart + (((VAR_4 * 3) / 2) / VAR_3->bytesPerSector);
   VAR_7 = ((VAR_4 * 3) / 2) % VAR_3->bytesPerSector;


   FUNC_0 (VAR_3->cache, &VAR_5, VAR_6, VAR_7, sizeof(u8));

   VAR_7++;

   if (VAR_7 >= VAR_3->bytesPerSector)
         {
    VAR_7 = 0;
    VAR_6++;
   }
   VAR_8 = 0;

   FUNC_0 (VAR_3->cache, &VAR_8, VAR_6, VAR_7, sizeof(u8));
   VAR_5 |= (VAR_8 << 8);

   if (VAR_4 & 0x01)
    VAR_5 = VAR_5 >> 4;
         else
    VAR_5 &= 0x0FFF;

   if (VAR_5 >= 0x0FF7)
    VAR_5 = VAR_0;

   break;
  }
  case 130:
   VAR_6 = VAR_3->fat.fatStart + ((VAR_4 << 1) / VAR_3->bytesPerSector);
   VAR_7 = (VAR_4 % (VAR_3->bytesPerSector >> 1)) << 1;

   FUNC_0 (VAR_3->cache, &VAR_5, VAR_6, VAR_7, sizeof(u16));

   if (VAR_5 >= 0xFFF7)
    VAR_5 = VAR_0;
   break;

  case 129:
   VAR_6 = VAR_3->fat.fatStart + ((VAR_4 << 2) / VAR_3->bytesPerSector);
   VAR_7 = (VAR_4 % (VAR_3->bytesPerSector >> 2)) << 2;

   FUNC_0 (VAR_3->cache, &VAR_5, VAR_6, VAR_7, sizeof(u32));

   if (VAR_5 >= 0x0FFFFFF7)
    VAR_5 = VAR_0;
   break;

  default:
   return VAR_1;
   break;
 }

 return VAR_5;
}
