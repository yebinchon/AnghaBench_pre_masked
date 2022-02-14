
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct front_face {int pd; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct front_face*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct front_face *VAR_3 = VAR_1;
 FUNC_0(VAR_3);
 return FUNC_1(VAR_3->pd, VAR_2);
}
