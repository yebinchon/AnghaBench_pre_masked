
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tPofFileHdr ;
struct TYPE_7__ {unsigned char* BootBuf; } ;
struct boot_data {int last_error; TYPE_1__ buf; int pof_state; scalar_t__ BufSize; } ;
struct TYPE_8__ {int debug_flags; int state; scalar_t__ (* testram ) (TYPE_2__*) ;int (* stopcard ) (TYPE_2__*) ;struct boot_data* boot; } ;
typedef TYPE_2__ hysdn_card ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct boot_data*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 struct boot_data* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

int
FUNC_5(hysdn_card * VAR_9, unsigned char **VAR_10)
{
 struct boot_data *VAR_11;

 if (VAR_9->boot) {
  if (VAR_9->debug_flags & VAR_7)
   FUNC_1(VAR_9, "POF open: already opened for boot");
  return (-VAR_3);
 }

 if (!(VAR_11 = FUNC_2(sizeof(struct boot_data), VAR_5))) {
  if (VAR_9->debug_flags & VAR_6)
   FUNC_1(VAR_9, "POF open: unable to allocate mem");
  return (-VAR_2);
 }
 VAR_9->boot = VAR_11;
 VAR_9->state = VAR_1;

 VAR_9->stopcard(VAR_9);
 if (VAR_9->testram(VAR_9)) {
  if (VAR_9->debug_flags & VAR_7)
   FUNC_1(VAR_9, "POF open: DPRAM test failure");
  VAR_11->last_error = -VAR_4;
  VAR_9->state = VAR_0;
  return (VAR_11->last_error);
 }
 VAR_11->BufSize = 0;
 VAR_11->pof_state = VAR_8;
 FUNC_0(VAR_11);

 if (VAR_9->debug_flags & VAR_7)
  FUNC_1(VAR_9, "POF open: success");

 *VAR_10 = VAR_11->buf.BootBuf;
 return (sizeof(tPofFileHdr));
}
