
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (char*,int ) ;
 char* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 char VAR_6[100];

 if (VAR_4 && !VAR_3) {
  FUNC_1(VAR_6, "%s/corrupt-pfn", VAR_1);
  VAR_3 = FUNC_0(VAR_6, VAR_0);
 }

 if (VAR_5 && !VAR_2) {
  FUNC_1(VAR_6, "%s/unpoison-pfn", VAR_1);
  VAR_2 = FUNC_0(VAR_6, VAR_0);
 }
}
