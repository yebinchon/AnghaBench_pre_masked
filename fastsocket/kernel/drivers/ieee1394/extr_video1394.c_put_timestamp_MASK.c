
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ti_ohci {int dummy; } ;
struct TYPE_3__ {unsigned char* kvirt; } ;
struct dma_iso_ctx {int buf_size; int syt_offset; int* next_buffer; int* last_used_cmd; int packet_size; TYPE_2__** it_prg; TYPE_1__ dma; } ;
struct TYPE_4__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int,int,int) ;
 int FUNC_2 (struct ti_ohci*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct ti_ohci *VAR_2, struct dma_iso_ctx * VAR_3,
     int VAR_4)
{
 unsigned char* VAR_5 = VAR_3->dma.kvirt + VAR_4 * VAR_3->buf_size;
 u32 VAR_6;
 u32 VAR_7;

 if (VAR_4 == -1) {
   return;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_0);

 VAR_7 = ((VAR_6 & 0x0fff) + VAR_3->syt_offset);
 VAR_7 = (VAR_7 % 3072 + ((VAR_7 / 3072) << 12)
  + (VAR_6 & 0xf000)) & 0xffff;

 VAR_5[6] = VAR_7 >> 8;
 VAR_5[7] = VAR_7 & 0xff;


    if ( (FUNC_0(VAR_3->it_prg[VAR_4][0].data[1]) >>16) == 0x008) {
        VAR_5 += VAR_3->packet_size;
     VAR_5[6] = VAR_7 >> 8;
     VAR_5[7] = VAR_7 & 0xff;
 }


 VAR_4 = VAR_3->next_buffer[VAR_4];
 if (VAR_4 == -1) {
   return;
 }
 VAR_5 = VAR_3->dma.kvirt + VAR_4 * VAR_3->buf_size;

 VAR_7 += (VAR_3->last_used_cmd[VAR_4] << 12) & 0xffff;

 VAR_5[6] = VAR_7 >> 8;
 VAR_5[7] = VAR_7 & 0xff;


    if ( (FUNC_0(VAR_3->it_prg[VAR_4][0].data[1]) >>16) == 0x008) {
        VAR_5 += VAR_3->packet_size;
     VAR_5[6] = VAR_7 >> 8;
     VAR_5[7] = VAR_7 & 0xff;
 }





}
