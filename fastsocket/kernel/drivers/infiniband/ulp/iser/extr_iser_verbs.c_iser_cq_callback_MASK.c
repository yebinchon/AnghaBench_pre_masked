
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_device {int * cq_tasklet; } ;
struct iser_cq_desc {int cq_index; struct iser_device* device; } ;
struct ib_cq {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ib_cq *VAR_0, void *VAR_1)
{
 struct iser_cq_desc *VAR_2 = (struct iser_cq_desc *)VAR_1;
 struct iser_device *VAR_3 = VAR_2->device;
 int VAR_4 = VAR_2->cq_index;

 FUNC_0(&VAR_3->cq_tasklet[VAR_4]);
}
