
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int swap; int sndrate; } ;
struct TYPE_3__ {int buffer_size; int * buffer; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int,int ,int,int ,int ,int) ;
 TYPE_1__ VAR_2 ;

void FUNC_1(void)
{
  FUNC_0(VAR_1.swap ^ 0, VAR_2.buffer[0], VAR_2.buffer_size * 2, VAR_1.sndrate, VAR_0, -100);
  FUNC_0(VAR_1.swap ^ 1, VAR_2.buffer[1], VAR_2.buffer_size * 2, VAR_1.sndrate, VAR_0, 100);
}
