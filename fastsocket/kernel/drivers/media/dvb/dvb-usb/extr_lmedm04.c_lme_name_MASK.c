
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lme2510_state {size_t tuner_config; } ;
struct dvb_usb_adapter {TYPE_5__* fe; TYPE_2__* dev; } ;
struct TYPE_8__ {char* name; } ;
struct TYPE_9__ {TYPE_3__ info; } ;
struct TYPE_10__ {TYPE_4__ ops; } ;
struct TYPE_7__ {TYPE_1__* desc; struct lme2510_state* priv; } ;
struct TYPE_6__ {char* name; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_0)
{
 struct lme2510_state *VAR_1 = VAR_0->dev->priv;
 const char *VAR_2 = VAR_0->dev->desc->name;
 char *VAR_3[] = {"", " LG TDQY-P001F", " SHARP:BS2F7HZ7395"};
 char *VAR_4 = VAR_0->fe->ops.info.name;

 FUNC_1(VAR_4, VAR_2, 128);
 FUNC_0(VAR_4, VAR_3[VAR_1->tuner_config], 128);

 return 0;
}
