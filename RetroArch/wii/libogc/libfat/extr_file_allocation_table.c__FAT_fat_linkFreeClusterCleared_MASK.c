
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ sectorsPerCluster; int cache; int bytesPerSector; } ;
typedef TYPE_1__ PARTITION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;

uint32_t FUNC_6 (PARTITION* VAR_2, uint32_t VAR_3) {
 uint32_t VAR_4;
 uint32_t VAR_5;
 uint8_t *VAR_6;


 VAR_4 = FUNC_2(VAR_2, VAR_3);

 if (VAR_4 == VAR_1 || VAR_4 == VAR_0) {
  return VAR_0;
 }

 VAR_6 = (uint8_t*) FUNC_3(VAR_2->bytesPerSector);


 FUNC_5 (VAR_6, 0, VAR_2->bytesPerSector);
 for (VAR_5 = 0; VAR_5 < VAR_2->sectorsPerCluster; VAR_5++) {
  FUNC_0 (VAR_2->cache,
   FUNC_1 (VAR_2, VAR_4) + VAR_5,
   1, VAR_6);
 }

 FUNC_4(VAR_6);

 return VAR_4;
}
