
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_data {int field_count; int front; } ;


 int FUNC_0 (struct video_data*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct video_data *VAR_0)
{

 if (1 == VAR_0->field_count)
  FUNC_1(VAR_0->front);
 else
  FUNC_0(VAR_0, 1);
}
