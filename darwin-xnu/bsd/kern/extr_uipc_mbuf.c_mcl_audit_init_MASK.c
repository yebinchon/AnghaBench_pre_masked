
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int64_t ;
struct TYPE_9__ {size_t mca_contents_size; struct TYPE_9__* mca_next; struct TYPE_9__* mca_contents; } ;
typedef TYPE_1__ mcl_saved_contents_t ;
struct TYPE_10__ {struct TYPE_10__* obj_next; } ;
typedef TYPE_2__ mcache_obj_t ;
typedef TYPE_1__ mcache_audit_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {TYPE_1__** cl_audit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 unsigned int FUNC_2 (void*) ;
 unsigned int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 unsigned int VAR_1 ;
 TYPE_4__* VAR_2 ;

__attribute__((used)) static void
FUNC_5(void *VAR_3, mcache_audit_t **VAR_4,
    mcache_obj_t **VAR_5, size_t VAR_6, unsigned int VAR_7)
{
 mcache_audit_t *VAR_8, *VAR_9;
 mcache_obj_t *VAR_10 = ((void*)0);
 boolean_t VAR_11 = (VAR_5 != ((void*)0));
 unsigned int VAR_12, VAR_13;

 FUNC_0(VAR_7 <= VAR_0);
 FUNC_0(VAR_5 == ((void*)0) || VAR_6 != 0);

 VAR_13 = FUNC_2(VAR_3);
 FUNC_3(VAR_13 < VAR_1);


 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
  FUNC_3(VAR_2[VAR_13].cl_audit[VAR_12] == ((void*)0));

 VAR_8 = VAR_9 = *VAR_4;
 if (VAR_11)
  VAR_10 = *VAR_5;

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  mcache_audit_t *VAR_14;

  VAR_14 = VAR_8->mca_next;
  FUNC_4(VAR_8, sizeof (*VAR_8));
  VAR_8->mca_next = VAR_14;
  VAR_2[VAR_13].cl_audit[VAR_12] = VAR_8;


  if (VAR_11) {
   mcl_saved_contents_t *VAR_15 =
       (mcl_saved_contents_t *)(void *)VAR_10;

   FUNC_3(VAR_15 != ((void*)0));
   FUNC_3(FUNC_1(VAR_15, sizeof (u_int64_t)));
   FUNC_3(VAR_6 == sizeof (*VAR_15));
   VAR_8->mca_contents_size = VAR_6;
   VAR_8->mca_contents = VAR_15;
   VAR_10 = VAR_10->obj_next;
   FUNC_4(VAR_8->mca_contents, VAR_8->mca_contents_size);
  }

  VAR_9 = VAR_8;
  VAR_8 = VAR_8->mca_next;
 }

 if (VAR_11)
  *VAR_5 = VAR_10;

 *VAR_4 = VAR_9->mca_next;
 VAR_9->mca_next = ((void*)0);
}
