
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct encaptabtag {void* arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*,struct m_tag*) ;
 struct m_tag* FUNC_1 (struct mbuf*,int ,int ,int *) ;

void *
FUNC_2(struct mbuf *VAR_2)
{
 struct m_tag *VAR_3;
 struct encaptabtag *VAR_4;
 void *VAR_5 = ((void*)0);

 VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_1, ((void*)0));
 if (VAR_3) {
  VAR_4 = (struct encaptabtag*)(VAR_3 + 1);
  VAR_5 = VAR_4->arg;
  FUNC_0(VAR_2, VAR_3);
 }

 return VAR_5;
}
