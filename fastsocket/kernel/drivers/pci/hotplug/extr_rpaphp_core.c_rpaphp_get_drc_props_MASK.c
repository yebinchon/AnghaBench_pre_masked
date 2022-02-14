
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const**,int const**,int const**,int const**) ;
 unsigned int* FUNC_1 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_2 (char*) ;

int FUNC_3(struct device_node *VAR_1, int *VAR_2,
  char **VAR_3, char **VAR_4, int *VAR_5)
{
 const int *VAR_6, *VAR_7;
 const int *VAR_8, *VAR_9;
 const unsigned int *VAR_10;
 char *VAR_11, *VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = FUNC_1(VAR_1, "ibm,my-drc-index", ((void*)0));
 if (!VAR_10) {

  return -VAR_0;
 }

 VAR_14 = FUNC_0(VAR_1->parent, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
 if (VAR_14 < 0) {
  return -VAR_0;
 }

 VAR_11 = (char *) &VAR_7[1];
 VAR_12 = (char *) &VAR_8[1];


 for (VAR_13 = 0; VAR_13 < VAR_6[0]; VAR_13++) {
  if ((unsigned int) VAR_6[VAR_13 + 1] == *VAR_10) {
   if (VAR_3)
                  *VAR_3 = VAR_11;
   if (VAR_4)
    *VAR_4 = VAR_12;
   if (VAR_2)
    *VAR_2 = *VAR_10;
   if (VAR_5)
    *VAR_5 = VAR_9[VAR_13+1];
   return 0;
  }
  VAR_11 += (FUNC_2(VAR_11) + 1);
  VAR_12 += (FUNC_2(VAR_12) + 1);
 }

 return -VAR_0;
}
