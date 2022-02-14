
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;


 int FUNC_0 (int**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int** VAR_9 ;
 int FUNC_1 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_10)
{
 int VAR_11;

 FUNC_1(VAR_10, VAR_2, VAR_1);
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9); VAR_11++) {
  FUNC_1(VAR_10, VAR_3, VAR_11);
  FUNC_1(VAR_10, VAR_4, VAR_9[VAR_11][2]);
  FUNC_1(VAR_10, VAR_5, VAR_9[VAR_11][1]);
  FUNC_1(VAR_10, VAR_6, VAR_9[VAR_11][0]);
  FUNC_1(VAR_10, VAR_8, 0);
 }
 FUNC_1(VAR_10, VAR_7, VAR_11);
 FUNC_1(VAR_10, VAR_2, VAR_0);
}
