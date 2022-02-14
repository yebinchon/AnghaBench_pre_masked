
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgbuf {int msg_bufx; int msg_size; scalar_t__ msg_bufc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (void*,char const*,int) ;
 int VAR_1 ;
 struct msgbuf* VAR_2 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_3, int VAR_4)
{
 struct msgbuf *VAR_5;

 FUNC_0(&VAR_1, VAR_0);

 VAR_5 = VAR_2;

 if (VAR_5->msg_bufx + VAR_4 <= VAR_5->msg_size) {
  FUNC_1((void *)(VAR_5->msg_bufc + VAR_5->msg_bufx), VAR_3, VAR_4);

  VAR_5->msg_bufx += VAR_4;
  if (VAR_5->msg_bufx == VAR_5->msg_size) {
   VAR_5->msg_bufx = 0;
  }
 } else {

  int VAR_6 = VAR_5->msg_size - VAR_5->msg_bufx;
  FUNC_1((void *)(VAR_5->msg_bufc + VAR_5->msg_bufx), VAR_3, VAR_6);

  VAR_4 -= VAR_6;
  VAR_3 += VAR_6;


  FUNC_1((void *)VAR_5->msg_bufc, VAR_3, VAR_4);
  VAR_5->msg_bufx = VAR_4;
 }
 return;
}
