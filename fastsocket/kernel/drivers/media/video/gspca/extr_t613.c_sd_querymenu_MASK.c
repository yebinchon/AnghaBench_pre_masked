
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_querymenu {int id; size_t index; scalar_t__ name; } ;
struct gspca_dev {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;


 int * VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_2,
   struct v4l2_querymenu *VAR_3)
{
 switch (VAR_3->id) {
 case 128:
  switch (VAR_3->index) {
  case 1:
   FUNC_1((char *) VAR_3->name, "50 Hz");
   return 0;
  case 2:
   FUNC_1((char *) VAR_3->name, "60 Hz");
   return 0;
  }
  break;
 case 129:
  if ((unsigned) VAR_3->index < FUNC_0(VAR_1)) {
   FUNC_2((char *) VAR_3->name,
    VAR_1[VAR_3->index],
    sizeof VAR_3->name);
   return 0;
  }
  break;
 }
 return -VAR_0;
}
