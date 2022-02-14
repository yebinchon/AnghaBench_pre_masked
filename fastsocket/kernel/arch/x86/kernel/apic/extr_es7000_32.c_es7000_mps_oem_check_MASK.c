
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc_table {scalar_t__ oemptr; } ;
struct mpc_oemtable {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct mpc_table *VAR_1, char *VAR_2,
  char *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_1->oemptr) {
  struct mpc_oemtable *VAR_5 =
   (struct mpc_oemtable *)VAR_1->oemptr;

  if (!FUNC_2(VAR_2, "UNISYS", 6))
   VAR_4 = FUNC_1((char *)VAR_5);
 }

 VAR_0 = VAR_4;

 return VAR_4 && !FUNC_0();
}
