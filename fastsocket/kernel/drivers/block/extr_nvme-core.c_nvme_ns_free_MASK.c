
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ns {int queue; TYPE_1__* disk; } ;
struct TYPE_2__ {int first_minor; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_ns*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct nvme_ns *VAR_1)
{
 int VAR_2 = VAR_1->disk->first_minor / VAR_0;
 FUNC_3(VAR_1->disk);
 FUNC_2(VAR_2);
 FUNC_0(VAR_1->queue);
 FUNC_1(VAR_1);
}
