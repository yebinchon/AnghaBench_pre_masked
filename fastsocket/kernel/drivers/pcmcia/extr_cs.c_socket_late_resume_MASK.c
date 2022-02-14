
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int state; scalar_t__ resume_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pcmcia_socket*,int,char*) ;
 int FUNC_1 (struct pcmcia_socket*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pcmcia_socket*,int ,int ) ;
 int FUNC_4 (struct pcmcia_socket*) ;
 int FUNC_5 (struct pcmcia_socket*) ;
 int FUNC_6 (struct pcmcia_socket*) ;
 scalar_t__ FUNC_7 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_8(struct pcmcia_socket *VAR_5)
{
 if (!(VAR_5->state & VAR_3)) {
  VAR_5->state &= ~VAR_4;
  return FUNC_4(VAR_5);
 }

 if (VAR_5->resume_status == 0) {



  if (FUNC_7(VAR_5) != 0) {
   FUNC_0(VAR_5, 4, "cis mismatch - different card\n");
   FUNC_5(VAR_5);
   FUNC_1(VAR_5);





   FUNC_2(200);
   FUNC_3(VAR_5, VAR_0, VAR_2);
  } else {
   FUNC_0(VAR_5, 4, "cis matches cache\n");
   FUNC_3(VAR_5, VAR_1, VAR_2);
  }
 } else {
  FUNC_6(VAR_5);
 }

 VAR_5->state &= ~VAR_4;

 return 0;
}
