
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omapfb_color_key {int channel_out; int key_type; int background; int trans_key; } ;
struct TYPE_2__ {struct omapfb_color_key color_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int) ;





 TYPE_1__ VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct omapfb_color_key *VAR_7)
{
 u32 VAR_8, VAR_9;
 int VAR_10, VAR_11;

 switch (VAR_7->channel_out) {
 case 131:
  VAR_8 = VAR_1;
  VAR_9 = VAR_3;
  VAR_10 = 10;
  break;
 case 132:
  VAR_8 = VAR_2;
  VAR_9 = VAR_4;
  VAR_10 = 12;
  break;
 default:
  return -VAR_5;
 }
 switch (VAR_7->key_type) {
 case 130:
  VAR_11 = 0;
  break;
 case 129:
  VAR_11 = 1;
  break;
 case 128:
  VAR_11 = 3;
  break;
 default:
  return -VAR_5;
 }
 FUNC_3(1);
 FUNC_1(VAR_0, FUNC_0(VAR_10, 2), VAR_11 << VAR_10);

 if (VAR_11 != 0)
  FUNC_2(VAR_9, VAR_7->trans_key);
 FUNC_2(VAR_8, VAR_7->background);
 FUNC_3(0);

 VAR_6.color_key = *VAR_7;

 return 0;
}
