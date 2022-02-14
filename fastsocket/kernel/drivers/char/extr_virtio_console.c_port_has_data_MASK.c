
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int inbuf_lock; scalar_t__ inbuf; } ;


 scalar_t__ FUNC_0 (struct port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct port *VAR_0)
{
 unsigned long VAR_1;
 bool VAR_2;

 VAR_2 = 0;
 FUNC_1(&VAR_0->inbuf_lock, VAR_1);
 VAR_0->inbuf = FUNC_0(VAR_0);
 if (VAR_0->inbuf)
  VAR_2 = 1;

 FUNC_2(&VAR_0->inbuf_lock, VAR_1);
 return VAR_2;
}
