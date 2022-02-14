
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; int type; } ;
struct nouveau_fb {TYPE_1__ ram; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nouveau_fb*,int ) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_fb *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4, VAR_0);
 if (VAR_5 & 0x00000100) {
  VAR_4->ram.size = ((VAR_5 >> 12) & 0xf) * 2 + 2;
  VAR_4->ram.size *= 1024 * 1024;
 } else {
  switch (VAR_5 & VAR_1) {
  case 130:
   VAR_4->ram.size = 32 * 1024 * 1024;
   break;
  case 131:
   VAR_4->ram.size = 16 * 1024 * 1024;
   break;
  case 128:
   VAR_4->ram.size = 8 * 1024 * 1024;
   break;
  case 129:
   VAR_4->ram.size = 4 * 1024 * 1024;
   break;
  }
 }

 if ((VAR_5 & 0x00000038) <= 0x10)
  VAR_4->ram.type = VAR_3;
 else
  VAR_4->ram.type = VAR_2;
 return 0;
}
