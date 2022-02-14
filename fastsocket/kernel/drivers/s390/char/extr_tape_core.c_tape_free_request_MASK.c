
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {struct tape_request* cpaddr; struct tape_request* cpdata; int * device; } ;


 int FUNC_0 (int,char*,struct tape_request*) ;
 int FUNC_1 (struct tape_request*) ;
 int * FUNC_2 (int *) ;

void
FUNC_3 (struct tape_request * VAR_0)
{
 FUNC_0(6, "Free request %p\n", VAR_0);

 if (VAR_0->device != ((void*)0)) {
  VAR_0->device = FUNC_2(VAR_0->device);
 }
 FUNC_1(VAR_0->cpdata);
 FUNC_1(VAR_0->cpaddr);
 FUNC_1(VAR_0);
}
