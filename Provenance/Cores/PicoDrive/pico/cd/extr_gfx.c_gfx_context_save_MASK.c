
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int * uint32 ;
struct TYPE_4__ {int word_ram2M; } ;
struct TYPE_3__ {int * y_step; scalar_t__ mapPtr; scalar_t__ tracePtr; int * bufferStart; int * bufferOffset; int * mapShift; int * stampShift; int * dotMask; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int **,int) ;

int FUNC_1(uint8 *VAR_2)
{
  uint32 VAR_3;
  int VAR_4 = 0;



  FUNC_0(&VAR_1.dotMask, sizeof(VAR_1.dotMask));
  FUNC_0(&VAR_1.stampShift, sizeof(VAR_1.stampShift));
  FUNC_0(&VAR_1.mapShift, sizeof(VAR_1.mapShift));
  FUNC_0(&VAR_1.bufferOffset, sizeof(VAR_1.bufferOffset));
  FUNC_0(&VAR_1.bufferStart, sizeof(VAR_1.bufferStart));

  VAR_3 = (uint8 *)(VAR_1.tracePtr) - VAR_0->word_ram2M;
  FUNC_0(&VAR_3, 4);

  VAR_3 = (uint8 *)(VAR_1.mapPtr) - VAR_0->word_ram2M;
  FUNC_0(&VAR_3, 4);

  FUNC_0(&VAR_1.y_step, sizeof(VAR_1.y_step));

  return VAR_4;
}
