
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int model; int sof_read; int sof_len; } ;
struct gspca_dev {int width; } ;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int,int,...) ;

__attribute__((used)) static u8 *FUNC_1(struct gspca_dev *VAR_1, u8 *VAR_2, int VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_1;
 u8 VAR_5 = 0, VAR_6 = 0;
 int VAR_7;

 switch (VAR_4->model) {
 case 132:
 case 131:
 case 129:
 case 133:
  switch (VAR_1->width) {
  case 160:
   VAR_5 = 0x02;
   VAR_6 = 0x0a;
   break;
  case 176:
   VAR_5 = 0x02;
   VAR_6 = 0x0e;
   break;
  case 320:
   VAR_5 = 0x02;
   VAR_6 = 0x08;
   break;
  case 352:
   VAR_5 = 0x02;
   VAR_6 = 0x00;
   break;
  case 640:
   VAR_5 = 0x03;
   VAR_6 = 0x08;
   break;
  }


  if (VAR_4->model <= 131)
   VAR_5 = 0x00;

  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {


   if (VAR_4->model == 132 && VAR_4->sof_read != VAR_7)
    break;

   switch (VAR_4->sof_read) {
   case 0:
    if (VAR_2[VAR_7] == 0x00)
     VAR_4->sof_read++;
    break;
   case 1:
    if (VAR_2[VAR_7] == 0xff)
     VAR_4->sof_read++;
    else if (VAR_2[VAR_7] == 0x00)
     VAR_4->sof_read = 1;
    else
     VAR_4->sof_read = 0;
    break;
   case 2:
    if (VAR_2[VAR_7] == VAR_5)
     VAR_4->sof_read++;
    else if (VAR_2[VAR_7] == 0x00)
     VAR_4->sof_read = 1;
    else
     VAR_4->sof_read = 0;
    break;
   case 3:
    if (VAR_2[VAR_7] == VAR_6) {
     VAR_4->sof_read = 0;
     return VAR_2 + VAR_7 + (VAR_4->sof_len - 3);
    }
    if (VAR_5 == 0x00 && VAR_2[VAR_7] == 0xff)
     VAR_4->sof_read = 2;
    else if (VAR_2[VAR_7] == 0x00)
     VAR_4->sof_read = 1;
    else
     VAR_4->sof_read = 0;
    break;
   }
  }
  break;
 case 130:
 case 128:


  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
   switch (VAR_4->sof_read) {
   case 0:
    if (VAR_2[VAR_7] == 0x00)
     VAR_4->sof_read++;
    break;
   case 1:
    VAR_4->sof_read = 0;
    if (VAR_2[VAR_7] == 0xff) {
     if (VAR_7 >= 4)
      FUNC_0(VAR_0,
             "header found at offset: %d: %02x %02x 00 %02x %02x %02x\n",
             VAR_7 - 1,
             VAR_2[VAR_7 - 4],
             VAR_2[VAR_7 - 3],
             VAR_2[VAR_7],
             VAR_2[VAR_7 + 1],
             VAR_2[VAR_7 + 2]);
     else
      FUNC_0(VAR_0,
             "header found at offset: %d: 00 %02x %02x %02x\n",
             VAR_7 - 1,
             VAR_2[VAR_7],
             VAR_2[VAR_7 + 1],
             VAR_2[VAR_7 + 2]);
     return VAR_2 + VAR_7 + (VAR_4->sof_len - 1);
    }
    break;
   }
  }
  break;
 }
 return ((void*)0);
}
