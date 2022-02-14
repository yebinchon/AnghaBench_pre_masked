
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef unsigned char __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,unsigned char*,int) ;
 unsigned char* FUNC_1 (struct gspca_dev*,unsigned char*,int) ;
 unsigned char* VAR_3 ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_4,
   __u8 *VAR_5,
   int VAR_6)
{
 unsigned char *VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (VAR_7) {
  int VAR_8;


  VAR_8 = VAR_7 - VAR_5;
  if (VAR_8 > sizeof VAR_3)
   VAR_8 -= sizeof VAR_3;
  else
   VAR_8 = 0;
  FUNC_0(VAR_4, VAR_2, VAR_5, VAR_8);

  FUNC_0(VAR_4, VAR_0,
   VAR_3, sizeof VAR_3);
  VAR_6 -= VAR_7 - VAR_5;
  VAR_5 = VAR_7;
 }
 FUNC_0(VAR_4, VAR_1, VAR_5, VAR_6);
}
