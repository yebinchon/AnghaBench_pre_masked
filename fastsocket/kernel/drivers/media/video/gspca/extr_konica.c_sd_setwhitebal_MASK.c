
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int whitebal; } ;
struct gspca_dev {scalar_t__ streaming; } ;
typedef int __s32 ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_1, __s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 VAR_3->whitebal = VAR_2;
 if (VAR_1->streaming) {
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, VAR_3->whitebal, VAR_0);
  FUNC_1(VAR_1);
 }
 return 0;
}
