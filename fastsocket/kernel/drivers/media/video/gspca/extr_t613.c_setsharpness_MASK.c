
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sd {int sharpness; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 u16 VAR_2;

 VAR_2 = 0x0aa6 + 0x1000 * VAR_1->sharpness;

 FUNC_0(VAR_0, VAR_2);
}
