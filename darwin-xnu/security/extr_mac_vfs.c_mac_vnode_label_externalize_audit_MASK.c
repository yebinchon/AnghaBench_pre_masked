
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_label; } ;
struct mac {int m_buflen; int m_string; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;

int
FUNC_1(struct vnode *VAR_1, struct mac *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(VAR_0, VAR_1->v_label,
     VAR_2->m_string, VAR_2->m_buflen);

 return (VAR_3);
}
