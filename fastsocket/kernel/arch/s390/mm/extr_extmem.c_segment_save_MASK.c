
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcss_segment {int start_addr; int end; int segcnt; TYPE_1__* range; } ;
struct TYPE_2__ {int start; int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int ,int*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 struct dcss_segment* FUNC_4 (char*) ;
 int * VAR_3 ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*) ;

void
FUNC_7(char *VAR_4)
{
 struct dcss_segment *VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;
 char VAR_8[160];
 char VAR_9[80];
 int VAR_10, VAR_11;

 if (!VAR_0)
  return;

 FUNC_1(&VAR_2);
 VAR_5 = FUNC_4 (VAR_4);

 if (VAR_5 == ((void*)0)) {
  FUNC_3("Saving unknown DCSS %s failed\n", VAR_4);
  goto out;
 }

 VAR_6 = VAR_5->start_addr >> VAR_1;
 VAR_7 = (VAR_5->end) >> VAR_1;
 FUNC_5(VAR_8, "DEFSEG %s", VAR_4);
 for (VAR_10=0; VAR_10<VAR_5->segcnt; VAR_10++) {
  FUNC_5(VAR_8+FUNC_6(VAR_8), " %lX-%lX %s",
   VAR_5->range[VAR_10].start >> VAR_1,
   VAR_5->range[VAR_10].end >> VAR_1,
   VAR_3[VAR_5->range[VAR_10].start & 0xff]);
 }
 FUNC_5(VAR_9, "SAVESEG %s", VAR_4);
 VAR_11 = 0;
 FUNC_0(VAR_8, ((void*)0), 0, &VAR_11);
 if (VAR_11) {
  FUNC_3("Saving a DCSS failed with DEFSEG response code "
         "%i\n", VAR_11);
  goto out;
 }
 FUNC_0(VAR_9, ((void*)0), 0, &VAR_11);
 if (VAR_11) {
  FUNC_3("Saving a DCSS failed with SAVESEG response code "
         "%i\n", VAR_11);
  goto out;
 }
out:
 FUNC_2(&VAR_2);
}
