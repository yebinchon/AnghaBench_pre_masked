
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int m_numPaths; struct TYPE_5__* m_paths; int m_path; int m_strokePaint; int m_fillPaint; } ;
typedef TYPE_1__ PS ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(PS* VAR_0)
{
 int VAR_1;
 FUNC_0(VAR_0);
 for(VAR_1=0;VAR_1<VAR_0->m_numPaths;VAR_1++)
 {
  FUNC_2(VAR_0->m_paths[VAR_1].m_fillPaint);
  FUNC_2(VAR_0->m_paths[VAR_1].m_strokePaint);
  FUNC_3(VAR_0->m_paths[VAR_1].m_path);
 }
 FUNC_1(VAR_0->m_paths);
 FUNC_1(VAR_0);
}
