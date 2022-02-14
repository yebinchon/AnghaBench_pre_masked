
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int length; int seq; int timestamp; } ;
struct zoran_buffer {int state; TYPE_2__ bs; } ;
struct TYPE_6__ {int TmpDcm; } ;
struct TYPE_4__ {struct zoran_buffer* buffer; } ;
struct zoran {scalar_t__ codec_mode; unsigned int jpg_seq_num; size_t jpg_dma_tail; size_t jpg_dma_head; int jpg_err_shift; int* jpg_pend; int jpg_err_seq; TYPE_3__ jpg_settings; TYPE_1__ jpg_buffers; int * stat_com; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (struct zoran *VAR_5)
{


 int VAR_6;
 u32 VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 struct zoran_buffer *VAR_10;
 int VAR_11;




 if (VAR_5->codec_mode == VAR_3) {
  VAR_5->jpg_seq_num++;
 }
 while (VAR_5->jpg_dma_tail < VAR_5->jpg_dma_head) {
  if (VAR_5->jpg_settings.TmpDcm == 1)
   VAR_6 = (VAR_5->jpg_dma_tail -
        VAR_5->jpg_err_shift) & VAR_1;
  else
   VAR_6 = ((VAR_5->jpg_dma_tail -
         VAR_5->jpg_err_shift) & 1) * 2 + 1;

  VAR_7 = FUNC_1(VAR_5->stat_com[VAR_6]);

  if ((VAR_7 & 1) == 0) {
   return;
  }
  VAR_11 = VAR_5->jpg_pend[VAR_5->jpg_dma_tail & VAR_0];
  VAR_10 = &VAR_5->jpg_buffers.buffer[VAR_11];
  FUNC_0(&VAR_10->bs.timestamp);

  if (VAR_5->codec_mode == VAR_2) {
   VAR_10->bs.length = (VAR_7 & 0x7fffff) >> 1;



   VAR_8 = ((VAR_7 >> 24) + VAR_5->jpg_err_seq) & 0xff;
   VAR_9 = (VAR_8 - VAR_5->jpg_seq_num) & 0xff;
   VAR_5->jpg_seq_num += VAR_9;
  } else {
   VAR_10->bs.length = 0;
  }
  VAR_10->bs.seq =
      VAR_5->jpg_settings.TmpDcm ==
      2 ? (VAR_5->jpg_seq_num >> 1) : VAR_5->jpg_seq_num;
  VAR_10->state = VAR_4;

  VAR_5->jpg_dma_tail++;
 }
}
