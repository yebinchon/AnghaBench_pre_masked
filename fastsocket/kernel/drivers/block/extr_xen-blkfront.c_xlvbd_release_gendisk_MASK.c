
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct blkfront_info {TYPE_1__* gd; int * rq; int callback; } ;
struct TYPE_3__ {unsigned int first_minor; unsigned int minors; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct blkfront_info *VAR_1)
{
 unsigned int VAR_2, VAR_3;
 unsigned long VAR_4;

 if (VAR_1->rq == ((void*)0))
  return;

 FUNC_6(&VAR_0, VAR_4);


 FUNC_1(VAR_1->rq);


 FUNC_4(&VAR_1->callback);
 FUNC_7(&VAR_0, VAR_4);


 FUNC_3();

 FUNC_2(VAR_1->gd);

 VAR_2 = VAR_1->gd->first_minor;
 VAR_3 = VAR_1->gd->minors;
 FUNC_8(VAR_2, VAR_3);

 FUNC_0(VAR_1->rq);
 VAR_1->rq = ((void*)0);

 FUNC_5(VAR_1->gd);
 VAR_1->gd = ((void*)0);
}
