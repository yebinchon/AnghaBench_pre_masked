
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_hba {int hba_flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct se_hba *VAR_1,
    char *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->hba_flags & VAR_0)
  VAR_3 = 1;

 return FUNC_0(VAR_2, "%d\n", VAR_3);
}
