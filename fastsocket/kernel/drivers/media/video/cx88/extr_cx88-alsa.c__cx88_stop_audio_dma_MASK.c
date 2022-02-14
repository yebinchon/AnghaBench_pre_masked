
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cx88_core {int dummy; } ;
struct TYPE_3__ {struct cx88_core* core; } ;
typedef TYPE_1__ snd_cx88_card_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct cx88_core*,int *) ;
 int * VAR_9 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static int FUNC_3(snd_cx88_card_t *VAR_11)
{
 struct cx88_core *VAR_12=VAR_11->core;
 FUNC_2(1, "Stopping audio DMA\n");


 FUNC_1(VAR_4, 0x11);


 FUNC_1(VAR_6, VAR_7);
 FUNC_1(VAR_5, VAR_3 | VAR_2 |
    VAR_1 | VAR_0);

 if (VAR_10)
  FUNC_0(VAR_11->core, &VAR_9[VAR_8]);

 return 0;
}
