
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_class {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 unsigned int FUNC_5 (char const*,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static ssize_t FUNC_7(struct sysdev_class *VAR_9,
    const char *VAR_10, size_t VAR_11)
{
 unsigned int VAR_12;

 VAR_12 = FUNC_5(VAR_10, ((void*)0), 0);
 if (VAR_12 != 0 && VAR_12 != 1)
  return -VAR_2;
 if (!FUNC_6(VAR_0, &VAR_4))
  return -VAR_3;
 FUNC_1(&VAR_5);
 VAR_6 = VAR_12;
 if (VAR_6)
  FUNC_4(VAR_1, &VAR_4);
 else
  FUNC_0(VAR_1, &VAR_4);
 FUNC_3(VAR_8, &VAR_7);
 FUNC_2(&VAR_5);
 return VAR_11;
}
