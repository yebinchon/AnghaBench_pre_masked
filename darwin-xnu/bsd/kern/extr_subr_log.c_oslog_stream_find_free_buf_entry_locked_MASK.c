
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct msgbuf {int msg_bufr; int msg_size; } ;
typedef TYPE_1__* oslog_stream_buf_entry_t ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct msgbuf* VAR_7 ;

__attribute__((used)) static oslog_stream_buf_entry_t
FUNC_5(void)
{
 struct msgbuf *VAR_8;
 oslog_stream_buf_entry_t VAR_9 = ((void*)0);

 FUNC_0(&VAR_6, VAR_0);

 VAR_8 = VAR_7;

 VAR_9 = FUNC_1(&VAR_4);
 if (VAR_9) {
  FUNC_4(&VAR_4, VAR_1);
 }
 else {


  oslog_stream_buf_entry_t VAR_10 = ((void*)0);

  VAR_9 = FUNC_1(&VAR_3);
  while (VAR_9->type == VAR_5) {
   VAR_10 = VAR_9;
   VAR_9 = FUNC_2(VAR_9, VAR_1);
  }

  if (VAR_10 == ((void*)0)) {
   FUNC_4(&VAR_3, VAR_1);
  }
  else {
   FUNC_3(&VAR_3, VAR_10, VAR_1);
  }

  VAR_8->msg_bufr += VAR_9->size;
  VAR_2++;
  if (VAR_8->msg_bufr >= VAR_8->msg_size) {
   VAR_8->msg_bufr = (VAR_8->msg_bufr % VAR_8->msg_size);
  }
 }

 return VAR_9;
}
