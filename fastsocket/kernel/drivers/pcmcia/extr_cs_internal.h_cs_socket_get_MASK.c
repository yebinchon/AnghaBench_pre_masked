
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int state; int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct pcmcia_socket *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->state & VAR_0);

 VAR_2 = FUNC_1(VAR_1->owner);
 if (VAR_2)
  VAR_1->state |= VAR_0;
 return VAR_2;
}
