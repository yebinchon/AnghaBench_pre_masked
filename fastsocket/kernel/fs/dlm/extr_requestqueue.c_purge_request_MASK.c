
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_message {int m_type; int m_hash; } ;
struct dlm_ls {int ls_count; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct dlm_ls*,int ) ;
 scalar_t__ FUNC_1 (struct dlm_ls*,int) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct dlm_ls *VAR_3, struct dlm_message *VAR_4, int VAR_5)
{
 uint32_t VAR_6 = VAR_4->m_type;


 if (!VAR_3->ls_count)
  return 1;

 if (FUNC_1(VAR_3, VAR_5))
  return 1;




 if (VAR_6 == VAR_2 ||
     VAR_6 == VAR_0 ||
     VAR_6 == VAR_1)
  return 1;

 if (!FUNC_2(VAR_3))
  return 0;




 switch (VAR_6) {
 case 131:
 case 134:
 case 129:
 case 136:



  if (FUNC_0(VAR_3, VAR_4->m_hash) != FUNC_3())
   return 1;
  break;

 case 130:
 case 133:
 case 128:
 case 135:
 case 132:



  if (FUNC_0(VAR_3, VAR_4->m_hash) != VAR_5)
   return 1;
  break;
 }

 return 0;
}
