
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {int offset; scalar_t__ sector; scalar_t__ cluster; } ;
struct TYPE_8__ {int bytesPerSector; scalar_t__ sectorsPerCluster; scalar_t__ dataStart; scalar_t__ rootDirStart; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ DIR_ENTRY_POSITION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static bool FUNC_3 (PARTITION* VAR_3, DIR_ENTRY_POSITION* VAR_4, bool VAR_5) {
 DIR_ENTRY_POSITION VAR_6 = *VAR_4;
 uint32_t VAR_7;


 ++ VAR_6.offset;
 if (VAR_6.offset == VAR_3->bytesPerSector / VAR_1) {
  VAR_6.offset = 0;

  ++ VAR_6.sector;

  if ((VAR_6.sector == VAR_3->sectorsPerCluster) && (VAR_6.cluster != VAR_2)) {
   VAR_6.sector = 0;

   VAR_7 = FUNC_2(VAR_3, VAR_6.cluster);
   if (VAR_7 == VAR_0) {
    if (VAR_5) {
     VAR_7 = FUNC_1 (VAR_3, VAR_6.cluster);
     if (!FUNC_0(VAR_3, VAR_7)) {
      return 0;
     }
    } else {
     return 0;
    }
   }
   VAR_6.cluster = VAR_7;
  } else if ((VAR_6.cluster == VAR_2) && (VAR_6.sector == (VAR_3->dataStart - VAR_3->rootDirStart))) {
   return 0;
  }
 }
 *VAR_4 = VAR_6;
 return 1;
}
