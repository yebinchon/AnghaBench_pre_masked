
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int bio; int q; int nr_phys_segments; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct request *VAR_0)
{
 VAR_0->nr_phys_segments = FUNC_0(VAR_0->q, VAR_0->bio);
}
