
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pstore {TYPE_1__* store; int area; } ;
struct TYPE_2__ {int chunk_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct pstore *VAR_1)
{
 FUNC_0(VAR_1->area, 0, VAR_1->store->chunk_size << VAR_0);
}
