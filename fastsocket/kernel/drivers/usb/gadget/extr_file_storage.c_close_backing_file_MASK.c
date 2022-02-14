
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lun {int * filp; } ;


 int FUNC_0 (struct lun*,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct lun *VAR_0)
{
 if (VAR_0->filp) {
  FUNC_0(VAR_0, "close backing file\n");
  FUNC_1(VAR_0->filp);
  VAR_0->filp = ((void*)0);
 }
}
