
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int iram_addr; int iram_len; int init_vec; scalar_t__ iram_maddr; } ;
typedef TYPE_1__ dsptask_t ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(dsptask_t *VAR_0)
{
 u32 VAR_1;
 while(!FUNC_0());
 VAR_1 = FUNC_2();
 FUNC_3(0x80F3A001);
 while(FUNC_1());
 FUNC_3((u32)VAR_0->iram_maddr);
 while(FUNC_1());
 FUNC_3(0x80F3C002);
 while(FUNC_1());
 FUNC_3((VAR_0->iram_addr&0xffff));
 while(FUNC_1());
 FUNC_3(0x80F3A002);
 while(FUNC_1());
 FUNC_3(VAR_0->iram_len);
 while(FUNC_1());
 FUNC_3(0x80F3B002);
 while(FUNC_1());
 FUNC_3(0);
 while(FUNC_1());
 FUNC_3(0x80F3D001);
 while(FUNC_1());
 FUNC_3(VAR_0->init_vec);
 while(FUNC_1());
}
