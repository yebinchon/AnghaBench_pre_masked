
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bba_priv {int acstart; } ;
typedef int s32 ;
typedef int response ;
typedef int challange ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int (*) (int,int)) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct bba_priv*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int *,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int *,int) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static s32 FUNC_11(s32 VAR_6,s32 VAR_7)
{
 u8 VAR_8;
 struct bba_priv *VAR_9 = (struct bba_priv*)VAR_5->state;

 if(FUNC_0(VAR_2,VAR_3,FUNC_11)==0) {
  FUNC_2(VAR_4|1,("bba_event_handler(exi locked)\n"));
  return 1;
 }

 VAR_8 = FUNC_6(0x03);
 FUNC_8(0x02,VAR_0);

 FUNC_2(VAR_4,("bba_event_handler(status(%02x))\n",VAR_8));

 if(VAR_8&0x80) {
  FUNC_2(VAR_4,("bba_event_handler(bba_interrupt(%02x))\n",VAR_8));
  FUNC_10(VAR_5);
  FUNC_8(0x03,0x80);
  FUNC_8(0x02,VAR_1);
  FUNC_1(VAR_2);
  return 1;
 }
 if(VAR_8&0x40) {
  FUNC_3(("bba_event_handler(bba_reset(%02x))\n",VAR_8));
  FUNC_4(VAR_5);
  FUNC_8(0x03, 0x40);
  FUNC_8(0x02, VAR_1);
  FUNC_1(VAR_2);
  return 1;
 }
 if(VAR_8&0x20) {
  FUNC_2(VAR_4,("bba_event_handler(unknown(%02x))\n",VAR_8));
  FUNC_8(0x03, 0x20);
  FUNC_8(0x02, VAR_1);
  FUNC_1(VAR_2);
  return 1;
 }
 if(VAR_8&0x10) {
  u32 VAR_10,VAR_11;
  FUNC_2(VAR_4,("bba_event_handler(challange/response(%02x))\n",VAR_8));
  FUNC_8(0x05,VAR_9->acstart);
  FUNC_7(0x08,&VAR_11,sizeof(VAR_11));
  VAR_10 = FUNC_5(VAR_9,VAR_11);
  FUNC_9(0x09,&VAR_10,sizeof(VAR_10));

  FUNC_8(0x03, 0x10);
  FUNC_8(0x02, VAR_1);
  FUNC_1(VAR_2);
  return 1;
 }
 if(VAR_8&0x08) {
  FUNC_2(VAR_4,("bba_event_handler(challange/response status(%02x))\n",FUNC_6(0x0b)));
  FUNC_8(0x03, 0x08);
  FUNC_8(0x02, VAR_1);
  FUNC_1(VAR_2);
  return 1;
 }
 FUNC_3(("GCIF - EXI - ?? %02x\n", VAR_8));
 FUNC_10(VAR_5);
 FUNC_8(0x02,VAR_1);
 FUNC_1(VAR_2);
 return 1;
}
