
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct sd {int sof_len; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* FUNC_0 (struct gspca_dev*,unsigned char*,int) ;
 int FUNC_1 (struct gspca_dev*,int ,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_3,
   u8 *VAR_4, int VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_3;
 unsigned char *VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (VAR_7) {
  int VAR_8;


  VAR_8 = VAR_7 - VAR_4;
  if (VAR_8 > VAR_6->sof_len)
   VAR_8 -= VAR_6->sof_len;
  else
   VAR_8 = 0;
  FUNC_1(VAR_3, VAR_2,
    VAR_4, VAR_8);
  FUNC_1(VAR_3, VAR_0, ((void*)0), 0);
  VAR_5 -= VAR_7 - VAR_4;
  VAR_4 = VAR_7;
 }

 FUNC_1(VAR_3, VAR_1, VAR_4, VAR_5);
}
