
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diag2fc_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,char*,void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static void *FUNC_4(char *VAR_2, unsigned int *VAR_3, int VAR_4)
{
 void *VAR_5;
 int VAR_6;

 do {
  VAR_6 = FUNC_1(0, VAR_2, ((void*)0));
  if (VAR_6 < 0)
   return FUNC_0(-VAR_0);
  VAR_5 = FUNC_3(VAR_6 + VAR_4);
  if (!VAR_5)
   return FUNC_0(-VAR_1);
  if (FUNC_1(VAR_6, VAR_2, VAR_5 + VAR_4) == 0)
   break;
  FUNC_2(VAR_5);
 } while (1);
 *VAR_3 = (VAR_6 / sizeof(struct diag2fc_data));

 return VAR_5;
}
