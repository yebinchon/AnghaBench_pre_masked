
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pcmcia_socket {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcmcia_socket*,struct resource*) ;
 struct resource* FUNC_1 (struct pcmcia_socket*,unsigned long,unsigned long,int ,char*) ;
 int FUNC_2 (struct resource*) ;

__attribute__((used)) static int
FUNC_3(struct pcmcia_socket *VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 struct resource *VAR_4, *VAR_5;
 int VAR_6 = -1, VAR_7 = -1;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3/2, VAR_0, "cs memory probe");
 VAR_5 = FUNC_1(VAR_1, VAR_2 + VAR_3/2, VAR_3/2, VAR_0, "cs memory probe");

 if (VAR_4 && VAR_5) {
  VAR_6 = FUNC_0(VAR_1, VAR_4);
  VAR_7 = FUNC_0(VAR_1, VAR_5);
 }

 FUNC_2(VAR_5);
 FUNC_2(VAR_4);

 return (VAR_6 == VAR_7) && (VAR_6 >= 0);
}
