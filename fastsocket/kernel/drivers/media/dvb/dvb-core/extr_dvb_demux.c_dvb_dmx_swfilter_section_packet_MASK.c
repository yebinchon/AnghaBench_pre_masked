
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_demux_feed {int cc; int pusi_seen; } ;


 int FUNC_0 (struct dvb_demux_feed*,int const*,int) ;
 int FUNC_1 (struct dvb_demux_feed*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_demux_feed *VAR_0,
        const u8 *VAR_1)
{
 u8 VAR_2, VAR_3;
 int VAR_4, VAR_5 = 0;
 u8 VAR_6;

 VAR_3 = FUNC_2(VAR_1);

 if (VAR_3 == 0)
  return -1;

 VAR_2 = 188 - VAR_3;

 VAR_6 = VAR_1[3] & 0x0f;
 VAR_4 = ((VAR_0->cc + 1) & 0x0f) == VAR_6;
 VAR_0->cc = VAR_6;

 if (VAR_1[3] & 0x20) {

  if ((VAR_1[4] > 0) && (VAR_1[5] & 0x80))
   VAR_5 = 1;
 }

 if (!VAR_4 || VAR_5) {
  VAR_0->pusi_seen = 0;
  FUNC_1(VAR_0);
 }

 if (VAR_1[1] & 0x40) {

  if (VAR_3 > 1 && VAR_1[VAR_2] < VAR_3) {
   const u8 *VAR_7 = &VAR_1[VAR_2 + 1];
   u8 VAR_8 = VAR_1[VAR_2];
   const u8 *VAR_9 = &VAR_7[VAR_8];
   u8 VAR_10 = VAR_3 - 1 - VAR_8;

   FUNC_0(VAR_0, VAR_7,
          VAR_8);

   VAR_0->pusi_seen = 1;
   FUNC_1(VAR_0);
   FUNC_0(VAR_0, VAR_9,
          VAR_10);
  }




 } else {

  FUNC_0(VAR_0, &VAR_1[VAR_2], VAR_3);
 }

 return 0;
}
