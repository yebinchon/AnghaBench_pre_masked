
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vnode_t ;
typedef int uint64_t ;
typedef scalar_t__ time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,void*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4(vnode_t VAR_5, time_t VAR_6, uint64_t VAR_7, void *VAR_8)
{
 int VAR_9 = 0;

 if (VAR_5 == ((void*)0)) {
  return 0;
 }


 if (FUNC_2(VAR_5)) {
  return 0;
 }

 if (VAR_6 != 0 && VAR_4 != 0 && (VAR_6 <= VAR_4 || FUNC_3(VAR_5))) {

  int VAR_10;

  VAR_10 = FUNC_1(VAR_5, VAR_7 | VAR_3, VAR_8);
  if (VAR_10 == VAR_1) {
   VAR_9 = 0;
  } else if (VAR_10) {
   if (VAR_10 == VAR_0) {
    FUNC_0("nspace_snapshot_event: timed out waiting for namespace handler...\n");
   } else if (VAR_10 == VAR_2) {

    VAR_9 = VAR_2;
   }
  }
 }

 return VAR_9;
}
