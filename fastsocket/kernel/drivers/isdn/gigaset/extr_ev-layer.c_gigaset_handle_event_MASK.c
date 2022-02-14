
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cardstate {TYPE_2__* inbuf; TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ head; scalar_t__ tail; } ;
struct TYPE_3__ {int (* handle_input ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cardstate*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(unsigned long VAR_1)
{
 struct cardstate *VAR_2 = (struct cardstate *) VAR_1;


 if (VAR_2->inbuf->head != VAR_2->inbuf->tail) {
  FUNC_0(VAR_0, "processing new data");
  VAR_2->ops->handle_input(VAR_2->inbuf);
 }

 FUNC_1(VAR_2);
}
