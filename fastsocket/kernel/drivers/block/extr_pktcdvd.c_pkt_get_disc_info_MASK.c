
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pktcdvd_device {int dummy; } ;
struct packet_command {int* cmd; int buflen; int quiet; } ;
struct TYPE_4__ {int disc_information_length; } ;
typedef TYPE_1__ disc_information ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct packet_command*,TYPE_1__*,int,int ) ;
 int FUNC_2 (struct pktcdvd_device*,struct packet_command*) ;

__attribute__((used)) static int FUNC_3(struct pktcdvd_device *VAR_2, disc_information *VAR_3)
{
 struct packet_command VAR_4;
 int VAR_5;


 FUNC_1(&VAR_4, VAR_3, sizeof(*VAR_3), VAR_0);
 VAR_4.cmd[0] = VAR_1;
 VAR_4.cmd[8] = VAR_4.buflen = 2;
 VAR_4.quiet = 1;

 if ((VAR_5 = FUNC_2(VAR_2, &VAR_4)))
  return VAR_5;




 VAR_4.buflen = FUNC_0(VAR_3->disc_information_length) +
       sizeof(VAR_3->disc_information_length);

 if (VAR_4.buflen > sizeof(disc_information))
  VAR_4.buflen = sizeof(disc_information);

 VAR_4.cmd[8] = VAR_4.buflen;
 return FUNC_2(VAR_2, &VAR_4);
}
