
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct mv64xxx_i2c_data {int action; int cntl_bits; int addr1; int addr2; int waitq; int block; scalar_t__ reg_base; int rc; TYPE_2__ adapter; int byte_posn; TYPE_1__* msg; } ;
struct TYPE_3__ {int* buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct mv64xxx_i2c_data *VAR_6)
{
 switch(VAR_6->action) {
 case 136:
  FUNC_3(VAR_6->cntl_bits,
   VAR_6->reg_base + VAR_1);
  break;

 case 129:
  FUNC_3(VAR_6->cntl_bits | VAR_3,
   VAR_6->reg_base + VAR_1);
  break;

 case 132:
  FUNC_3(VAR_6->addr1,
   VAR_6->reg_base + VAR_5);
  FUNC_3(VAR_6->cntl_bits,
   VAR_6->reg_base + VAR_1);
  break;

 case 131:
  FUNC_3(VAR_6->addr2,
   VAR_6->reg_base + VAR_5);
  FUNC_3(VAR_6->cntl_bits,
   VAR_6->reg_base + VAR_1);
  break;

 case 130:
  FUNC_3(VAR_6->msg->buf[VAR_6->byte_posn++],
   VAR_6->reg_base + VAR_5);
  FUNC_3(VAR_6->cntl_bits,
   VAR_6->reg_base + VAR_1);
  break;

 case 134:
  VAR_6->msg->buf[VAR_6->byte_posn++] =
   FUNC_1(VAR_6->reg_base + VAR_5);
  FUNC_3(VAR_6->cntl_bits,
   VAR_6->reg_base + VAR_1);
  break;

 case 133:
  VAR_6->msg->buf[VAR_6->byte_posn++] =
   FUNC_1(VAR_6->reg_base + VAR_5);
  VAR_6->cntl_bits &= ~VAR_2;
  FUNC_3(VAR_6->cntl_bits | VAR_4,
   VAR_6->reg_base + VAR_1);
  VAR_6->block = 0;
  FUNC_2(&VAR_6->waitq);
  break;

 case 135:
 default:
  FUNC_0(&VAR_6->adapter.dev,
   "mv64xxx_i2c_do_action: Invalid action: %d\n",
   VAR_6->action);
  VAR_6->rc = -VAR_0;

 case 128:
  VAR_6->cntl_bits &= ~VAR_2;
  FUNC_3(VAR_6->cntl_bits | VAR_4,
   VAR_6->reg_base + VAR_1);
  VAR_6->block = 0;
  FUNC_2(&VAR_6->waitq);
  break;
 }
}
