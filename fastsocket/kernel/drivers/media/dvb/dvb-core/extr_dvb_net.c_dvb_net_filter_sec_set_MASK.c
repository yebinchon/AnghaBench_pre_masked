
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct net_device {int name; } ;
struct dvb_net_priv {TYPE_1__* secfeed; } ;
struct dmx_section_filter {int* filter_value; int* filter_mask; int* filter_mode; void* priv; } ;
struct TYPE_2__ {int (* allocate_filter ) (TYPE_1__*,struct dmx_section_filter**) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,void**) ;
 int FUNC_1 (int*,int,int ) ;
 struct dvb_net_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_1__*,struct dmx_section_filter**) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
     struct dmx_section_filter **VAR_2,
     u8 *VAR_3, u8 *VAR_4)
{
 struct dvb_net_priv *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;

 *VAR_2=((void*)0);
 VAR_6 = VAR_5->secfeed->allocate_filter(VAR_5->secfeed, VAR_2);
 if (VAR_6<0) {
  FUNC_3("%s: could not get filter\n", VAR_1->name);
  return VAR_6;
 }

 (*VAR_2)->priv=(void *) VAR_1;

 FUNC_1((*VAR_2)->filter_value, 0x00, VAR_0);
 FUNC_1((*VAR_2)->filter_mask, 0x00, VAR_0);
 FUNC_1((*VAR_2)->filter_mode, 0xff, VAR_0);

 (*VAR_2)->filter_value[0]=0x3e;
 (*VAR_2)->filter_value[3]=VAR_3[5];
 (*VAR_2)->filter_value[4]=VAR_3[4];
 (*VAR_2)->filter_value[8]=VAR_3[3];
 (*VAR_2)->filter_value[9]=VAR_3[2];
 (*VAR_2)->filter_value[10]=VAR_3[1];
 (*VAR_2)->filter_value[11]=VAR_3[0];

 (*VAR_2)->filter_mask[0] = 0xff;
 (*VAR_2)->filter_mask[3] = VAR_4[5];
 (*VAR_2)->filter_mask[4] = VAR_4[4];
 (*VAR_2)->filter_mask[8] = VAR_4[3];
 (*VAR_2)->filter_mask[9] = VAR_4[2];
 (*VAR_2)->filter_mask[10] = VAR_4[1];
 (*VAR_2)->filter_mask[11]=VAR_4[0];

 FUNC_0("%s: filter mac=%pM\n", VAR_1->name, VAR_3);
 FUNC_0("%s: filter mask=%pM\n", VAR_1->name, VAR_4);

 return 0;
}
