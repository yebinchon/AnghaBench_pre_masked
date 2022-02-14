
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ vblank_count; int wait_vsync; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(u32 VAR_3)
{
 int VAR_4;
 u64 VAR_5;

 VAR_5 = VAR_2.vblank_count;
 VAR_4 = FUNC_0(VAR_2.wait_vsync,
            VAR_5 != VAR_2.vblank_count,
            VAR_1 / 10);
 if (!VAR_4)
  return -VAR_0;

 return 0;
}
