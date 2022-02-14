
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_pos; int vc_visible_origin; int vc_cols; } ;





 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned short FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_6, int VAR_7)
{
 unsigned short VAR_8;
 int VAR_9, VAR_10;

 switch (VAR_7) {
 case 129:
  VAR_8 = FUNC_0(VAR_4, VAR_1);
  FUNC_1(VAR_4, VAR_1,
    (VAR_8 & ~(VAR_0)));
  break;

 case 128:
 case 130:
  VAR_8 = FUNC_0(VAR_4, VAR_1);
  FUNC_1(VAR_4, VAR_1,
    (VAR_8 | VAR_0));
  VAR_9 = (VAR_6->vc_pos - VAR_6->vc_visible_origin) / 2;
  VAR_10 = ((VAR_9 / VAR_6->vc_cols) << 4) + 31;
  VAR_9 = ((VAR_9 % VAR_6->vc_cols) << 3) + VAR_5;
  FUNC_1(VAR_4, VAR_2, VAR_9);
  FUNC_1(VAR_4, VAR_3, VAR_10);
 }
}
