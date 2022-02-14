
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_ani_state {scalar_t__ listen_time; scalar_t__ cck_errors; scalar_t__ ofdm_errors; scalar_t__ last_listen; scalar_t__ last_cck_errors; scalar_t__ last_ofdm_errors; } ;



__attribute__((used)) static void
FUNC_0(struct ath5k_ani_state *VAR_0)
{

 VAR_0->last_ofdm_errors = VAR_0->ofdm_errors;
 VAR_0->last_cck_errors = VAR_0->cck_errors;
 VAR_0->last_listen = VAR_0->listen_time;

 VAR_0->ofdm_errors = 0;
 VAR_0->cck_errors = 0;
 VAR_0->listen_time = 0;
}
