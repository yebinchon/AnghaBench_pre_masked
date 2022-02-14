
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ bridge; int header_read; int* header; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u8* FUNC_0(struct gspca_dev *VAR_1, u8 *VAR_2, int VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_1;
 int VAR_5, VAR_6 = (VAR_4->bridge == VAR_0) ? 18 : 12;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  switch (VAR_4->header_read) {
  case 0:
   if (VAR_2[VAR_5] == 0xff)
    VAR_4->header_read++;
   break;
  case 1:
   if (VAR_2[VAR_5] == 0xff)
    VAR_4->header_read++;
   else
    VAR_4->header_read = 0;
   break;
  case 2:
   if (VAR_2[VAR_5] == 0x00)
    VAR_4->header_read++;
   else if (VAR_2[VAR_5] != 0xff)
    VAR_4->header_read = 0;
   break;
  case 3:
   if (VAR_2[VAR_5] == 0xc4)
    VAR_4->header_read++;
   else if (VAR_2[VAR_5] == 0xff)
    VAR_4->header_read = 1;
   else
    VAR_4->header_read = 0;
   break;
  case 4:
   if (VAR_2[VAR_5] == 0xc4)
    VAR_4->header_read++;
   else if (VAR_2[VAR_5] == 0xff)
    VAR_4->header_read = 1;
   else
    VAR_4->header_read = 0;
   break;
  case 5:
   if (VAR_2[VAR_5] == 0x96)
    VAR_4->header_read++;
   else if (VAR_2[VAR_5] == 0xff)
    VAR_4->header_read = 1;
   else
    VAR_4->header_read = 0;
   break;
  default:
   VAR_4->header[VAR_4->header_read - 6] = VAR_2[VAR_5];
   VAR_4->header_read++;
   if (VAR_4->header_read == VAR_6) {
    VAR_4->header_read = 0;
    return VAR_2 + VAR_5 + 1;
   }
  }
 }
 return ((void*)0);
}
