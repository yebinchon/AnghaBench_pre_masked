
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int tbuf ;
struct pvr2_hdw {int* cmd_buffer; int ctl_lock; } ;
struct TYPE_3__ {int id; int desc; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (struct pvr2_hdw*,int*,unsigned int,int *,int ) ;
 int FUNC_4 (int,char*,unsigned int,char*) ;
 int VAR_2 ;
 unsigned int FUNC_5 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_6(struct pvr2_hdw *VAR_3,u32 VAR_4)
{
 int VAR_5;
 unsigned int VAR_6 = 1;
 unsigned int VAR_7 = 0;
 FUNC_2(VAR_3->ctl_lock);
 VAR_3->cmd_buffer[0] = VAR_4 & 0xffu;
 VAR_7 = (VAR_4 >> 8) & 0xffu;
 VAR_7 = (VAR_7 > 2) ? 2 : VAR_7;
 if (VAR_7) {
  VAR_6 += VAR_7;
  VAR_3->cmd_buffer[1] = (VAR_4 >> 16) & 0xffu;
  if (VAR_7 > 1) {
   VAR_3->cmd_buffer[2] = (VAR_4 >> 24) & 0xffu;
  }
 }
 if (VAR_2 & VAR_0) {
  unsigned int VAR_8;
  unsigned int VAR_9,VAR_10;
  char VAR_11[50];
  VAR_4 &= 0xffu;
  VAR_10 = 0;
  VAR_9 = FUNC_5(VAR_11+VAR_10,
     sizeof(VAR_11)-VAR_10,
     "Sending FX2 command 0x%x",VAR_4);
  VAR_10 += VAR_9;
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
   if (VAR_1[VAR_8].id == VAR_4) {
    VAR_9 = FUNC_5(VAR_11+VAR_10,
       sizeof(VAR_11)-VAR_10,
       " \"%s\"",
       VAR_1[VAR_8].desc);
    VAR_10 += VAR_9;
    break;
   }
  }
  if (VAR_7) {
   VAR_9 = FUNC_5(VAR_11+VAR_10,
      sizeof(VAR_11)-VAR_10,
      " (%u",VAR_3->cmd_buffer[1]);
   VAR_10 += VAR_9;
   if (VAR_7 > 1) {
    VAR_9 = FUNC_5(VAR_11+VAR_10,
       sizeof(VAR_11)-VAR_10,
       ",%u",VAR_3->cmd_buffer[2]);
    VAR_10 += VAR_9;
   }
   VAR_9 = FUNC_5(VAR_11+VAR_10,
      sizeof(VAR_11)-VAR_10,
      ")");
   VAR_10 += VAR_9;
  }
  FUNC_4(VAR_0,"%.*s",VAR_10,VAR_11);
 }
 VAR_5 = FUNC_3(VAR_3,VAR_3->cmd_buffer,VAR_6,((void*)0),0);
 FUNC_1(VAR_3->ctl_lock);
 return VAR_5;
}
