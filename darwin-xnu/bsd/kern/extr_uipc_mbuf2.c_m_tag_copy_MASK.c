
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_tag {scalar_t__ m_tag_id; scalar_t__ m_tag_type; int m_tag_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct m_tag*,struct m_tag*,int ) ;
 struct m_tag* FUNC_2 (scalar_t__,scalar_t__,int ,int) ;
 int FUNC_3 (struct m_tag*) ;
 int FUNC_4 (struct m_tag*,struct m_tag*) ;
 scalar_t__ FUNC_5 (struct m_tag*,int) ;

struct m_tag *
FUNC_6(struct m_tag *VAR_2, int VAR_3)
{
 struct m_tag *VAR_4;

 FUNC_0(VAR_2 != ((void*)0));

 VAR_4 = FUNC_2(VAR_2->m_tag_id, VAR_2->m_tag_type, VAR_2->m_tag_len, VAR_3);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 FUNC_1(VAR_2 + 1, VAR_4 + 1, VAR_2->m_tag_len);
 return (VAR_4);
}
