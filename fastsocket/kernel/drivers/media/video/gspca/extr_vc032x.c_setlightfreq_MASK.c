
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ sensor; size_t lightfreq; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;



 int FUNC_0 (struct gspca_dev*,int const**) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 static const u8 (*VAR_3[3])[4] =
  {128, 130, 129};

 if (VAR_2->sensor != VAR_0)
  return;
 FUNC_0(VAR_1, VAR_3[VAR_2->lightfreq]);
}
