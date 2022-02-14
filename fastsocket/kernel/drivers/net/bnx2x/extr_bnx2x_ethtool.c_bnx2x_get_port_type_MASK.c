
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {TYPE_1__* phy; } ;
struct bnx2x {TYPE_2__ link_params; } ;
struct TYPE_3__ {int media_type; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (struct bnx2x*) ;

__attribute__((used)) static int FUNC_1(struct bnx2x *VAR_5)
{
 int VAR_6;
 u32 VAR_7 = FUNC_0(VAR_5);
 switch (VAR_5->link_params.phy[VAR_7].media_type) {
 case 131:
 case 130:
 case 128:
 case 133:
 case 135:
  VAR_6 = VAR_1;
  break;
 case 134:
  VAR_6 = VAR_0;
  break;
 case 136:
  VAR_6 = VAR_4;
  break;
 case 132:
  VAR_6 = VAR_2;
  break;
 case 129:
 default:
  VAR_6 = VAR_3;
  break;
 }
 return VAR_6;
}
