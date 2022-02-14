
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_disable_detector_state {scalar_t__ hit; scalar_t__ good_cycles; scalar_t__ tone_cycle_duration; int tone_present; scalar_t__ notch_level; scalar_t__ channel_level; int notch; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct ec_disable_detector_state *VAR_1)
{



 FUNC_0(&VAR_1->notch,
  (int32_t) (-0.7600000*32768.0),
  (int32_t) (-0.1183852*32768.0),
  (int32_t) (-0.5104039*32768.0),
  (int32_t) (0.1567596*32768.0),
  (int32_t) (1.0000000*32768.0));

 VAR_1->channel_level = 0;
 VAR_1->notch_level = 0;
 VAR_1->tone_present = VAR_0;
 VAR_1->tone_cycle_duration = 0;
 VAR_1->good_cycles = 0;
 VAR_1->hit = 0;
}
