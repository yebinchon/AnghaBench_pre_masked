
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {unsigned int region_cnt; TYPE_1__* region; } ;
struct TYPE_6__ {TYPE_2__ mem_desc; } ;
struct TYPE_4__ {scalar_t__ paddr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,scalar_t__,int,int,int,int,int,int) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_2, int VAR_3,
      unsigned long VAR_4,
      int VAR_5,
      int VAR_6, int VAR_7, int VAR_8, int VAR_9,
      int VAR_10)
{
 u32 VAR_11;
 int VAR_12;

 if ((unsigned)VAR_2 > VAR_1.mem_desc.region_cnt)
  return -VAR_0;
 VAR_11 = VAR_1.mem_desc.region[VAR_2].paddr + VAR_4;
 FUNC_1(1);
 VAR_12 = FUNC_0(VAR_2, VAR_3, VAR_11,
   VAR_5,
   VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 FUNC_1(0);
 return VAR_12;
}
