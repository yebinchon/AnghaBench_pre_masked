
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct desc_ptr {int dummy; } ;


 int FUNC_0 (char*,void*,struct desc_ptr) ;
 int FUNC_1 (void*,char*,unsigned long) ;
 int FUNC_2 (struct desc_ptr*) ;
 int FUNC_3 (struct desc_ptr*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct desc_ptr VAR_1;
 unsigned long VAR_2;


 FUNC_3((struct desc_ptr *)&VAR_1);
 FUNC_0("IDT", VAR_0, VAR_1);


 FUNC_2((struct desc_ptr *)&VAR_1);
 FUNC_0("GDT", VAR_0, VAR_1);


 FUNC_4(VAR_2);
 FUNC_1(VAR_0, " LDT\t: %016lx\n", VAR_2);


 FUNC_5(VAR_2);
 FUNC_1(VAR_0, " TR\t: %016lx\n", VAR_2);
}
