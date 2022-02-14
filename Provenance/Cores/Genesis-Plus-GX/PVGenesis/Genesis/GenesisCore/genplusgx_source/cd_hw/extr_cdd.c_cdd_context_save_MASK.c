
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_2__ {int status; int volume; int scanOffset; int lba; int index; int latency; int cycles; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int) ;

int FUNC_1(uint8 *VAR_1)
{
  int VAR_2 = 0;

  FUNC_0(&VAR_0.cycles, sizeof(VAR_0.cycles));
  FUNC_0(&VAR_0.latency, sizeof(VAR_0.latency));
  FUNC_0(&VAR_0.index, sizeof(VAR_0.index));
  FUNC_0(&VAR_0.lba, sizeof(VAR_0.lba));
  FUNC_0(&VAR_0.scanOffset, sizeof(VAR_0.scanOffset));
  FUNC_0(&VAR_0.volume, sizeof(VAR_0.volume));
  FUNC_0(&VAR_0.status, sizeof(VAR_0.status));

  return VAR_2;
}
