
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int s8 ;
struct TYPE_2__ {int orient1; int orient2; int (* get_xyz ) (int *,int *,int *) ;scalar_t__ vflag; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;

void FUNC_2(s8 *VAR_1, s8 *VAR_2, s8 *VAR_3)
{
 u32 VAR_4 = VAR_0.vflag? VAR_0.orient1 : VAR_0.orient2;

 if (VAR_4 & 0x80)

  VAR_0.get_xyz(VAR_2, VAR_1, VAR_3);
 else
  VAR_0.get_xyz(VAR_1, VAR_2, VAR_3);

 if (VAR_4 & 0x04)
  *VAR_3 = ~(*VAR_3);
 if (VAR_4 & 0x02)
  *VAR_2 = ~(*VAR_2);
 if (VAR_4 & 0x01)
  *VAR_1 = ~(*VAR_1);
}
