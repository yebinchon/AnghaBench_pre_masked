
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct nvbios_init {int nested; scalar_t__ offset; int bios; } ;
struct TYPE_2__ {int (* exec ) (struct nvbios_init*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct nvbios_init*) ;

int
FUNC_3(struct nvbios_init *VAR_3)
{
 VAR_3->nested++;
 while (VAR_3->offset) {
  u8 VAR_4 = FUNC_1(VAR_3->bios, VAR_3->offset);
  if (VAR_4 >= VAR_2 || !VAR_1[VAR_4].exec) {
   FUNC_0("unknown opcode 0x%02x\n", VAR_4);
   return -VAR_0;
  }

  VAR_1[VAR_4].exec(VAR_3);
 }
 VAR_3->nested--;
 return 0;
}
