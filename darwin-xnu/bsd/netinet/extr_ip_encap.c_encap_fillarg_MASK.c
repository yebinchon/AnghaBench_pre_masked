
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct encaptabtag {int arg; } ;
struct encaptab {int arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct m_tag* FUNC_0 (int ,int ,int,int ,struct mbuf*) ;
 int FUNC_1 (struct mbuf*,struct m_tag*) ;

__attribute__((used)) static void
FUNC_2(
 struct mbuf *VAR_3,
 const struct encaptab *VAR_4)
{
 struct m_tag *VAR_5;
 struct encaptabtag *VAR_6;

 VAR_5 = FUNC_0(VAR_0, VAR_1,
       sizeof(struct encaptabtag), VAR_2, VAR_3);

 if (VAR_5 != ((void*)0)) {
  VAR_6 = (struct encaptabtag*)(VAR_5 + 1);
  VAR_6->arg = VAR_4->arg;
  FUNC_1(VAR_3, VAR_5);
 }
}
