
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct txdone_entry_desc {scalar_t__ retry; scalar_t__ flags; } ;
struct queue_entry {int dummy; } ;


 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (struct queue_entry*,struct txdone_entry_desc*) ;

void FUNC_2(struct queue_entry *VAR_0, u32 VAR_1)
{
 struct txdone_entry_desc VAR_2;

 VAR_2.flags = 0;
 FUNC_0(VAR_1, &VAR_2.flags);
 VAR_2.retry = 0;

 FUNC_1(VAR_0, &VAR_2);
}
