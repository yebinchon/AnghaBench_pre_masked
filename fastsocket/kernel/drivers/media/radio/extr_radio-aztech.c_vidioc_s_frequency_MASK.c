
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; } ;
struct file {int dummy; } ;
struct aztech {int dummy; } ;


 int FUNC_0 (struct aztech*,int ) ;
 struct aztech* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
    struct v4l2_frequency *VAR_2)
{
 struct aztech *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_2->frequency);
 return 0;
}
