
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct quakefile_s {int filename; int * pakfile; } ;
struct TYPE_2__ {scalar_t__ numclusters; scalar_t__ reachabilitysize; int bspchecksum; } ;


 scalar_t__ FUNC_0 (float) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ,int *) ;
 int FUNC_11 (char*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_12 (int *,int ) ;
 int VAR_2 ;

void FUNC_13(struct quakefile_s *VAR_3)
{
 float VAR_4;

 FUNC_11("loading collision map...\n");

 if (!VAR_3->pakfile[0]) FUNC_12(VAR_3->pakfile, VAR_3->filename);

 FUNC_10((char *) VAR_3, VAR_1, &VAR_0.bspchecksum);

 VAR_2 = FUNC_9(0);

 FUNC_3();

 FUNC_7();

 FUNC_6();

 FUNC_1();

 FUNC_2();

 VAR_0.reachabilitysize = 0;
 VAR_0.numclusters = 0;

 FUNC_8();

 FUNC_5();
 VAR_4 = 0;
 while(FUNC_0(VAR_4)) VAR_4++;

 FUNC_4();
}
