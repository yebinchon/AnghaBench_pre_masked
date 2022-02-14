
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ filesysType; int bytesPerSector; scalar_t__ readOnly; } ;
typedef TYPE_1__ PARTITION ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*,int*) ;
 int FUNC_3 (int*,int ,int ) ;

void FUNC_4(PARTITION * VAR_7)
{
 if(VAR_7->readOnly || VAR_7->filesysType != VAR_4)
  return;

 uint8_t *VAR_8 = (uint8_t*) FUNC_0(VAR_7->bytesPerSector);
 if (!VAR_8) return;
 FUNC_3(VAR_8, 0, VAR_7->bytesPerSector);

 int VAR_9;
 for(VAR_9 = 0; VAR_9 < 4; ++VAR_9)
 {
  VAR_8[VAR_0+VAR_9] = VAR_5[VAR_9];
  VAR_8[VAR_1+VAR_9] = VAR_6[VAR_9];
 }

 VAR_8[VAR_2] = 0x55;
 VAR_8[VAR_3] = 0xAA;

 FUNC_2(VAR_7,VAR_8);

 FUNC_1(VAR_8);
}
