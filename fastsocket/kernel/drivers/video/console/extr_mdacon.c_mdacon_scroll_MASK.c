
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int vc_rows; int vc_video_erase_char; } ;


 int FUNC_0 (int ,int) ;


 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct vc_data *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 u16 VAR_6 = FUNC_1(VAR_1->vc_video_erase_char);

 if (!VAR_5)
  return 0;

 if (VAR_5 > VAR_1->vc_rows)
  VAR_5 = VAR_1->vc_rows;

 switch (VAR_4) {

 case 128:
  FUNC_2(FUNC_0(0,VAR_2), FUNC_0(0,VAR_2+VAR_5),
    (VAR_3-VAR_2-VAR_5)*VAR_0*2);
  FUNC_3(FUNC_0(0,VAR_3-VAR_5), VAR_6,
    VAR_5*VAR_0*2);
  break;

 case 129:
  FUNC_2(FUNC_0(0,VAR_2+VAR_5), FUNC_0(0,VAR_2),
    (VAR_3-VAR_2-VAR_5)*VAR_0*2);
  FUNC_3(FUNC_0(0,VAR_2), VAR_6, VAR_5*VAR_0*2);
  break;
 }

 return 0;
}
