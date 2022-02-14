
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_chip {int dummy; } ;
typedef int buffer ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (struct zd_chip*,char*,int) ;
 int FUNC_2 (struct zd_chip*) ;

__attribute__((used)) static void FUNC_3(struct zd_chip *VAR_0)
{
 char VAR_1[80];

 FUNC_1(VAR_0, VAR_1, sizeof(VAR_1));
 VAR_1[sizeof(VAR_1)-1] = 0;
 FUNC_0(FUNC_2(VAR_0), "%s\n", VAR_1);
}
