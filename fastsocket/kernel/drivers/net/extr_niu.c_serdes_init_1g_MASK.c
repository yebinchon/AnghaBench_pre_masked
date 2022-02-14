
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct niu *VAR_7)
{
 u64 VAR_8;

 VAR_8 = FUNC_0(VAR_1);
 VAR_8 &= ~VAR_2;
 switch (VAR_7->port) {
 case 0:
  VAR_8 |= VAR_3;
  break;
 case 1:
  VAR_8 |= VAR_4;
  break;
 case 2:
  VAR_8 |= VAR_5;
  break;
 case 3:
  VAR_8 |= VAR_6;
  break;
 default:
  return -VAR_0;
 }
 FUNC_1(VAR_1, VAR_8);

 return 0;
}
