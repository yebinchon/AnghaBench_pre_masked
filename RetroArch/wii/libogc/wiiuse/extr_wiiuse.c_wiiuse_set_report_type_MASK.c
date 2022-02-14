
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubyte ;
struct wiimote_t {int dummy; } ;
typedef int cmd_blk_cb ;


 int FUNC_0 (struct wiimote_t*) ;
 scalar_t__ FUNC_1 (struct wiimote_t*,int ) ;
 int FUNC_2 (struct wiimote_t*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct wiimote_t*,int ,int*,int,int ) ;

int FUNC_4(struct wiimote_t *VAR_12,cmd_blk_cb VAR_13)
{
 ubyte VAR_14[2];
 int VAR_15,VAR_16,VAR_17;

 if(!VAR_12 || !FUNC_0(VAR_12)) return 0;

 VAR_14[0] = (FUNC_1(VAR_12, VAR_3) ? 0x04 : 0x00);
 VAR_14[1] = 0x00;

 VAR_15 = FUNC_2(VAR_12, VAR_0) || FUNC_2(VAR_12, VAR_2);
 VAR_17 = FUNC_2(VAR_12, VAR_1);
 VAR_16 = FUNC_2(VAR_12, VAR_2);

 if (VAR_15 && VAR_16 && VAR_17) VAR_14[1] = VAR_9;
 else if (VAR_15 && VAR_17) VAR_14[1] = VAR_7;
 else if (VAR_15 && VAR_16) VAR_14[1] = VAR_8;
 else if (VAR_16 && VAR_17) VAR_14[1] = VAR_11;
 else if (VAR_16) VAR_14[1] = VAR_8;
 else if (VAR_17) VAR_14[1] = VAR_10;
 else if (VAR_15) VAR_14[1] = VAR_6;
 else VAR_14[1] = VAR_5;



 FUNC_3(VAR_12,VAR_4,VAR_14,2,VAR_13);
 return VAR_14[1];
}
