
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int demux; } ;
struct saa7164_port {TYPE_1__ dvb; } ;
struct saa7164_buffer {scalar_t__ cpu; struct saa7164_port* port; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct saa7164_buffer *VAR_1)
{
 struct saa7164_port *VAR_2 = VAR_1->port;


 FUNC_0(&VAR_2->dvb.demux, (u8 *)VAR_1->cpu,
  VAR_0);

}
