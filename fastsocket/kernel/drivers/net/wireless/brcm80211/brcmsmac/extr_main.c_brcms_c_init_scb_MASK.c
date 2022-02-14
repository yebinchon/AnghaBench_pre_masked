
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scb {int flags; int* seqctl; int seqctl_nonqos; int magic; scalar_t__* seqnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scb*,int ,int) ;

void FUNC_1(struct scb *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4, 0, sizeof(struct scb));
 VAR_4->flags = VAR_3 | VAR_1;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4->seqnum[VAR_5] = 0;
  VAR_4->seqctl[VAR_5] = 0xFFFF;
 }

 VAR_4->seqctl_nonqos = 0xFFFF;
 VAR_4->magic = VAR_2;
}
