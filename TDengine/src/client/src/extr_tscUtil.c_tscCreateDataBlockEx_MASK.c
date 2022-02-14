
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* int32_t ;
struct TYPE_4__ {int tsSource; int meterId; void* size; void* rowSize; } ;
typedef TYPE_1__ STableDataBlocks ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 TYPE_1__* FUNC_1 (size_t) ;

STableDataBlocks* FUNC_2(size_t VAR_1, int32_t VAR_2, int32_t VAR_3, char* VAR_4) {
  STableDataBlocks* VAR_5 = FUNC_1(VAR_1);

  VAR_5->rowSize = VAR_2;
  VAR_5->size = VAR_3;
  VAR_5->tsSource = -1;

  FUNC_0(VAR_5->meterId, VAR_4, VAR_0);
  return VAR_5;
}
