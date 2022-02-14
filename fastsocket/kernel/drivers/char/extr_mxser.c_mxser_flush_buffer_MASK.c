
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct mxser_port* driver_data; } ;
struct mxser_port {int slock; scalar_t__ ioaddr; scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; } ;


 scalar_t__ VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char FUNC_0 (scalar_t__) ;
 int FUNC_1 (char,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_3)
{
 struct mxser_port *VAR_4 = VAR_3->driver_data;
 char VAR_5;
 unsigned long VAR_6;


 FUNC_2(&VAR_4->slock, VAR_6);
 VAR_4->xmit_cnt = VAR_4->xmit_head = VAR_4->xmit_tail = 0;

 VAR_5 = FUNC_0(VAR_4->ioaddr + VAR_0);
 FUNC_1((VAR_5 | VAR_1 | VAR_2),
  VAR_4->ioaddr + VAR_0);
 FUNC_1(VAR_5, VAR_4->ioaddr + VAR_0);

 FUNC_3(&VAR_4->slock, VAR_6);

 FUNC_4(VAR_3);
}
