
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct m_pool {int nump; } ;
typedef int m_bush_t ;


 int FUNC_0 (struct m_pool*) ;
 struct m_pool* FUNC_1 (int ) ;
 int FUNC_2 (struct m_pool*,void*,int,char*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(m_bush_t VAR_1, void *VAR_2, int VAR_3, char *VAR_4)
{
 u_long VAR_5;
 struct m_pool *VAR_6;

 FUNC_3(&VAR_0, VAR_5);
 VAR_6 = FUNC_1(VAR_1);
 if (VAR_6)
  FUNC_2(VAR_6, VAR_2, VAR_3, VAR_4);
 if (VAR_6 && !VAR_6->nump)
  FUNC_0(VAR_6);
 FUNC_4(&VAR_0, VAR_5);
}
