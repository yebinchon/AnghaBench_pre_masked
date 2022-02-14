
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int blkg; } ;


 TYPE_1__* FUNC_0 (struct request*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct request_queue *VAR_0, struct request *VAR_1,
    struct bio *VAR_2)
{
 FUNC_3(&(FUNC_0(VAR_1))->blkg,
     FUNC_1(VAR_2), FUNC_2(VAR_2));
}
