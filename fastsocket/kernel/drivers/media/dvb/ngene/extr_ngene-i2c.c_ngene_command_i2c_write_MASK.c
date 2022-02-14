
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int Device; int Data; } ;
struct TYPE_6__ {scalar_t__ Length; int Opcode; } ;
struct TYPE_5__ {int* raw8; TYPE_1__ I2CRead; TYPE_3__ hdr; } ;
struct ngene_command {int out_len; TYPE_2__ cmd; scalar_t__ in_len; } ;
struct ngene {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int) ;
 scalar_t__ FUNC_1 (struct ngene*,struct ngene_command*) ;

__attribute__((used)) static int FUNC_2(struct ngene *VAR_2, u8 VAR_3,
       u8 *VAR_4, u8 VAR_5)
{
 struct ngene_command VAR_6;


 VAR_6.cmd.hdr.Opcode = VAR_0;
 VAR_6.cmd.hdr.Length = VAR_5 + 1;
 VAR_6.cmd.I2CRead.Device = VAR_3 << 1;
 FUNC_0(VAR_6.cmd.I2CRead.Data, VAR_4, VAR_5);
 VAR_6.in_len = VAR_5 + 1;
 VAR_6.out_len = 1;

 if (FUNC_1(VAR_2, &VAR_6) < 0)
  return -VAR_1;

 if (VAR_6.cmd.raw8[0] == 1)
  return -VAR_1;

 return 0;
}
