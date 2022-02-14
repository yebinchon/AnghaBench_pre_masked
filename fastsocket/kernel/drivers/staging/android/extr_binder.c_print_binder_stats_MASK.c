
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_stats {int* bc; int* br; int* obj_created; int* obj_deleted; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_2 (char*,int,char*,char const*,int,int,...) ;

__attribute__((used)) static char *FUNC_3(char *VAR_3, char *VAR_4, const char *VAR_5,
    struct binder_stats *VAR_6)
{
 int VAR_7;

 FUNC_1(FUNC_0(VAR_6->bc) !=
   FUNC_0(VAR_0));
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6->bc); VAR_7++) {
  if (VAR_6->bc[VAR_7])
   VAR_3 += FUNC_2(VAR_3, VAR_4 - VAR_3, "%s%s: %d\n", VAR_5,
     VAR_0[VAR_7],
     VAR_6->bc[VAR_7]);
  if (VAR_3 >= VAR_4)
   return VAR_3;
 }

 FUNC_1(FUNC_0(VAR_6->br) !=
   FUNC_0(VAR_2));
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6->br); VAR_7++) {
  if (VAR_6->br[VAR_7])
   VAR_3 += FUNC_2(VAR_3, VAR_4 - VAR_3, "%s%s: %d\n", VAR_5,
     VAR_2[VAR_7], VAR_6->br[VAR_7]);
  if (VAR_3 >= VAR_4)
   return VAR_3;
 }

 FUNC_1(FUNC_0(VAR_6->obj_created) !=
   FUNC_0(VAR_1));
 FUNC_1(FUNC_0(VAR_6->obj_created) !=
   FUNC_0(VAR_6->obj_deleted));
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6->obj_created); VAR_7++) {
  if (VAR_6->obj_created[VAR_7] || VAR_6->obj_deleted[VAR_7])
   VAR_3 += FUNC_2(VAR_3, VAR_4 - VAR_3,
     "%s%s: active %d total %d\n", VAR_5,
     VAR_1[VAR_7],
     VAR_6->obj_created[VAR_7] -
      VAR_6->obj_deleted[VAR_7],
     VAR_6->obj_created[VAR_7]);
  if (VAR_3 >= VAR_4)
   return VAR_3;
 }
 return VAR_3;
}
