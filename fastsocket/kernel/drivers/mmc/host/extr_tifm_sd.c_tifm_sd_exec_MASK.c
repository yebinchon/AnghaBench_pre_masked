
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tifm_sd {scalar_t__ open_drain; struct tifm_dev* dev; } ;
struct tifm_dev {scalar_t__ addr; int dev; } ;
struct mmc_command {unsigned int opcode; int arg; TYPE_1__* data; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *,char*,unsigned int,int,unsigned int) ;
 unsigned int FUNC_1 (struct mmc_command*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct tifm_sd *VAR_6, struct mmc_command *VAR_7)
{
 struct tifm_dev *VAR_8 = VAR_6->dev;
 unsigned int VAR_9 = FUNC_1(VAR_7);

 if (VAR_6->open_drain)
  VAR_9 |= VAR_4;

 if (VAR_7->data && (VAR_7->data->flags & VAR_0))
  VAR_9 |= VAR_5;

 FUNC_0(&VAR_8->dev, "executing opcode 0x%x, arg: 0x%x, mask: 0x%x\n",
  VAR_7->opcode, VAR_7->arg, VAR_9);

 FUNC_2((VAR_7->arg >> 16) & 0xffff, VAR_8->addr + VAR_1);
 FUNC_2(VAR_7->arg & 0xffff, VAR_8->addr + VAR_2);
 FUNC_2(VAR_7->opcode | VAR_9, VAR_8->addr + VAR_3);
}
