
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stliport {int dummy; } ;
struct stlibrd {scalar_t__ state; unsigned int nrports; struct stliport** ports; } ;
struct seq_file {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ) ;
 struct stlibrd** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct seq_file*,struct stlibrd*,struct stliport*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_5, void *VAR_6)
{
 struct stlibrd *VAR_7;
 struct stliport *VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;

 VAR_11 = 0;

 FUNC_0(VAR_5, "%s: version %s\n", VAR_2, VAR_3);





 for (VAR_9 = 0; (VAR_9 < VAR_4); VAR_9++) {
  VAR_7 = VAR_1[VAR_9];
  if (VAR_7 == ((void*)0))
   continue;
  if (VAR_7->state == 0)
   continue;

  VAR_11 = VAR_9 * VAR_0;
  for (VAR_10 = 0; (VAR_10 < VAR_7->nrports); VAR_10++,
      VAR_11++) {
   VAR_8 = VAR_7->ports[VAR_10];
   if (VAR_8 == ((void*)0))
    continue;
   FUNC_1(VAR_5, VAR_7, VAR_8, VAR_11);
  }
 }
 return 0;
}
