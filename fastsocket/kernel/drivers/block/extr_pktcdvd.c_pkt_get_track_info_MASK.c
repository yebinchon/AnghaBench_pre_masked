
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int track_information_length; } ;
typedef TYPE_1__ track_information ;
struct pktcdvd_device {int dummy; } ;
struct packet_command {int* cmd; int quiet; int buflen; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct packet_command*,TYPE_1__*,int,int ) ;
 int FUNC_2 (struct pktcdvd_device*,struct packet_command*) ;

__attribute__((used)) static int FUNC_3(struct pktcdvd_device *VAR_2, __u16 VAR_3, __u8 VAR_4, track_information *VAR_5)
{
 struct packet_command VAR_6;
 int VAR_7;

 FUNC_1(&VAR_6, VAR_5, 8, VAR_0);
 VAR_6.cmd[0] = VAR_1;
 VAR_6.cmd[1] = VAR_4 & 3;
 VAR_6.cmd[4] = (VAR_3 & 0xff00) >> 8;
 VAR_6.cmd[5] = VAR_3 & 0xff;
 VAR_6.cmd[8] = 8;
 VAR_6.quiet = 1;

 if ((VAR_7 = FUNC_2(VAR_2, &VAR_6)))
  return VAR_7;

 VAR_6.buflen = FUNC_0(VAR_5->track_information_length) +
       sizeof(VAR_5->track_information_length);

 if (VAR_6.buflen > sizeof(track_information))
  VAR_6.buflen = sizeof(track_information);

 VAR_6.cmd[8] = VAR_6.buflen;
 return FUNC_2(VAR_2, &VAR_6);
}
