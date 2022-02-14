
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror_set {int nr_mirrors; int * mirror; } ;
struct dm_region {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct dm_region*,int) ;
 struct mirror_set* FUNC_2 (struct dm_region*) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (struct mirror_set*) ;
 scalar_t__ FUNC_5 (int,unsigned long*) ;

__attribute__((used)) static void FUNC_6(int VAR_1, unsigned long VAR_2,
         void *VAR_3)
{
 struct dm_region *VAR_4 = VAR_3;
 struct mirror_set *VAR_5 = FUNC_2(VAR_4);
 int VAR_6, VAR_7 = 0;

 if (VAR_1) {

  FUNC_0("Unable to read primary mirror during recovery");
  FUNC_3(FUNC_4(VAR_5), VAR_0);
 }

 if (VAR_2) {
  FUNC_0("Write error during recovery (error = 0x%lx)",
       VAR_2);




  for (VAR_6 = 0; VAR_6 < VAR_5->nr_mirrors; VAR_6++) {
   if (&VAR_5->mirror[VAR_6] == FUNC_4(VAR_5))
    continue;
   if (FUNC_5(VAR_7, &VAR_2))
    FUNC_3(VAR_5->mirror + VAR_6,
         VAR_0);
   VAR_7++;
  }
 }

 FUNC_1(VAR_4, !(VAR_1 || VAR_2));
}
