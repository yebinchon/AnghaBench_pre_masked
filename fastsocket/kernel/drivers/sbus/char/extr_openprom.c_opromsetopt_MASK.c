
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openpromio {char* oprom_array; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ,char*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_1, struct openpromio *VAR_2, int VAR_3)
{
 char *VAR_4 = VAR_2->oprom_array + FUNC_1(VAR_2->oprom_array) + 1;
 int VAR_5 = VAR_2->oprom_array + VAR_3 - VAR_4;

 return FUNC_0(VAR_0, VAR_2->oprom_array, VAR_4, VAR_5);
}
