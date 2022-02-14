
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct ks0127 {int ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int,int ) ;
 int FUNC_2 (int) ;
 int * VAR_6 ;
 struct ks0127* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static void FUNC_5(struct v4l2_subdev *VAR_7)
{
 struct ks0127 *VAR_8 = FUNC_3(VAR_7);
 u8 *VAR_9 = VAR_6;
 int VAR_10;

 VAR_8->ident = VAR_3;

 FUNC_4(1, VAR_5, VAR_7, "reset\n");
 FUNC_2(1);




 for (VAR_10 = 1; VAR_10 < 33; VAR_10++)
  FUNC_1(VAR_7, VAR_10, VAR_9[VAR_10]);

 for (VAR_10 = 35; VAR_10 < 40; VAR_10++)
  FUNC_1(VAR_7, VAR_10, VAR_9[VAR_10]);

 for (VAR_10 = 41; VAR_10 < 56; VAR_10++)
  FUNC_1(VAR_7, VAR_10, VAR_9[VAR_10]);

 for (VAR_10 = 58; VAR_10 < 64; VAR_10++)
  FUNC_1(VAR_7, VAR_10, VAR_9[VAR_10]);


 if ((FUNC_0(VAR_7, VAR_1) & 0x80) == 0) {
  VAR_8->ident = VAR_2;
  FUNC_4(1, VAR_5, VAR_7, "ks0122s found\n");
  return;
 }

 switch (FUNC_0(VAR_7, VAR_0) & 0x0f) {
 case 0:
  FUNC_4(1, VAR_5, VAR_7, "ks0127 found\n");
  break;

 case 9:
  VAR_8->ident = VAR_4;
  FUNC_4(1, VAR_5, VAR_7, "ks0127B Revision A found\n");
  break;

 default:
  FUNC_4(1, VAR_5, VAR_7, "unknown revision\n");
  break;
 }
}
