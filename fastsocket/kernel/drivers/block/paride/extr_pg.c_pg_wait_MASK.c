
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg {int status; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,char*,int,int,int,char*) ;
 int FUNC_2 (struct pg*,int) ;
 int FUNC_3 (struct pg*) ;
 int FUNC_4 (int ,unsigned long) ;
 scalar_t__ FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct pg *VAR_5, int VAR_6, int VAR_7, unsigned long VAR_8, char *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_5->status = 0;

 VAR_10 = 0;
 while ((((VAR_11 = FUNC_3(VAR_5)) & VAR_6) || (VAR_7 && (!(VAR_11 & VAR_7))))
        && FUNC_5(VAR_3, VAR_8)) {
  if (VAR_10++ < VAR_0)
   FUNC_6(VAR_1);
  else
   FUNC_0(1);
 }

 VAR_15 = FUNC_4(VAR_3, VAR_8);

 if ((VAR_11 & (VAR_2 & VAR_7)) || VAR_15) {
  VAR_13 = FUNC_2(VAR_5, 7);
  VAR_12 = FUNC_2(VAR_5, 1);
  VAR_14 = FUNC_2(VAR_5, 2);
  if (VAR_4 > 1)
   FUNC_1("%s: %s: stat=0x%x err=0x%x phase=%d%s\n",
          VAR_5->name, VAR_9, VAR_13, VAR_12, VAR_14, VAR_15 ? " timeout" : "");
  if (VAR_15)
   VAR_12 |= 0x100;
  VAR_5->status = (VAR_12 >> 4) & 0xff;
  return -1;
 }
 return 0;
}
