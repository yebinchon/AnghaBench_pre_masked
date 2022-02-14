
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tmp_rx_buf; int max_frame_size; } ;
typedef TYPE_1__ SLMP_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(SLMP_INFO *VAR_2)
{
 VAR_2->tmp_rx_buf = FUNC_0(VAR_2->max_frame_size, VAR_1);
 if (VAR_2->tmp_rx_buf == ((void*)0))
  return -VAR_0;
 return 0;
}
