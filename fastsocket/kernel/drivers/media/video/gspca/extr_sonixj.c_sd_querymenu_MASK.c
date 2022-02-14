
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_querymenu {int id; scalar_t__ name; int index; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_1,
   struct v4l2_querymenu *VAR_2)
{
 switch (VAR_2->id) {
 case 128:
  switch (VAR_2->index) {
  case 0:
   FUNC_0((char *) VAR_2->name, "NoFliker");
   return 0;
  case 1:
   FUNC_0((char *) VAR_2->name, "50 Hz");
   return 0;
  case 2:
   FUNC_0((char *) VAR_2->name, "60 Hz");
   return 0;
  }
  break;
 }
 return -VAR_0;
}
