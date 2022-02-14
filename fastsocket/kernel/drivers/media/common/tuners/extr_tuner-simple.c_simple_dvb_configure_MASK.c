
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tunertype {int stepsize; int name; } ;
struct tuner_simple_priv {struct tunertype* tun; int type; } ;
struct tuner_params {unsigned int iffreq; } ;
struct dvb_frontend_parameters {int frequency; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,struct tuner_params*,unsigned int*,int*,int*) ;
 int FUNC_1 (struct dvb_frontend*,int*,struct dvb_frontend_parameters const*) ;
 struct tuner_params* FUNC_2 (struct dvb_frontend*,int ) ;
 int FUNC_3 (char*,int ,int,int,int,int,int) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static u32 FUNC_5(struct dvb_frontend *VAR_2, u8 *VAR_3,
    const struct dvb_frontend_parameters *VAR_4)
{

 struct tuner_simple_priv *VAR_5 = VAR_2->tuner_priv;
 struct tunertype *VAR_6 = VAR_5->tun;
 static struct tuner_params *VAR_7;
 u8 VAR_8, VAR_9;
 u32 VAR_10;
 int VAR_11;
 unsigned VAR_12 = VAR_4->frequency / 62500;

 if (!VAR_6->stepsize) {


  FUNC_4("attempt to treat tuner %d (%s) as digital tuner "
     "without stepsize defined.\n",
     VAR_5->type, VAR_5->tun->name);
  return 0;
 }

 VAR_7 = FUNC_2(VAR_2, VAR_0);
 VAR_11 = FUNC_0(VAR_2, VAR_7, &VAR_12, &VAR_8, &VAR_9);
 if (VAR_11 < 0)
  return 0;

 VAR_10 = ((VAR_12 + VAR_7->iffreq) * 62500 + VAR_1 +
        VAR_6->stepsize/2) / VAR_6->stepsize;

 VAR_3[0] = VAR_10 >> 8;
 VAR_3[1] = VAR_10 & 0xff;
 VAR_3[2] = VAR_8;
 VAR_3[3] = VAR_9;

 FUNC_1(VAR_2, VAR_3, VAR_4);

 FUNC_3("%s: div=%d | buf=0x%02x,0x%02x,0x%02x,0x%02x\n",
    VAR_6->name, VAR_10, VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3]);


 return (VAR_10 * VAR_6->stepsize) - VAR_7->iffreq;
}
