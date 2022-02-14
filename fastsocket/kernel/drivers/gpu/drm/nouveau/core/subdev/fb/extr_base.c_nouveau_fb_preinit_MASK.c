
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* init ) (struct nouveau_fb*) ;int size; size_t type; } ;
struct nouveau_fb {TYPE_1__ ram; int tags; int vram; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nouveau_fb*,char*) ;
 int FUNC_3 (struct nouveau_fb*,char*,...) ;
 int FUNC_4 (struct nouveau_fb*) ;

int
FUNC_5(struct nouveau_fb *VAR_1)
{
 static const char *VAR_2[] = {
  [128] = "unknown",
  [129 ] = "stolen system memory",
  [130 ] = "SGRAM",
  [131 ] = "SDRAM",
  [138 ] = "DDR1",
  [137 ] = "DDR2",
  [136 ] = "DDR3",
  [135 ] = "GDDR2",
  [134 ] = "GDDR3",
  [133 ] = "GDDR4",
  [132 ] = "GDDR5",
 };
 int VAR_3, VAR_4;

 VAR_4 = VAR_1->ram.init(VAR_1);
 if (VAR_4 < 0 || !VAR_1->ram.size) {
  FUNC_2(VAR_1, "error detecting memory configuration!!\n");
  return (VAR_4 < 0) ? VAR_4 : -VAR_0;
 }

 if (!FUNC_1(&VAR_1->vram)) {
  VAR_3 = FUNC_0(&VAR_1->vram, 0, VAR_1->ram.size >> 12, 1);
  if (VAR_3)
   return VAR_3;
 }

 if (!FUNC_1(&VAR_1->tags)) {
  VAR_3 = FUNC_0(&VAR_1->tags, 0, VAR_4 ? ++VAR_4 : 0, 1);
  if (VAR_3)
   return VAR_3;
 }

 FUNC_3(VAR_1, "RAM type: %s\n", VAR_2[VAR_1->ram.type]);
 FUNC_3(VAR_1, "RAM size: %d MiB\n", (int)(VAR_1->ram.size >> 20));
 FUNC_3(VAR_1, "   ZCOMP: %d tags\n", VAR_4);
 return 0;
}
