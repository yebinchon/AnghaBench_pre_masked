
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct dst_state *VAR_3, u8 VAR_4)
{
 char *VAR_5;
 switch (VAR_4) {
 case 129:
  VAR_5 = "satellite";
  break;

 case 128:
  VAR_5 = "terrestrial";
  break;

 case 130:
  VAR_5 = "cable";
  break;

 case 131:
  VAR_5 = "atsc";
  break;

 default:
  FUNC_0(VAR_2, VAR_0, 1, "invalid dst type %d", VAR_4);
  return -VAR_1;
 }
 FUNC_0(VAR_2, VAR_0, 1, "DST type: %s", VAR_5);

 return 0;
}
