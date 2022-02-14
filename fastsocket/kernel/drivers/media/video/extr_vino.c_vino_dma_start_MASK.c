
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vino_channel_settings {scalar_t__ channel; } ;
struct TYPE_2__ {int control; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static inline void FUNC_1(struct vino_channel_settings *VAR_4)
{
 u32 VAR_5 = VAR_3->control;

 FUNC_0("vino_dma_start():\n");
 VAR_5 |= (VAR_4->channel == VAR_0) ?
  VAR_1 : VAR_2;
 VAR_3->control = VAR_5;
}
