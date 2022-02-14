
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sd {int gain; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2, u16 VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;

 if (VAR_3 < VAR_1) {
  if (VAR_4->gain + 1 <= 28) {
   VAR_4->gain++;
   FUNC_0(VAR_2);
  }
 }
 if (VAR_3 > VAR_0) {
  if (VAR_4->gain > 0) {
   VAR_4->gain--;
   FUNC_0(VAR_2);
  }
 }
}
