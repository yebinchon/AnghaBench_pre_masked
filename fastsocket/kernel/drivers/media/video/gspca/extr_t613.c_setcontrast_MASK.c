
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sd {unsigned int contrast; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 unsigned int VAR_2 = VAR_1->contrast;
 u16 VAR_3;

 if (VAR_2 < 7)
  VAR_3 = 0x8ea9 - VAR_2 * 0x200;
 else
  VAR_3 = 0x00a9 + (VAR_2 - 7) * 0x200;

 FUNC_0(VAR_0, VAR_3);
}
