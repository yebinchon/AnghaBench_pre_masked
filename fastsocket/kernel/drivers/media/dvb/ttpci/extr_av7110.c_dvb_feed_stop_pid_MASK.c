
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_demux_feed {int pes_type; int ts_type; int filter; struct dvb_demux* demux; } ;
struct dvb_demux {int* pids; scalar_t__ playing; scalar_t__ recording; struct av7110* priv; } ;
struct av7110 {int playing; int rec_mode; } ;


 int FUNC_0 (struct av7110*,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct av7110*,int ) ;
 int FUNC_3 (int,char*,struct av7110*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct dvb_demux_feed *VAR_4)
{
 struct dvb_demux *VAR_5 = VAR_4->demux;
 struct av7110 *VAR_6 = VAR_5->priv;
 u16 *VAR_7 = VAR_5->pids, VAR_8[5];
 int VAR_9;

 int VAR_10 = 0;

 FUNC_3(4, "%p\n", VAR_6);

 if (VAR_4->pes_type <= 1) {
  VAR_10 = FUNC_2(VAR_6, VAR_4->pes_type ? VAR_1 : VAR_0);
  if (VAR_10)
   return VAR_10;
  if (!VAR_6->rec_mode)
   VAR_5->recording = 0;
  if (!VAR_6->playing)
   VAR_5->playing = 0;
 }
 VAR_8[0] = VAR_8[1] = VAR_8[2] = VAR_8[3] = VAR_8[4] = 0xffff;
 VAR_9 = VAR_4->pes_type;
 switch (VAR_9) {
 case 2:
  if (VAR_4->ts_type & VAR_2)
   VAR_10 = FUNC_1(VAR_4->filter);
  VAR_8[2] = 0;
  break;
 case 0:
 case 1:
 case 4:
  if (!VAR_3)
   return 0;
  VAR_8[VAR_9] = (VAR_7[VAR_9]&0x8000) ? 0 : VAR_7[VAR_9];
  break;
 }
 if (!VAR_10)
  VAR_10 = FUNC_0(VAR_6, VAR_8[1], VAR_8[0], VAR_8[2], VAR_8[3], VAR_8[4]);
 return VAR_10;
}
