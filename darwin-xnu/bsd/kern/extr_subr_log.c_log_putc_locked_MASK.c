
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgbuf {char* msg_bufc; scalar_t__ msg_bufx; scalar_t__ msg_size; } ;



void
FUNC_0(struct msgbuf *VAR_0, char VAR_1)
{
 VAR_0->msg_bufc[VAR_0->msg_bufx++] = VAR_1;
 if (VAR_0->msg_bufx >= VAR_0->msg_size)
  VAR_0->msg_bufx = 0;
}
