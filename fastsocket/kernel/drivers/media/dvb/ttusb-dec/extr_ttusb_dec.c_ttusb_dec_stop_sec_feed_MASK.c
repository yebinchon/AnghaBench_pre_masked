
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ttusb_dec {int filter_stream_count; int filter_info_list_lock; } ;
struct filter_info {int stream_id; int filter_info_list; } ;
struct dvb_demux_feed {scalar_t__ priv; TYPE_1__* demux; } ;
typedef int b0 ;
struct TYPE_2__ {struct ttusb_dec* priv; } ;


 int FUNC_0 (struct filter_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct ttusb_dec*,int,int,int*,int *,int *) ;
 int FUNC_5 (struct ttusb_dec*) ;

__attribute__((used)) static int FUNC_6(struct dvb_demux_feed *VAR_0)
{
 struct ttusb_dec *VAR_1 = VAR_0->demux->priv;
 u8 VAR_2[] = { 0x00, 0x00 };
 struct filter_info *VAR_3 = (struct filter_info *)VAR_0->priv;
 unsigned long VAR_4;

 VAR_2[1] = VAR_3->stream_id;
 FUNC_2(&VAR_1->filter_info_list_lock, VAR_4);
 FUNC_1(&VAR_3->filter_info_list);
 FUNC_3(&VAR_1->filter_info_list_lock, VAR_4);
 FUNC_0(VAR_3);
 FUNC_4(VAR_1, 0x62, sizeof(VAR_2), VAR_2, ((void*)0), ((void*)0));

 VAR_1->filter_stream_count--;

 FUNC_5(VAR_1);

 return 0;
}
