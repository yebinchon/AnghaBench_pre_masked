
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rx_buf_count; int rx_buf_size; scalar_t__ rx_buf; scalar_t__ rx_frame_count; scalar_t__ rx_get; scalar_t__ rx_put; } ;
struct TYPE_4__ {scalar_t__ count; scalar_t__ status; } ;
typedef TYPE_1__ RXBUF ;
typedef TYPE_2__ MGSLPC_INFO ;



__attribute__((used)) static void FUNC_0(MGSLPC_INFO *VAR_0)
{
 RXBUF *VAR_1;
 int VAR_2;

 VAR_0->rx_put = 0;
 VAR_0->rx_get = 0;
 VAR_0->rx_frame_count = 0;
 for (VAR_2=0 ; VAR_2 < VAR_0->rx_buf_count ; VAR_2++) {
  VAR_1 = (RXBUF*)(VAR_0->rx_buf + (VAR_2 * VAR_0->rx_buf_size));
  VAR_1->status = VAR_1->count = 0;
 }
}
