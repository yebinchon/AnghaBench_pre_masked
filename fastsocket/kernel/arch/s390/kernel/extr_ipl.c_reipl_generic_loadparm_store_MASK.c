
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int load_parm; } ;
struct TYPE_4__ {TYPE_1__ ccw; } ;
struct ipl_parameter_block {TYPE_2__ ipl_info; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (int ,char,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct ipl_parameter_block *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6;


 VAR_6 = VAR_4;
 if ((VAR_4 > 0) && (VAR_3[VAR_4 - 1] == '\n'))
  VAR_6--;

 if ((VAR_6 > VAR_1) || ((VAR_6 > 0) && (VAR_3[0] == ' ')))
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  if (FUNC_1(VAR_3[VAR_5]) || FUNC_2(VAR_3[VAR_5]) || (VAR_3[VAR_5] == ' ') ||
      (VAR_3[VAR_5] == '.'))
   continue;
  return -VAR_0;
 }

 FUNC_4(VAR_2->ipl_info.ccw.load_parm, ' ', VAR_1);

 FUNC_3(VAR_2->ipl_info.ccw.load_parm, VAR_3, VAR_6);
 FUNC_0(VAR_2->ipl_info.ccw.load_parm, VAR_1);
 return VAR_4;
}
