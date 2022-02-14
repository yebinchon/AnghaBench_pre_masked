
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ ag_cnt; int sensor; int exposure; int avg_lum; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;



 int FUNC_1 (int *) ;
 void* FUNC_2 (struct gspca_dev*,unsigned int) ;
 int FUNC_3 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 int VAR_4;
 int VAR_5;
 u8 VAR_6 = 130;
 u8 VAR_7 = 20;


 if (VAR_3->ag_cnt < 0)
  return;
 if (--VAR_3->ag_cnt >= 0)
  return;
 VAR_3->ag_cnt = VAR_0;

 VAR_4 = FUNC_1(&VAR_3->avg_lum);
 FUNC_0(VAR_1, "mean lum %d", VAR_4);
 if (VAR_4 < VAR_6 - VAR_7 ||
     VAR_4 > VAR_6 + VAR_7) {
  switch (VAR_3->sensor) {
  case 130:
   VAR_5 = VAR_3->exposure;
   VAR_5 += (VAR_6 - VAR_4) >> 6;
   if (VAR_5 < 0)
    VAR_5 = 0;
   VAR_3->exposure = FUNC_2(VAR_2,
         (unsigned int) VAR_5);
   break;
  case 129:
   VAR_5 = VAR_3->exposure >> 8;
   VAR_5 += (VAR_6 - VAR_4) >> 4;
   if (VAR_5 < 0)
    VAR_5 = 0;
   VAR_3->exposure = FUNC_2(VAR_2,
     (unsigned int) (VAR_5 << 8));
   break;
  case 128:
   VAR_5 = VAR_3->exposure;
   VAR_5 += (VAR_6 - VAR_4) >> 2;
   if (VAR_5 < 0)
    VAR_5 = 0;
   VAR_3->exposure = FUNC_2(VAR_2,
         (unsigned int) VAR_5);
   FUNC_3(VAR_2);
   break;
  default:




   VAR_5 = VAR_3->exposure;
   VAR_5 += (VAR_6 - VAR_4) >> 6;
   if (VAR_5 < 0)
    VAR_5 = 0;
   VAR_3->exposure = FUNC_2(VAR_2,
         (unsigned int) VAR_5);
   FUNC_3(VAR_2);
   break;
  }
 }
}
