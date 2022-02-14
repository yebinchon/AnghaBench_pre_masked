
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; int member_2; } ;
typedef TYPE_1__ vec3_t ;
struct quakefile_s {int filename; } ;
struct TYPE_6__ {int numbrushes; } ;
struct TYPE_5__ {scalar_t__ numsides; int maxs; int mins; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct quakefile_s*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int* VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

void FUNC_7(struct quakefile_s *VAR_10)
{
 int VAR_11;
 vec3_t VAR_12 = {-1,-1,-1}, VAR_13 = {1, 1, 1};

 FUNC_3("-- Q3_LoadMapFromBSP --\n");

 VAR_4 = VAR_0;

 FUNC_3("Loading map from %s...\n", VAR_10->filename);

 FUNC_4(VAR_10);




 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  VAR_2[VAR_11] = -1;

 VAR_9 = 0;
 VAR_8 = 0;

 FUNC_6();

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
 {
  FUNC_5(VAR_11);
 }

 FUNC_0();

 FUNC_2(VAR_6, VAR_5);
 for (VAR_11 = 0; VAR_11 < VAR_3[0].numbrushes; VAR_11++)
 {
  if (VAR_7[VAR_11].numsides <= 0)
   continue;
  FUNC_1 (VAR_7[VAR_11].mins, VAR_6, VAR_5);
  FUNC_1 (VAR_7[VAR_11].maxs, VAR_6, VAR_5);
 }
}
