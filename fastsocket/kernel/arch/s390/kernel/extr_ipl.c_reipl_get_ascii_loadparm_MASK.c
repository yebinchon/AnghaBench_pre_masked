
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int load_parm; } ;
struct TYPE_4__ {TYPE_1__ ccw; } ;
struct ipl_parameter_block {TYPE_2__ ipl_info; } ;


 int FUNC_0 (char*,size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(char *VAR_1,
         struct ipl_parameter_block *VAR_2)
{
 FUNC_1(VAR_1, VAR_2->ipl_info.ccw.load_parm, VAR_0);
 FUNC_0(VAR_1, VAR_0);
 VAR_1[VAR_0] = 0;
 FUNC_2(VAR_1);
}
