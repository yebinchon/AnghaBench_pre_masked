
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_querymenu {int id; size_t index; scalar_t__ name; } ;
struct gspca_dev {int dummy; } ;


 size_t FUNC_0 (char const**) ;
 int VAR_0 ;

 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_1,
   struct v4l2_querymenu *VAR_2)
{
 static const char *VAR_3[3] = {"NoFliker", "50 Hz", "60 Hz"};

 switch (VAR_2->id) {
 case 128:
  if (VAR_2->index >= FUNC_0(VAR_3))
   break;
  FUNC_1((char *) VAR_2->name, VAR_3[VAR_2->index]);
  return 0;
 }
 return -VAR_0;
}
