
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int dummy; } ;
struct stlpanel {unsigned int nrports; struct stlport** ports; } ;
struct stlbrd {unsigned int nrpanels; struct stlpanel** panels; } ;


 int VAR_0 ;
 struct stlbrd** VAR_1 ;

__attribute__((used)) static struct stlport *FUNC_0(int VAR_2, int VAR_3, int VAR_4)
{
 struct stlbrd *VAR_5;
 struct stlpanel *VAR_6;

 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return ((void*)0);
 VAR_5 = VAR_1[VAR_2];
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 if (VAR_3 < 0 || (unsigned int)VAR_3 >= VAR_5->nrpanels)
  return ((void*)0);
 VAR_6 = VAR_5->panels[VAR_3];
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 if (VAR_4 < 0 || (unsigned int)VAR_4 >= VAR_6->nrports)
  return ((void*)0);
 return VAR_6->ports[VAR_4];
}
