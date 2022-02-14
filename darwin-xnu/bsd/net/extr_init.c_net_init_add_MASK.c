
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct init_list_entry {scalar_t__ next; scalar_t__ func; } ;
typedef scalar_t__ net_init_func_ptr ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,struct init_list_entry*,scalar_t__*) ;
 int FUNC_1 (struct init_list_entry*,int) ;
 struct init_list_entry* FUNC_2 (int) ;
 int FUNC_3 (struct init_list_entry*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*) ;

errno_t
FUNC_5(
 net_init_func_ptr VAR_5)
{
 struct init_list_entry *VAR_6;

 if (VAR_5 == 0) {
  return VAR_1;
 }


 if (VAR_4 == VAR_3) {
  return VAR_0;
 }

 VAR_6 = FUNC_2(sizeof(*VAR_6));
 if (VAR_6 == 0) {
  FUNC_4("net_init_add: no memory\n");
  return VAR_2;
 }

 FUNC_1(VAR_6, sizeof(*VAR_6));
 VAR_6->func = VAR_5;

 do {
  VAR_6->next = VAR_4;

  if (VAR_6->next == VAR_3) {

   FUNC_3(VAR_6, sizeof(*VAR_6));
   return VAR_0;
  }
 } while(!FUNC_0(VAR_6->next, VAR_6, &VAR_4));

 return 0;
}
