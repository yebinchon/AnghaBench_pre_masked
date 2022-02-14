
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int orig_nents; int nents; struct scatterlist* sgl; } ;
struct scatterlist {int dummy; } ;
struct TYPE_4__ {int pcidev; } ;
struct TYPE_3__ {scalar_t__ page_count; } ;


 int FUNC_0 (char*,unsigned long) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,struct scatterlist*,int,int ) ;
 int FUNC_2 (struct sg_table*) ;

__attribute__((used)) static void FUNC_3(struct scatterlist *VAR_3, int VAR_4)
{
 struct sg_table VAR_5;
 FUNC_0("try unmapping %lu pages\n", (unsigned long)VAR_2->page_count);

 FUNC_1(VAR_1.pcidev, VAR_3,
       VAR_4, VAR_0);

 VAR_5.sgl = VAR_3;
 VAR_5.orig_nents = VAR_5.nents = VAR_4;

 FUNC_2(&VAR_5);
}
