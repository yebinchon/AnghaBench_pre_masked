
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9887_priv {int * data; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0)
{
 struct tda9887_priv *VAR_1 = VAR_0->analog_demod_priv;
 FUNC_0("Data bytes: b=0x%02x c=0x%02x e=0x%02x\n",
     VAR_1->data[1], VAR_1->data[2], VAR_1->data[3]);
}
