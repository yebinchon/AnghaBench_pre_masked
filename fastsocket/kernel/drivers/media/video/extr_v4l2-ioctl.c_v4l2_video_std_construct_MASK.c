
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_standard {int id; int framelines; int name; int frameperiod; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (int,int *) ;

int FUNC_2(struct v4l2_standard *VAR_1,
        int VAR_2, const char *VAR_3)
{
 VAR_1->id = VAR_2;
 FUNC_1(VAR_2, &VAR_1->frameperiod);
 VAR_1->framelines = (VAR_2 & VAR_0) ? 525 : 625;
 FUNC_0(VAR_1->name, VAR_3, sizeof(VAR_1->name));
 return 0;
}
