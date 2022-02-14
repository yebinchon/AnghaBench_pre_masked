
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z ;
typedef int u16 ;
struct cycx_x25_cmd {int command; } ;
struct cycx_device {int in_isr; int hw; scalar_t__ buff_int_mode_unbusy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int *,int ,struct cycx_x25_cmd*,int) ;
 int FUNC_1 (int *,int ,int *,int) ;
 int FUNC_2 (struct cycx_device*,int ) ;
 int FUNC_3 (struct cycx_device*,struct cycx_x25_cmd*) ;
 int FUNC_4 (struct cycx_device*,struct cycx_x25_cmd*) ;
 int FUNC_5 (struct cycx_device*,struct cycx_x25_cmd*) ;
 int FUNC_6 (struct cycx_device*,struct cycx_x25_cmd*) ;
 int FUNC_7 (struct cycx_device*,struct cycx_x25_cmd*) ;
 int FUNC_8 (struct cycx_device*,struct cycx_x25_cmd*) ;
 int FUNC_9 (struct cycx_device*,struct cycx_x25_cmd*) ;
 int FUNC_10 (struct cycx_device*,struct cycx_x25_cmd*) ;
 int FUNC_11 (struct cycx_device*,struct cycx_x25_cmd*) ;

__attribute__((used)) static void FUNC_12(struct cycx_device *VAR_3)
{
 struct cycx_x25_cmd VAR_4;
 u16 VAR_5 = 0;

 VAR_3->in_isr = 1;
 VAR_3->buff_int_mode_unbusy = 0;
 FUNC_0(&VAR_3->hw, VAR_2, &VAR_4, sizeof(VAR_4));

 switch (VAR_4.command) {
 case 134:
  FUNC_8(VAR_3, &VAR_4);
  break;
 case 137:
  FUNC_11(VAR_3, &VAR_4);
  break;
 case 129:
  FUNC_7(VAR_3, &VAR_4);
  break;
 case 128:
  FUNC_10(VAR_3, &VAR_4);
  break;
 case 136:
  FUNC_4(VAR_3, &VAR_4);
  break;
 case 135:
  FUNC_3(VAR_3, &VAR_4);
  break;
 case 132:
  FUNC_5(VAR_3, &VAR_4);
  break;
 case 133:
  FUNC_6(VAR_3, &VAR_4);
  break;
 case 130:
  FUNC_2(VAR_3, VAR_0);
  break;
 case 131:
  FUNC_2(VAR_3, VAR_1);
  break;
 default:
  FUNC_9(VAR_3, &VAR_4);
  break;
 }

 FUNC_1(&VAR_3->hw, 0, &VAR_5, sizeof(VAR_5));
 FUNC_1(&VAR_3->hw, VAR_2, &VAR_5, sizeof(VAR_5));
 VAR_3->in_isr = 0;
}
