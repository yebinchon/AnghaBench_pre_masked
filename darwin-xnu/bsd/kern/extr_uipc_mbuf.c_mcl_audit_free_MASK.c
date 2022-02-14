
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int mcache_obj_t ;
struct TYPE_3__ {scalar_t__ mca_contents; } ;
typedef TYPE_1__ mcache_audit_t ;
struct TYPE_4__ {TYPE_1__** cl_audit; } ;


 unsigned int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void
FUNC_4(void *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7;
 mcache_audit_t *VAR_8, *VAR_9;

 VAR_7 = FUNC_0(VAR_4);
 FUNC_1(VAR_7 < VAR_0);

 if (VAR_3[VAR_7].cl_audit[0] != ((void*)0)) {
  VAR_9 = VAR_3[VAR_7].cl_audit[0];
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_8 = VAR_3[VAR_7].cl_audit[VAR_6];
   VAR_3[VAR_7].cl_audit[VAR_6] = ((void*)0);
   if (VAR_8->mca_contents)
    FUNC_2(VAR_2,
        VAR_8->mca_contents);
  }
  FUNC_3(VAR_1,
      (mcache_obj_t *)VAR_9);
 }
}
