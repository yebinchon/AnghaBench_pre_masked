
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stv090x_state {scalar_t__ frequency; int srate; int search_range; int fec; int algo; int search_mode; int delsys; } ;
struct TYPE_3__ {int symbol_rate; } ;
struct TYPE_4__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {scalar_t__ frequency; TYPE_2__ u; } ;
struct dtv_frontend_properties {int delivery_system; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct stv090x_state* demodulator_priv; } ;
typedef enum dvbfe_search { ____Placeholder_dvbfe_search } dvbfe_search ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,char*) ;
 scalar_t__ FUNC_1 (struct stv090x_state*) ;

__attribute__((used)) static enum dvbfe_search FUNC_2(struct dvb_frontend *VAR_9, struct dvb_frontend_parameters *VAR_10)
{
 struct stv090x_state *VAR_11 = VAR_9->demodulator_priv;
 struct dtv_frontend_properties *VAR_12 = &VAR_9->dtv_property_cache;

 if (VAR_10->frequency == 0)
  return VAR_2;

 VAR_11->delsys = VAR_12->delivery_system;
 VAR_11->frequency = VAR_10->frequency;
 VAR_11->srate = VAR_10->u.qpsk.symbol_rate;
 VAR_11->search_mode = VAR_8;
 VAR_11->algo = VAR_5;
 VAR_11->fec = VAR_6;
 if (VAR_11->srate > 10000000) {
  FUNC_0(VAR_4, 1, "Search range: 10 MHz");
  VAR_11->search_range = 10000000;
 } else {
  FUNC_0(VAR_4, 1, "Search range: 5 MHz");
  VAR_11->search_range = 5000000;
 }

 if (FUNC_1(VAR_11) == VAR_7) {
  FUNC_0(VAR_4, 1, "Search success!");
  return VAR_3;
 } else {
  FUNC_0(VAR_4, 1, "Search failed!");
  return VAR_1;
 }

 return VAR_0;
}
