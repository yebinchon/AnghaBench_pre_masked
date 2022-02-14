
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct map_info {int dummy; } ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {int * x; TYPE_1__ member_0; } ;
typedef TYPE_2__ map_word ;
typedef int caddr_t ;


 int FUNC_0 (int,char*,unsigned long,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct map_info*,unsigned long) ;

__attribute__((used)) static map_word FUNC_3(struct map_info *VAR_0, unsigned long VAR_1)
{
 caddr_t VAR_2;
 map_word VAR_3 = {0};

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if(!VAR_2)
  return VAR_3;

 VAR_3.x[0] = FUNC_1(VAR_2);
 FUNC_0(3, "ofs = 0x%08lx (%p) data = 0x%02x", VAR_1, VAR_2, VAR_3.x[0]);
 return VAR_3;
}
