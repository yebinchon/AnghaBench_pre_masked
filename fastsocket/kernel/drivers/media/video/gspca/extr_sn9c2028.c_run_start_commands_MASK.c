
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct init_command {int to_read; int instruction; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int ) ;
 int FUNC_1 (struct gspca_dev*,int ) ;
 int FUNC_2 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_0,
         struct init_command *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = -1;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  switch (VAR_1[VAR_3].to_read) {
  case 4:
   VAR_4 = FUNC_1(VAR_0,
     VAR_1[VAR_3].instruction);
   break;
  case 1:
   VAR_4 = FUNC_2(VAR_0,
     VAR_1[VAR_3].instruction);
   break;
  case 0:
   VAR_4 = FUNC_0(VAR_0,
     VAR_1[VAR_3].instruction);
   break;
  }
  if (VAR_4 < 0)
   return VAR_4;
 }
 return 0;
}
