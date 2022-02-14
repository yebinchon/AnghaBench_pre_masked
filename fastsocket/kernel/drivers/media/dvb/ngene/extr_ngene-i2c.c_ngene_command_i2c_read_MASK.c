
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int Device; int* Data; } ;
struct TYPE_4__ {int Length; int Opcode; } ;
struct TYPE_6__ {int* raw8; TYPE_2__ I2CRead; TYPE_1__ hdr; } ;
struct ngene_command {int in_len; int out_len; TYPE_3__ cmd; } ;
struct ngene {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int) ;
 scalar_t__ FUNC_1 (struct ngene*,struct ngene_command*) ;

__attribute__((used)) static int FUNC_2(struct ngene *VAR_2, u8 VAR_3,
      u8 *VAR_4, u8 VAR_5, u8 *VAR_6, u8 VAR_7, int VAR_8)
{
 struct ngene_command VAR_9;

 VAR_9.cmd.hdr.Opcode = VAR_0;
 VAR_9.cmd.hdr.Length = VAR_5 + 3;
 VAR_9.cmd.I2CRead.Device = VAR_3 << 1;
 FUNC_0(VAR_9.cmd.I2CRead.Data, VAR_4, VAR_5);
 VAR_9.cmd.I2CRead.Data[VAR_5] = VAR_7;
 VAR_9.cmd.I2CRead.Data[VAR_5 + 1] = 0;
 VAR_9.in_len = VAR_5 + 3;
 VAR_9.out_len = VAR_7 + 1;

 if (FUNC_1(VAR_2, &VAR_9) < 0)
  return -VAR_1;

 if ((VAR_9.cmd.raw8[0] >> 1) != VAR_3)
  return -VAR_1;

 if (VAR_8)
  FUNC_0(VAR_6, VAR_9.cmd.raw8, VAR_7 + 1);
 else
  FUNC_0(VAR_6, VAR_9.cmd.raw8 + 1, VAR_7);
 return 0;
}
