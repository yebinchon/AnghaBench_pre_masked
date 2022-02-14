
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcom_task {int tasknum; } ;
struct bcom_ata_inc {int incr_src; scalar_t__ incr_dst; int incr_bytes; } ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct bcom_task *VAR_1)
{
 struct bcom_ata_inc *VAR_2;

 VAR_2 = (struct bcom_ata_inc *) FUNC_1(VAR_1->tasknum);

 VAR_2->incr_bytes = -(s16)sizeof(u32);
 VAR_2->incr_src = sizeof(u32);
 VAR_2->incr_dst = 0;

 FUNC_0(VAR_1->tasknum, VAR_0);
}
