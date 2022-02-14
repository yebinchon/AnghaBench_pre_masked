
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ringbuffer {scalar_t__ pread; scalar_t__ pwrite; } ;



int FUNC_0(struct dvb_ringbuffer *VAR_0)
{
 return (VAR_0->pread==VAR_0->pwrite);
}
