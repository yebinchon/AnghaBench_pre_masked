
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ state; int dram_addr; int dram_len; scalar_t__ dram_maddr; int resume_vec; int init_vec; int iram_addr; int iram_len; scalar_t__ iram_maddr; } ;
typedef TYPE_1__ dsptask_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(dsptask_t *VAR_1,dsptask_t *VAR_2)
{
 if(!VAR_1) {
  FUNC_1(0);
  while(FUNC_0());
  FUNC_1(0);
  while(FUNC_0());
  FUNC_1(0);
  while(FUNC_0());
 } else {
  FUNC_1((u32)VAR_1->dram_maddr);
  while(FUNC_0());
  FUNC_1(VAR_1->dram_len);
  while(FUNC_0());
  FUNC_1(VAR_1->dram_addr);
  while(FUNC_0());
 }

 FUNC_1((u32)VAR_2->iram_maddr);
 while(FUNC_0());
 FUNC_1(VAR_2->iram_len);
 while(FUNC_0());
 FUNC_1(VAR_2->iram_addr);
 while(FUNC_0());
 if(VAR_2->state==VAR_0) {
  FUNC_1(VAR_2->init_vec);
  while(FUNC_0());
  FUNC_1(0);
  while(FUNC_0());
  FUNC_1(0);
  while(FUNC_0());
  FUNC_1(0);
  while(FUNC_0());
  return;
 }

 FUNC_1(VAR_2->resume_vec);
 while(FUNC_0());

 FUNC_1((u32)VAR_2->dram_maddr);
 while(FUNC_0());
 FUNC_1(VAR_2->dram_len);
 while(FUNC_0());
 FUNC_1(VAR_2->dram_addr);
 while(FUNC_0());
}
