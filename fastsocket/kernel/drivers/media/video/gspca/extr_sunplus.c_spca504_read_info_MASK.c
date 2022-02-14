
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 int VAR_2;
 u8 VAR_3[6];

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
  VAR_3[VAR_2] = FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_0,
  "Read info: %d %d %d %d %d %d."
  " Should be 1,0,2,2,0,0",
  VAR_3[0], VAR_3[1], VAR_3[2],
  VAR_3[3], VAR_3[4], VAR_3[5]);
}
