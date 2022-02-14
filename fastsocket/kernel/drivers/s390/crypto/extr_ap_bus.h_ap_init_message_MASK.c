
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_message {int * receive; scalar_t__ special; scalar_t__ length; scalar_t__ psmid; } ;



__attribute__((used)) static inline void FUNC_0(struct ap_message *VAR_0)
{
 VAR_0->psmid = 0;
 VAR_0->length = 0;
 VAR_0->special = 0;
 VAR_0->receive = ((void*)0);
}
