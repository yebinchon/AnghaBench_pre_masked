
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct map_info {int dummy; } ;
struct TYPE_3__ {int * x; } ;
typedef TYPE_1__ map_word ;
typedef int caddr_t ;


 int FUNC_0 (int,char*,unsigned long,int ,int ) ;
 int FUNC_1 (struct map_info*,unsigned long) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct map_info *VAR_0, map_word VAR_1, unsigned long VAR_2)
{
 caddr_t VAR_3 = FUNC_1(VAR_0, VAR_2);
 if(!VAR_3)
  return;

 FUNC_0(3, "adr = 0x%08lx (%p)  data = 0x%04x", VAR_2, VAR_3, VAR_1.x[0]);
 FUNC_2(VAR_1.x[0], VAR_3);
}
