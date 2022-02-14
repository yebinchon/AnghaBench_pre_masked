
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stb0899_state {int verbose; struct stb0899_config* config; } ;
struct stb0899_config {TYPE_5__* init_tst; TYPE_4__* init_s2_fec; TYPE_3__* init_s1_demod; TYPE_2__* init_s2_demod; TYPE_1__* init_dev; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;
struct TYPE_10__ {int address; int data; } ;
struct TYPE_9__ {int offset; int data; int base_address; } ;
struct TYPE_8__ {int address; int data; } ;
struct TYPE_7__ {int offset; int data; int base_address; } ;
struct TYPE_6__ {int address; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (struct stb0899_state*) ;
 int FUNC_2 (struct stb0899_state*) ;
 int FUNC_3 (struct stb0899_state*,int,int ) ;
 int FUNC_4 (struct stb0899_state*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_3)
{
 int VAR_4;
 struct stb0899_state *VAR_5 = VAR_3->demodulator_priv;
 struct stb0899_config *VAR_6 = VAR_5->config;

 FUNC_0(VAR_5->verbose, VAR_0, 1, "Initializing STB0899 ... ");


 FUNC_0(VAR_5->verbose, VAR_0, 1, "init device");
 for (VAR_4 = 0; VAR_6->init_dev[VAR_4].address != 0xffff; VAR_4++)
  FUNC_3(VAR_5, VAR_6->init_dev[VAR_4].address, VAR_6->init_dev[VAR_4].data);

 FUNC_0(VAR_5->verbose, VAR_0, 1, "init S2 demod");

 for (VAR_4 = 0; VAR_6->init_s2_demod[VAR_4].offset != 0xffff; VAR_4++)
  FUNC_4(VAR_5, VAR_1,
        VAR_6->init_s2_demod[VAR_4].base_address,
        VAR_6->init_s2_demod[VAR_4].offset,
        VAR_6->init_s2_demod[VAR_4].data);

 FUNC_0(VAR_5->verbose, VAR_0, 1, "init S1 demod");

 for (VAR_4 = 0; VAR_6->init_s1_demod[VAR_4].address != 0xffff; VAR_4++)
  FUNC_3(VAR_5, VAR_6->init_s1_demod[VAR_4].address, VAR_6->init_s1_demod[VAR_4].data);

 FUNC_0(VAR_5->verbose, VAR_0, 1, "init S2 FEC");

 for (VAR_4 = 0; VAR_6->init_s2_fec[VAR_4].offset != 0xffff; VAR_4++)
  FUNC_4(VAR_5, VAR_2,
        VAR_6->init_s2_fec[VAR_4].base_address,
        VAR_6->init_s2_fec[VAR_4].offset,
        VAR_6->init_s2_fec[VAR_4].data);

 FUNC_0(VAR_5->verbose, VAR_0, 1, "init TST");

 for (VAR_4 = 0; VAR_6->init_tst[VAR_4].address != 0xffff; VAR_4++)
  FUNC_3(VAR_5, VAR_6->init_tst[VAR_4].address, VAR_6->init_tst[VAR_4].data);

 FUNC_2(VAR_5);
 FUNC_1(VAR_5);

 return 0;
}
