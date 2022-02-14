
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
struct TYPE_4__ {scalar_t__ lastCluster; scalar_t__ fatStart; } ;
struct TYPE_5__ {int filesysType; scalar_t__ bytesPerSector; int cache; TYPE_1__ fat; } ;
typedef TYPE_2__ PARTITION ;


 scalar_t__ VAR_0 ;




 int FUNC_0 (int ,scalar_t__*,scalar_t__,int,int) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static bool FUNC_2 (PARTITION* VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 sec_t VAR_4;
 int VAR_5;
 uint32_t VAR_6;

 if ((VAR_2 < VAR_0) || (VAR_2 > VAR_1->fat.lastCluster ))
 {
  return 0;
 }

 switch (VAR_1->filesysType)
 {
  case 128:
   return 0;
   break;

  case 131:
   VAR_4 = VAR_1->fat.fatStart + (((VAR_2 * 3) / 2) / VAR_1->bytesPerSector);
   VAR_5 = ((VAR_2 * 3) / 2) % VAR_1->bytesPerSector;

   if (VAR_2 & 0x01)
         {

            FUNC_0 (VAR_1->cache, &VAR_6, VAR_4, VAR_5, sizeof(u8));

            VAR_3 = (VAR_3 << 4) | (VAR_6 & 0x0F);

            FUNC_1 (VAR_1->cache, VAR_3 & 0xFF, VAR_4, VAR_5, sizeof(u8));

            VAR_5++;
            if (VAR_5 >= VAR_1->bytesPerSector)
            {
               VAR_5 = 0;
               VAR_4++;
            }

            FUNC_1 (VAR_1->cache, (VAR_3 >> 8) & 0xFF, VAR_4, VAR_5, sizeof(u8));

         } else {

    FUNC_1 (VAR_1->cache, VAR_3, VAR_4, VAR_5, sizeof(u8));

    VAR_5++;
    if (VAR_5 >= VAR_1->bytesPerSector)
            {
     VAR_5 = 0;
     VAR_4++;
    }

    FUNC_0 (VAR_1->cache, &VAR_6, VAR_4, VAR_5, sizeof(u8));

    VAR_3 = ((VAR_3 >> 8) & 0x0F) | (VAR_6 & 0xF0);

    FUNC_1 (VAR_1->cache, VAR_3, VAR_4, VAR_5, sizeof(u8));
   }

   break;

  case 130:
   VAR_4 = VAR_1->fat.fatStart + ((VAR_2 << 1) / VAR_1->bytesPerSector);
   VAR_5 = (VAR_2 % (VAR_1->bytesPerSector >> 1)) << 1;

   FUNC_1 (VAR_1->cache, VAR_3, VAR_4, VAR_5, sizeof(u16));

   break;

  case 129:
   VAR_4 = VAR_1->fat.fatStart + ((VAR_2 << 2) / VAR_1->bytesPerSector);
   VAR_5 = (VAR_2 % (VAR_1->bytesPerSector >> 2)) << 2;

   FUNC_1 (VAR_1->cache, VAR_3, VAR_4, VAR_5, sizeof(u32));

   break;

  default:
   return 0;
   break;
 }

 return 1;
}
