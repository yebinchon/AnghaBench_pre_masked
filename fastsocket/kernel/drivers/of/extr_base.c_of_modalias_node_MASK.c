
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_3__ {char* of_device; char const* modalias; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct device_node*,char const*) ;
 char* FUNC_2 (struct device_node*,char*,int*) ;
 TYPE_1__* VAR_1 ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char*,char const*,int) ;

int FUNC_5(struct device_node *VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 const char *VAR_7;
 const char *VAR_8;


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_7 = VAR_1[VAR_5].of_device;
  if (!FUNC_1(VAR_2, VAR_7))
   continue;
  FUNC_4(VAR_3, VAR_1[VAR_5].modalias, VAR_4);
  return 0;
 }

 VAR_7 = FUNC_2(VAR_2, "compatible", &VAR_6);
 if (!VAR_7)
  return -VAR_0;


 VAR_8 = FUNC_3(VAR_7, ',');
 if (!VAR_8)
  return -VAR_0;
 VAR_8++;
 FUNC_4(VAR_3, VAR_8, VAR_4);
 return 0;
}
