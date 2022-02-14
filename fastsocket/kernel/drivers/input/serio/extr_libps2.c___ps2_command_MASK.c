
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int flags; int cmdcnt; unsigned char* cmdbuf; int serio; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ps2dev*,int,int) ;
 scalar_t__ FUNC_3 (struct ps2dev*,unsigned char,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int) ;

int FUNC_7(struct ps2dev *VAR_5, unsigned char *VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9 = (VAR_7 >> 12) & 0xf;
 int VAR_10 = (VAR_7 >> 8) & 0xf;
 int VAR_11 = -1;
 int VAR_12;

 if (VAR_10 > sizeof(VAR_5->cmdbuf)) {
  FUNC_0(1);
  return -1;
 }

 if (VAR_9 && !VAR_6) {
  FUNC_0(1);
  return -1;
 }

 FUNC_5(VAR_5->serio);
 VAR_5->flags = VAR_7 == VAR_0 ? VAR_4 : 0;
 VAR_5->cmdcnt = VAR_10;
 if (VAR_10 && VAR_6)
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
   VAR_5->cmdbuf[(VAR_10 - 1) - VAR_12] = VAR_6[VAR_12];
 FUNC_4(VAR_5->serio);






 if (FUNC_3(VAR_5, VAR_7 & 0xff,
    VAR_7 == VAR_1 ? 1000 : 200))
  goto out;

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
  if (FUNC_3(VAR_5, VAR_6[VAR_12], 200))
   goto out;




 VAR_8 = FUNC_1(VAR_7 == VAR_1 ? 4000 : 500);

 VAR_8 = FUNC_6(VAR_5->wait,
         !(VAR_5->flags & VAR_3), VAR_8);

 if (VAR_5->cmdcnt && !(VAR_5->flags & VAR_3)) {

  VAR_8 = FUNC_2(VAR_5, VAR_7, VAR_8);
  FUNC_6(VAR_5->wait,
       !(VAR_5->flags & VAR_2), VAR_8);
 }

 if (VAR_6)
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
   VAR_6[VAR_12] = VAR_5->cmdbuf[(VAR_10 - 1) - VAR_12];

 if (VAR_5->cmdcnt && (VAR_7 != VAR_1 || VAR_5->cmdcnt != 1))
  goto out;

 VAR_11 = 0;

 out:
 FUNC_5(VAR_5->serio);
 VAR_5->flags = 0;
 FUNC_4(VAR_5->serio);

 return VAR_11;
}
