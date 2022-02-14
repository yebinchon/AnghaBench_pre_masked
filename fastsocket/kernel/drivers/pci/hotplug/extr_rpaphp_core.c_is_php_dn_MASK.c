
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,int const**,int const**,int const**,int const**) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_0, const int **VAR_1,
  const int **VAR_2, const int **VAR_3, const int **VAR_4)
{
 const int *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5, VAR_4);
 if (VAR_6 < 0)
  return 0;

 if (!FUNC_1((char *) &VAR_5[1]))
  return 0;

 *VAR_3 = VAR_5;
 return 1;
}
