
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct prpmc2800_board_info {int subsys0; int subsys1; int vpd4_mask; int vpd4; } ;


 int FUNC_0 (struct prpmc2800_board_info*) ;
 struct prpmc2800_board_info* VAR_0 ;

__attribute__((used)) static struct prpmc2800_board_info *FUNC_1(u8 *VAR_1)
{
 struct prpmc2800_board_info *VAR_2;
 int VAR_3;

 for (VAR_3=0,VAR_2=VAR_0; VAR_3<FUNC_0(VAR_0);
   VAR_3++,VAR_2++)
  if ((VAR_1[0] == VAR_2->subsys0) && (VAR_1[1] == VAR_2->subsys1)
    && ((VAR_1[4] & VAR_2->vpd4_mask) == VAR_2->vpd4))
   return VAR_2;

 return ((void*)0);
}
