
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef int uint16 ;
struct TYPE_4__ {scalar_t__ word_ram2M; } ;
struct TYPE_3__ {scalar_t__ y_step; int * mapPtr; int * tracePtr; scalar_t__ bufferStart; scalar_t__ bufferOffset; scalar_t__ mapShift; scalar_t__ stampShift; scalar_t__ dotMask; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__*,int) ;

int FUNC_1(const uint8 *VAR_2)
{
  uint32 VAR_3;
  int VAR_4 = 0;



  FUNC_0(&VAR_1.dotMask, sizeof(VAR_1.dotMask));
  FUNC_0(&VAR_1.stampShift, sizeof(VAR_1.stampShift));
  FUNC_0(&VAR_1.mapShift, sizeof(VAR_1.mapShift));
  FUNC_0(&VAR_1.bufferOffset, sizeof(VAR_1.bufferOffset));
  FUNC_0(&VAR_1.bufferStart, sizeof(VAR_1.bufferStart));

  FUNC_0(&VAR_3, 4);
  VAR_1.tracePtr = (uint16 *)(VAR_0->word_ram2M + VAR_3);

  FUNC_0(&VAR_3, 4);
  VAR_1.mapPtr = (uint16 *)(VAR_0->word_ram2M + VAR_3);

  FUNC_0(&VAR_1.y_step, sizeof(VAR_1.y_step));

  return VAR_4;
}
