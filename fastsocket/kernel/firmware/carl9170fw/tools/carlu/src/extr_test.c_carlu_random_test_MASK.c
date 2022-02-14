
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct carlu {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (struct carlu*,int ,int,int*) ;
 int FUNC_2 (char*,...) ;

int FUNC_3(struct carlu *VAR_1)
{
 uint32_t VAR_2[4096];
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_0, sizeof(VAR_2), VAR_2);
 if (VAR_3)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
  FUNC_2("%.2x %.2x ", VAR_2[VAR_4] & 0xff, VAR_2[VAR_4] >> 8);

 FUNC_2("\n");
}
