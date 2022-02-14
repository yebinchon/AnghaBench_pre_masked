
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct ps3vram_priv* private; } ;
struct TYPE_2__ {int miss; int hit; } ;
struct ps3vram_priv {TYPE_1__ cache; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct ps3vram_priv *VAR_2 = VAR_0->private;

 FUNC_0(VAR_0, "hit:%u\nmiss:%u\n", VAR_2->cache.hit, VAR_2->cache.miss);
 return 0;
}
