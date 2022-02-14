
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct s2io_nic {int num_entries; int pdev; TYPE_1__* s2io_entries; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ in_use; int vector; void* arg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct s2io_nic *VAR_1)
{
 int VAR_2;
 u16 VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_entries; VAR_2++) {
  if (VAR_1->s2io_entries[VAR_2].in_use == VAR_0) {
   int VAR_4 = VAR_1->entries[VAR_2].vector;
   void *VAR_5 = VAR_1->s2io_entries[VAR_2].arg;
   FUNC_0(VAR_4, VAR_5);
  }
 }

 FUNC_1(VAR_1->entries);
 FUNC_1(VAR_1->s2io_entries);
 VAR_1->entries = ((void*)0);
 VAR_1->s2io_entries = ((void*)0);

 FUNC_3(VAR_1->pdev, 0x42, &VAR_3);
 VAR_3 &= 0xFFFE;
 FUNC_4(VAR_1->pdev, 0x42, VAR_3);

 FUNC_2(VAR_1->pdev);
}
