
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct dib0090_state {scalar_t__ current_band; scalar_t__ wbd_target; scalar_t__ wbd_offset; TYPE_1__* config; } ;
struct TYPE_2__ {int wbd_vhf_offset; int wbd_cband_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct dib0090_state*,scalar_t__) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct dib0090_state *VAR_2, u32 VAR_3)
{
 u16 VAR_4 = 250;



 if (VAR_2->current_band == VAR_1)
  VAR_4 = 650;

 if (VAR_2->current_band == VAR_1)
  VAR_4 = VAR_2->config->wbd_vhf_offset;
 if (VAR_2->current_band == VAR_0)
  VAR_4 = VAR_2->config->wbd_cband_offset;


 VAR_2->wbd_target = FUNC_0(VAR_2, VAR_2->wbd_offset + VAR_4);
 FUNC_1("wbd-target: %d dB", (u32) VAR_2->wbd_target);
}
