
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
struct persona {int pna_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 struct persona* FUNC_1 () ;
 int FUNC_2 (struct persona*) ;

__attribute__((used)) static int FUNC_3(user_addr_t VAR_1)
{
 int VAR_2;
 struct persona *VAR_3 = FUNC_1();

 if (!VAR_3)
  return VAR_0;

 VAR_2 = FUNC_0(&VAR_3->pna_id, VAR_1, sizeof(VAR_3->pna_id));
 FUNC_2(VAR_3);

 return VAR_2;
}
