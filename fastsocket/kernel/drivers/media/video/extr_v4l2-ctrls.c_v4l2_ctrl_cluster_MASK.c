
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {unsigned int ncontrols; struct v4l2_ctrl** cluster; } ;


 int FUNC_0 (int ) ;

void FUNC_1(unsigned VAR_0, struct v4l2_ctrl **VAR_1)
{
 int VAR_2;


 FUNC_0(VAR_1[0] == ((void*)0));

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1[VAR_2]) {
   VAR_1[VAR_2]->cluster = VAR_1;
   VAR_1[VAR_2]->ncontrols = VAR_0;
  }
 }
}
