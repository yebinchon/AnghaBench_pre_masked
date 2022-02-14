
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mid_q_entry {int mid_state; scalar_t__ resp_buf; struct cifs_writedata* callback_data; } ;
struct cifs_writedata {unsigned int bytes; int work; int result; TYPE_1__* cfile; } ;
struct cifs_tcon {TYPE_2__* ses; } ;
struct TYPE_6__ {int Count; int CountHigh; } ;
typedef TYPE_3__ WRITE_RSP ;
struct TYPE_5__ {int server; } ;
struct TYPE_4__ {int tlink; } ;


 int FUNC_0 (struct mid_q_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mid_q_entry*,int ,int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct cifs_tcon* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct mid_q_entry *VAR_3)
{
 struct cifs_writedata *VAR_4 = VAR_3->callback_data;
 struct cifs_tcon *VAR_5 = FUNC_5(VAR_4->cfile->tlink);
 unsigned int VAR_6;
 WRITE_RSP *VAR_7 = (WRITE_RSP *)VAR_3->resp_buf;

 switch (VAR_3->mid_state) {
 case 129:
  VAR_4->result = FUNC_2(VAR_3, VAR_5->ses->server, 0);
  if (VAR_4->result != 0)
   break;

  VAR_6 = FUNC_3(VAR_7->CountHigh);
  VAR_6 <<= 16;
  VAR_6 += FUNC_3(VAR_7->Count);






  if (VAR_6 > VAR_4->bytes)
   VAR_6 &= 0xFFFF;

  if (VAR_6 < VAR_4->bytes)
   VAR_4->result = -VAR_2;
  else
   VAR_4->bytes = VAR_6;
  break;
 case 130:
 case 128:
  VAR_4->result = -VAR_0;
  break;
 default:
  VAR_4->result = -VAR_1;
  break;
 }

 FUNC_4(&VAR_4->work);
 FUNC_0(VAR_3);
 FUNC_1(VAR_5->ses->server, 1);
}
