
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcmcia_socket {int dummy; } ;
struct TYPE_5__ {int map; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ pccard_mem_map ;
struct TYPE_6__ {int member_4; int map; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ pccard_io_map ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct pcmcia_socket*,TYPE_2__*) ;
 int FUNC_2 (struct pcmcia_socket*,TYPE_1__*) ;
 int FUNC_3 (struct pcmcia_socket*,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct pcmcia_socket *VAR_4)
{
 int VAR_5;
 pccard_io_map VAR_6 = { 0, 0, 0, 0, 1 };
 pccard_mem_map VAR_7 = { 0, 0, 0, 0, 0, 0 };

 FUNC_0("sock_init(%d)\n", VAR_3);

 FUNC_3(VAR_4, &VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6.map = VAR_5;
  FUNC_1(VAR_4, &VAR_6);
 }
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_7.map = VAR_5;
  FUNC_2(VAR_4, &VAR_7);
 }

 return 0;

}
