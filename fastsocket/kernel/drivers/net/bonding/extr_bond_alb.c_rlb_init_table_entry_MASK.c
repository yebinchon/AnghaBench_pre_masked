
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlb_client_info {void* prev; void* next; } ;


 void* VAR_0 ;
 int FUNC_0 (struct rlb_client_info*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct rlb_client_info *VAR_1)
{
 FUNC_0(VAR_1, 0, sizeof(struct rlb_client_info));
 VAR_1->next = VAR_0;
 VAR_1->prev = VAR_0;
}
