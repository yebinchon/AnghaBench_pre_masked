
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_filter_pes2ts {unsigned char* buf; void* priv; int * cb; scalar_t__ cc; } ;
typedef int dvb_filter_pes2ts_cb_t ;



void FUNC_0(struct dvb_filter_pes2ts *VAR_0, unsigned short VAR_1,
       dvb_filter_pes2ts_cb_t *VAR_2, void *VAR_3)
{
 unsigned char *VAR_4=VAR_0->buf;

 VAR_4[0]=0x47;
 VAR_4[1]=(VAR_1>>8);
 VAR_4[2]=VAR_1&0xff;
 VAR_0->cc=0;
 VAR_0->cb=VAR_2;
 VAR_0->priv=VAR_3;
}
