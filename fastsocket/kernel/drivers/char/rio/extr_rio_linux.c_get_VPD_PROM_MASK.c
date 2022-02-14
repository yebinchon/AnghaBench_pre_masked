
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpd_prom {int dummy; } ;
struct Host {scalar_t__ Caddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static struct vpd_prom *FUNC_5(struct Host *VAR_3)
{
 static struct vpd_prom VAR_4;
 char *VAR_5;
 int VAR_6;

 FUNC_0();
 FUNC_4(VAR_0, "Going to verify vpd prom at %p.\n", VAR_3->Caddr + VAR_1);

 VAR_5 = (char *) &VAR_4;
 for (VAR_6 = 0; VAR_6 < sizeof(struct vpd_prom); VAR_6++)
  *VAR_5++ = FUNC_3(VAR_3->Caddr + VAR_1 + VAR_6 * 2);




 *VAR_5++ = 0;

 if (VAR_2 & VAR_0)
  FUNC_2((char *) &VAR_4, 0x20);

 FUNC_1();

 return &VAR_4;
}
