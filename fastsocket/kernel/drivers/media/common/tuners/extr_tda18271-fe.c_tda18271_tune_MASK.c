
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tda18271_std_map_item {int std; int agc_mode; int if_freq; } ;
struct tda18271_priv {int id; int lock; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*,struct tda18271_std_map_item*,int ,int ) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (struct dvb_frontend*,int ,int ) ;
 int FUNC_6 (struct dvb_frontend*,int ) ;
 int FUNC_7 (char*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend *VAR_0,
    struct tda18271_std_map_item *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tda18271_priv *VAR_4 = VAR_0->tuner_priv;
 int VAR_5;

 FUNC_7("freq = %d, ifc = %d, bw = %d, agc_mode = %d, std = %d\n",
  VAR_2, VAR_1->if_freq, VAR_3, VAR_1->agc_mode, VAR_1->std);

 VAR_5 = FUNC_2(VAR_0);
 if (FUNC_8(VAR_5))
  FUNC_9("failed to configure agc\n");

 VAR_5 = FUNC_4(VAR_0);
 if (FUNC_8(VAR_5))
  goto fail;

 FUNC_0(&VAR_4->lock);

 switch (VAR_4->id) {
 case 129:
  FUNC_5(VAR_0, VAR_2, VAR_3);
  break;
 case 128:
  FUNC_6(VAR_0, VAR_2);
  break;
 }
 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_1(&VAR_4->lock);
fail:
 return VAR_5;
}
