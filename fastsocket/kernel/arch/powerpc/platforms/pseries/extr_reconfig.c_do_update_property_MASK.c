
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int,unsigned char*) ;
 struct property* FUNC_1 (char*,int,unsigned char*,int *) ;
 struct property* FUNC_2 (struct device_node*,char*,int *) ;
 int VAR_6 ;
 char* FUNC_3 (char*,char*,char**,int*,unsigned char**) ;
 char* FUNC_4 (char*,size_t,struct device_node**) ;
 int FUNC_5 (struct device_node*,struct property*) ;
 int FUNC_6 (struct device_node*,struct property*,struct property*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(char *VAR_7, size_t VAR_8)
{
 struct device_node *VAR_9;
 unsigned char *VAR_10;
 char *VAR_11, *VAR_12, *VAR_13;
 int VAR_14, VAR_15;
 struct property *VAR_16, *VAR_17;
 VAR_7 = FUNC_4(VAR_7, VAR_8, &VAR_9);
 VAR_12 = VAR_7 + VAR_8;

 if (!VAR_9)
  return -VAR_1;

 VAR_13 = FUNC_3(VAR_7, VAR_12, &VAR_11, &VAR_15, &VAR_10);
 if (!VAR_13)
  return -VAR_0;

 VAR_16 = FUNC_1(VAR_11, VAR_15, VAR_10, ((void*)0));
 if (!VAR_16)
  return -VAR_2;

 if (!FUNC_8(VAR_11, "slb-size") || !FUNC_8(VAR_11, "ibm,slb-size"))
  FUNC_7(*(int *)VAR_10);

 VAR_17 = FUNC_2(VAR_9, VAR_11,((void*)0));
 if (!VAR_17) {
  if (FUNC_9(VAR_11))
   return FUNC_5(VAR_9, VAR_16);
  return -VAR_1;
 }

 VAR_14 = FUNC_6(VAR_9, VAR_16, VAR_17);
 if (VAR_14)
  return VAR_14;







 if (!FUNC_8(VAR_11, "ibm,dynamic-memory")) {
  int VAR_18;

  VAR_13 = FUNC_3(VAR_13, VAR_12, &VAR_11,
      &VAR_15, &VAR_10);
  if (!VAR_13)
   return -VAR_0;

  if (!FUNC_8(VAR_11, "add"))
   VAR_18 = VAR_4;
  else
   VAR_18 = VAR_5;

  VAR_14 = FUNC_0(&VAR_6,
        VAR_18, VAR_10);
  if (VAR_14 == VAR_3) {
   VAR_14 = FUNC_6(VAR_9, VAR_17, VAR_16);
   return -VAR_2;
  }
 }

 return 0;
}
