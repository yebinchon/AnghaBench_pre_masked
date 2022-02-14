
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rx_buf_size; int max_frame_size; int rx_buf_total_size; int rx_buf_count; int * rx_buf; } ;
typedef int RXBUF ;
typedef TYPE_1__ MGSLPC_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(MGSLPC_INFO *VAR_2)
{

 VAR_2->rx_buf_size = sizeof(RXBUF) + VAR_2->max_frame_size;


 VAR_2->rx_buf_total_size = VAR_2->rx_buf_size * 8;


 if (VAR_2->rx_buf_total_size > 0x10000)
  VAR_2->rx_buf_total_size = 0x10000;


 VAR_2->rx_buf_count = VAR_2->rx_buf_total_size / VAR_2->rx_buf_size;

 VAR_2->rx_buf = FUNC_0(VAR_2->rx_buf_total_size, VAR_1);
 if (VAR_2->rx_buf == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_2);
 return 0;
}
