
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_querymenu {scalar_t__ id; int index; int name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (struct v4l2_querymenu*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
       struct v4l2_querymenu *VAR_4)
{
 static const char *VAR_5[] = {
  "Off",
  "On",
  ((void*)0)
 };
 if (VAR_4->id == VAR_1) {
  int VAR_6;
  const char **VAR_7 = VAR_5;
  for (VAR_6 = 0; VAR_6 < VAR_4->index && VAR_7[VAR_6]; VAR_6++)
   ;
  if (VAR_7[VAR_6] == ((void*)0) || VAR_7[VAR_6][0] == '\0')
   return -VAR_0;
  FUNC_0(VAR_4->name, VAR_7[VAR_4->index],
   sizeof(VAR_4->name));
  return 0;
 }
 return FUNC_1(VAR_4, ((void*)0), ((void*)0));
}
