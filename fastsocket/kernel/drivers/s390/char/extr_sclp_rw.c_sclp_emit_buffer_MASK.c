
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ header; } ;
struct write_sccb {TYPE_2__ msg_buf; } ;
struct TYPE_8__ {struct write_sccb* sccb; struct sclp_buffer* callback_data; int callback; int status; int command; } ;
struct sclp_buffer {scalar_t__ mto_number; void (* callback ) (struct sclp_buffer*,int) ;TYPE_4__ request; struct write_sccb* sccb; int * current_line; } ;
struct TYPE_7__ {int sclp_receive_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct sclp_buffer*) ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;

int
FUNC_2(struct sclp_buffer *VAR_10,
   void (*VAR_11)(struct sclp_buffer *, int))
{
 struct write_sccb *VAR_12;


 if (VAR_10->current_line != ((void*)0))
  FUNC_1(VAR_10);


 if (VAR_10->mto_number == 0)
  return -VAR_0;

 VAR_12 = VAR_10->sccb;
 if (VAR_8.sclp_receive_mask & VAR_3)

  VAR_12->msg_buf.header.type = VAR_2;
 else if (VAR_8.sclp_receive_mask & VAR_5)

  VAR_12->msg_buf.header.type = VAR_4;
 else
  return -VAR_1;
 VAR_10->request.command = VAR_6;
 VAR_10->request.status = VAR_7;
 VAR_10->request.callback = VAR_9;
 VAR_10->request.callback_data = VAR_10;
 VAR_10->request.sccb = VAR_12;
 VAR_10->callback = VAR_11;
 return FUNC_0(&VAR_10->request);
}
