
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int name; } ;
typedef int atomic_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,char*,char const*,int) ;
 int FUNC_2 (char const*) ;

int FUNC_3(struct v4l2_device *VAR_0, const char *VAR_1,
      atomic_t *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2) - 1;
 int VAR_4 = FUNC_2(VAR_1);

 if (VAR_1[VAR_4 - 1] >= '0' && VAR_1[VAR_4 - 1] <= '9')
  FUNC_1(VAR_0->name, sizeof(VAR_0->name),
    "%s-%d", VAR_1, VAR_3);
 else
  FUNC_1(VAR_0->name, sizeof(VAR_0->name),
    "%s%d", VAR_1, VAR_3);
 return VAR_3;
}
