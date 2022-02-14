
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r3964_info {int dummy; } ;
struct r3964_client_info {struct r3964_block_header* next_block_to_read; int pid; } ;
struct r3964_block_header {scalar_t__ locks; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct r3964_info*,struct r3964_block_header*) ;

__attribute__((used)) static void FUNC_3(struct r3964_info *VAR_0,
    struct r3964_client_info *VAR_1)
{
 struct r3964_block_header *VAR_2;

 FUNC_0("remove_client_block PID %d", FUNC_1(VAR_1->pid));

 VAR_2 = VAR_1->next_block_to_read;
 if (VAR_2) {
  VAR_2->locks--;
  if (VAR_2->locks == 0) {
   FUNC_2(VAR_0, VAR_2);
  }
 }
 VAR_1->next_block_to_read = ((void*)0);
}
