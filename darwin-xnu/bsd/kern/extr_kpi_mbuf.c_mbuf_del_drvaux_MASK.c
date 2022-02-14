
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct m_tag {int dummy; } ;
typedef TYPE_1__* mbuf_t ;
struct TYPE_5__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct m_tag*) ;
 struct m_tag* FUNC_1 (TYPE_1__*,int ,int ,int *) ;

void
FUNC_2(mbuf_t VAR_3)
{
 struct m_tag *VAR_4;

 if (VAR_3 == ((void*)0) || !(VAR_3->m_flags & VAR_2))
  return;

 if ((VAR_4 = FUNC_1(VAR_3, VAR_0,
     VAR_1, ((void*)0))) != ((void*)0))
  FUNC_0(VAR_3, VAR_4);
}
