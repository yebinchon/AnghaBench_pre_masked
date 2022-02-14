
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_querymenu {int index; int name; int id; scalar_t__ reserved; } ;
struct v4l2_queryctrl {int minimum; int maximum; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const* const,int) ;
 char** FUNC_1 (int ) ;

int FUNC_2(struct v4l2_querymenu *VAR_1, struct v4l2_queryctrl *VAR_2,
        const char * const *VAR_3)
{
 int VAR_4;

 VAR_1->reserved = 0;
 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_1(VAR_1->id);
 if (VAR_3 == ((void*)0) ||
     (VAR_2 && (VAR_1->index < VAR_2->minimum || VAR_1->index > VAR_2->maximum)))
  return -VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_1->index && VAR_3[VAR_4]; VAR_4++) ;
 if (VAR_3[VAR_4] == ((void*)0) || VAR_3[VAR_4][0] == '\0')
  return -VAR_0;
 FUNC_0(VAR_1->name, VAR_3[VAR_1->index], sizeof(VAR_1->name));
 return 0;
}
