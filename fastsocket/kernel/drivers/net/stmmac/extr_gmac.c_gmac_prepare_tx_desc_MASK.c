
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int first_segment; int buffer1_size; int buffer2_size; int checksum_insertion; } ;
struct TYPE_4__ {TYPE_1__ etx; } ;
struct dma_desc {TYPE_2__ des01; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct dma_desc *VAR_2, int VAR_3, int VAR_4,
     int VAR_5)
{
 VAR_2->des01.etx.first_segment = VAR_3;
 if (FUNC_1(VAR_4 > VAR_0)) {
  VAR_2->des01.etx.buffer1_size = VAR_0;
  VAR_2->des01.etx.buffer2_size = VAR_4 - VAR_0;
 } else {
  VAR_2->des01.etx.buffer1_size = VAR_4;
 }
 if (FUNC_0(VAR_5))
  VAR_2->des01.etx.checksum_insertion = VAR_1;
}
