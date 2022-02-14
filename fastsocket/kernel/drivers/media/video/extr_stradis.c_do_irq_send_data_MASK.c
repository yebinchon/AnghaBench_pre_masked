
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146 {scalar_t__ playmode; int audtail; int audhead; int vidhead; int vidtail; scalar_t__ osdtail; scalar_t__ osdhead; int vidq; scalar_t__ vidbuf; scalar_t__ dmadebi; int audq; scalar_t__ audbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct saa7146*,int ,int ,int) ;
 int FUNC_1 (struct saa7146*,int ,int ,int ,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct saa7146 *VAR_12)
{
 int VAR_13, VAR_14, VAR_15;

 FUNC_3(VAR_7, VAR_5);

 if (VAR_12->playmode != VAR_8)
  VAR_12->audtail = VAR_12->audhead = 0;
 if (VAR_12->audhead <= VAR_12->audtail)
  VAR_14 = VAR_12->audtail - VAR_12->audhead;
 else
  VAR_14 = 65536 - (VAR_12->audhead - VAR_12->audtail);
 if (VAR_12->vidhead <= VAR_12->vidtail)
  VAR_15 = VAR_12->vidtail - VAR_12->vidhead;
 else
  VAR_15 = 524288 - (VAR_12->vidhead - VAR_12->vidtail);
 if (VAR_14 == 0 && VAR_15 == 0 && VAR_12->osdtail == VAR_12->osdhead) {
  FUNC_3(0, VAR_5);
  return;
 }

 if (VAR_14 >= 2048 && (FUNC_0(VAR_12, VAR_10, VAR_0, 2)
   & 0xff) < 60) {
  if (VAR_12->audhead > VAR_12->audtail)
   VAR_13 = 65536 - VAR_12->audhead;
  else
   VAR_13 = 0;
  VAR_14 = 2048;
  if (VAR_13 > 0 && VAR_13 < 2048) {
   FUNC_2(VAR_12->dmadebi, VAR_12->audbuf + VAR_12->audhead, VAR_13);
   VAR_12->audhead = 0;
   VAR_14 -= VAR_13;
  } else
   VAR_13 = 0;
  FUNC_2(VAR_12->dmadebi + VAR_13, VAR_12->audbuf + VAR_12->audhead,
   VAR_14);
  VAR_12->audhead += VAR_14;
  VAR_12->audhead &= 0xffff;
  FUNC_1(VAR_12, VAR_9, (VAR_4 ? VAR_0 :
   VAR_1), 0, 2048);
  FUNC_4(&VAR_12->audq);

 } else if (VAR_15 >= 30720 && (FUNC_0(VAR_12, VAR_10,
        VAR_2, 2)) < 16384) {
  if (VAR_12->vidhead > VAR_12->vidtail)
   VAR_13 = 524288 - VAR_12->vidhead;
  else
   VAR_13 = 0;
  VAR_15 = 30720;
  if (VAR_13 > 0 && VAR_13 < 30720) {
   FUNC_2(VAR_12->dmadebi, VAR_12->vidbuf + VAR_12->vidhead, VAR_13);
   VAR_12->vidhead = 0;
   VAR_15 -= VAR_13;
  } else
   VAR_13 = 0;
  FUNC_2(VAR_12->dmadebi + VAR_13, VAR_12->vidbuf + VAR_12->vidhead,
   VAR_15);
  VAR_12->vidhead += VAR_15;
  VAR_12->vidhead &= 0x7ffff;
  FUNC_1(VAR_12, VAR_11, (VAR_4 ? VAR_2 :
       VAR_3), 0, 30720);
  FUNC_4(&VAR_12->vidq);
 }
 FUNC_3(VAR_6 | VAR_7, VAR_5);
}
