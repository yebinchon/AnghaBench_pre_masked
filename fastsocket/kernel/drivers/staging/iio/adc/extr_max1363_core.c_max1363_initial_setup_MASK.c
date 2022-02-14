
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max1363_state {int setupbyte; int configbyte; TYPE_1__* chip_info; int * current_mode; } ;
struct TYPE_2__ {size_t default_mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (struct max1363_state*) ;

__attribute__((used)) static int FUNC_3(struct max1363_state *VAR_6)
{
 VAR_6->setupbyte = VAR_0
  | VAR_3
  | VAR_1
  | VAR_4
  | VAR_2;


 VAR_6->setupbyte = FUNC_1(VAR_6->setupbyte);
 VAR_6->current_mode = &VAR_5[VAR_6->chip_info->default_mode];
 VAR_6->configbyte = FUNC_0(VAR_6->configbyte);

 return FUNC_2(VAR_6);
}
