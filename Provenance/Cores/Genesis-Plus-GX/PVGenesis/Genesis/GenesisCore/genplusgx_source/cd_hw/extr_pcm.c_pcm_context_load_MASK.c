
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_2__ {int* chan; int* out; int* bank; int* ram; int enabled; int status; int index; } ;


 int FUNC_0 (int*,int) ;
 TYPE_1__ VAR_0 ;

int FUNC_1(uint8 *VAR_1)
{
  uint8 VAR_2;
  int VAR_3 = 0;

  FUNC_0(VAR_0.chan, sizeof(VAR_0.chan));
  FUNC_0(VAR_0.out, sizeof(VAR_0.out));

  FUNC_0(&VAR_2, 1);
  VAR_0.bank = &VAR_0.ram[(VAR_2 & 0x0f) << 12];

  FUNC_0(&VAR_0.enabled, sizeof(VAR_0.enabled));
  FUNC_0(&VAR_0.status, sizeof(VAR_0.status));
  FUNC_0(&VAR_0.index, sizeof(VAR_0.index));
  FUNC_0(VAR_0.ram, sizeof(VAR_0.ram));

  return VAR_3;
}
