
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct property* FUNC_0 (char*,int,unsigned char*,struct property*) ;
 struct device_node* FUNC_1 (char*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (char*,struct property*) ;
 char* FUNC_4 (char*,char*,char**,int*,unsigned char**) ;
 int FUNC_5 (struct property*) ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static int FUNC_7(char *VAR_2, size_t VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 struct device_node *VAR_7;
 struct property *VAR_8 = ((void*)0);
 unsigned char* VAR_9;
 int VAR_10, VAR_11 = 0;

 VAR_5 = VAR_2 + VAR_3;
 VAR_4 = VAR_2;
 VAR_2 = FUNC_6(VAR_2, ' ');
 if (!VAR_2)
  return -VAR_0;
 *VAR_2 = '\0';
 VAR_2++;

 if ((VAR_7 = FUNC_1(VAR_4))) {
  FUNC_2(VAR_7);
  return -VAR_0;
 }


 while (VAR_2 < VAR_5 &&
        (VAR_2 = FUNC_4(VAR_2, VAR_5, &VAR_6, &VAR_10, &VAR_9))) {
  struct property *VAR_12 = VAR_8;

  VAR_8 = FUNC_0(VAR_6, VAR_10, VAR_9, VAR_12);
  if (!VAR_8) {
   VAR_11 = -VAR_1;
   VAR_8 = VAR_12;
   goto out;
  }
 }
 if (!VAR_2) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_3(VAR_4, VAR_8);

out:
 if (VAR_11)
  FUNC_5(VAR_8);
 return VAR_11;
}
