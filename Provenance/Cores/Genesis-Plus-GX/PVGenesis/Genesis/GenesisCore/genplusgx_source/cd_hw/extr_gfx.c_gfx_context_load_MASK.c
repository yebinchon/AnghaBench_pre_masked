
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef int uint16 ;
struct TYPE_4__ {int * mapPtr; int * tracePtr; scalar_t__ bufferStart; scalar_t__ bufferOffset; scalar_t__ mapShift; scalar_t__ stampShift; scalar_t__ dotMask; scalar_t__ cyclesPerLine; scalar_t__ cycles; } ;
struct TYPE_3__ {scalar_t__ word_ram_2M; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (scalar_t__*,int) ;
 TYPE_1__ VAR_1 ;

int FUNC_1(uint8 *VAR_2)
{
  uint32 VAR_3;
  int VAR_4 = 0;

  FUNC_0(&VAR_0.cycles, sizeof(VAR_0.cycles));
  FUNC_0(&VAR_0.cyclesPerLine, sizeof(VAR_0.cyclesPerLine));
  FUNC_0(&VAR_0.dotMask, sizeof(VAR_0.dotMask));
  FUNC_0(&VAR_0.stampShift, sizeof(VAR_0.stampShift));
  FUNC_0(&VAR_0.mapShift, sizeof(VAR_0.mapShift));
  FUNC_0(&VAR_0.bufferOffset, sizeof(VAR_0.bufferOffset));
  FUNC_0(&VAR_0.bufferStart, sizeof(VAR_0.bufferStart));

  FUNC_0(&VAR_3, 4);
  VAR_0.tracePtr = (uint16 *)(VAR_1.word_ram_2M + VAR_3);

  FUNC_0(&VAR_3, 4);
  VAR_0.mapPtr = (uint16 *)(VAR_1.word_ram_2M + VAR_3);

  return VAR_4;
}
