
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pcmcia_socket {int dummy; } ;
struct pccard_io_map {size_t map; int flags; unsigned int speed; unsigned int start; scalar_t__ stop; } ;
struct au1000_pcmcia_socket {unsigned int* spd_io; scalar_t__ virt_io; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,size_t) ;
 struct au1000_pcmcia_socket* FUNC_1 (struct pcmcia_socket*) ;

int
FUNC_2(struct pcmcia_socket *VAR_4, struct pccard_io_map *VAR_5)
{
 struct au1000_pcmcia_socket *VAR_6 = FUNC_1(VAR_4);
 unsigned int VAR_7;

 if(VAR_5->map>=VAR_3){
  FUNC_0("map (%d) out of range\n", VAR_5->map);
  return -1;
 }

 if(VAR_5->flags&VAR_1){
  VAR_7=(VAR_5->speed>0)?VAR_5->speed:VAR_0;
  VAR_6->spd_io[VAR_5->map] = VAR_7;
 }

 VAR_5->start=(unsigned int)(u32)VAR_6->virt_io;
 VAR_5->stop=VAR_5->start+VAR_2;
 return 0;

}
