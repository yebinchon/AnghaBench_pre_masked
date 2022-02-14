
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int * cpdata; struct tape_request* cpaddr; } ;
struct ccw1 {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,...) ;
 int VAR_0 ;
 struct tape_request* FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tape_request* FUNC_4 (int,int,int) ;
 int FUNC_5 (struct tape_request*) ;
 void* FUNC_6 (int,int) ;

struct tape_request *
FUNC_7(int VAR_5, int VAR_6)
{
 struct tape_request *VAR_7;

 FUNC_0(VAR_6 > VAR_4 || (VAR_5*sizeof(struct ccw1)) > VAR_4);

 FUNC_2(6, "tape_alloc_request(%d, %d)\n", VAR_5, VAR_6);

 VAR_7 = FUNC_6(sizeof(struct tape_request), VAR_3);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(1, "cqra nomem\n");
  return FUNC_3(-VAR_0);
 }

 if (VAR_5 > 0) {
  VAR_7->cpaddr = FUNC_4(VAR_5, sizeof(struct ccw1),
       VAR_1 | VAR_2);
  if (VAR_7->cpaddr == ((void*)0)) {
   FUNC_1(1, "cqra nomem\n");
   FUNC_5(VAR_7);
   return FUNC_3(-VAR_0);
  }
 }

 if (VAR_6 > 0) {
  VAR_7->cpdata = FUNC_6(VAR_6, VAR_3 | VAR_2);
  if (VAR_7->cpdata == ((void*)0)) {
   FUNC_1(1, "cqra nomem\n");
   FUNC_5(VAR_7->cpaddr);
   FUNC_5(VAR_7);
   return FUNC_3(-VAR_0);
  }
 }
 FUNC_2(6, "New request %p(%p/%p)\n", VAR_7, VAR_7->cpaddr,
  VAR_7->cpdata);

 return VAR_7;
}
