
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {unsigned int region_cnt; } ;
struct TYPE_4__ {TYPE_1__ mem_desc; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__ const,int,int) ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_6, int VAR_7)
{
 const u32 VAR_8[] = { VAR_0,
    VAR_1 + VAR_3,
    VAR_2 + VAR_3 };
 if ((unsigned int)VAR_6 > VAR_5.mem_desc.region_cnt)
  return -VAR_4;

 FUNC_1(1);
 FUNC_0(VAR_8[VAR_6], 1, VAR_7 ? 1 : 0);
 FUNC_1(0);

 return 0;
}
