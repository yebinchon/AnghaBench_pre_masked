
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dvb_pll_priv {struct dvb_pll_desc* pll_desc; } ;
struct dvb_pll_desc {scalar_t__ min; scalar_t__ max; int count; int iffreq; TYPE_1__* entries; int name; int (* set ) (struct dvb_frontend*,int*,struct dvb_frontend_parameters const*) ;} ;
struct dvb_frontend_parameters {scalar_t__ frequency; } ;
struct dvb_frontend {struct dvb_pll_priv* tuner_priv; } ;
struct TYPE_2__ {scalar_t__ limit; int stepsize; int config; int cb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int,int,int,...) ;
 int FUNC_1 (struct dvb_frontend*,int*,struct dvb_frontend_parameters const*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2, u8 *VAR_3,
        const struct dvb_frontend_parameters *VAR_4)
{
 struct dvb_pll_priv *VAR_5 = VAR_2->tuner_priv;
 struct dvb_pll_desc *VAR_6 = VAR_5->pll_desc;
 u32 VAR_7;
 int VAR_8;

 if (VAR_4->frequency != 0 && (VAR_4->frequency < VAR_6->min ||
           VAR_4->frequency > VAR_6->max))
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_6->count; VAR_8++) {
  if (VAR_4->frequency > VAR_6->entries[VAR_8].limit)
   continue;
  break;
 }

 if (VAR_1)
  FUNC_0("pll: %s: freq=%d | i=%d/%d\n", VAR_6->name,
         VAR_4->frequency, VAR_8, VAR_6->count);
 if (VAR_8 == VAR_6->count)
  return -VAR_0;

 VAR_7 = (VAR_4->frequency + VAR_6->iffreq +
        VAR_6->entries[VAR_8].stepsize/2) / VAR_6->entries[VAR_8].stepsize;
 VAR_3[0] = VAR_7 >> 8;
 VAR_3[1] = VAR_7 & 0xff;
 VAR_3[2] = VAR_6->entries[VAR_8].config;
 VAR_3[3] = VAR_6->entries[VAR_8].cb;

 if (VAR_6->set)
  VAR_6->set(VAR_2, VAR_3, VAR_4);

 if (VAR_1)
  FUNC_0("pll: %s: div=%d | buf=0x%02x,0x%02x,0x%02x,0x%02x\n",
         VAR_6->name, VAR_7, VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3]);


 return (VAR_7 * VAR_6->entries[VAR_8].stepsize) - VAR_6->iffreq;
}
