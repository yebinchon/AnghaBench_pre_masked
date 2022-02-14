
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {int dummy; } ;
struct packet_command {int* cmd; int quiet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct packet_command*,int *,int ,int ) ;
 int FUNC_1 (struct pktcdvd_device*,struct packet_command*) ;

__attribute__((used)) static int FUNC_2(struct pktcdvd_device *VAR_2)
{
 struct packet_command VAR_3;

 FUNC_0(&VAR_3, ((void*)0), 0, VAR_0);
 VAR_3.cmd[0] = VAR_1;
 VAR_3.quiet = 1;
 return FUNC_1(VAR_2, &VAR_3);
}
