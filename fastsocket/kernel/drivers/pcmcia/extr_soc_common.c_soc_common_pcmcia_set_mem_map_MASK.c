
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct soc_pcmcia_socket {unsigned short* spd_attr; unsigned short* spd_mem; TYPE_1__* ops; struct resource res_mem; struct resource res_attr; } ;
struct pcmcia_socket {int dummy; } ;
struct pccard_mem_map {unsigned short speed; size_t map; int flags; scalar_t__ card_start; scalar_t__ static_start; } ;
struct TYPE_2__ {int (* set_timing ) (struct soc_pcmcia_socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct soc_pcmcia_socket*,int,char*,...) ;
 int FUNC_1 (struct soc_pcmcia_socket*) ;
 struct soc_pcmcia_socket* FUNC_2 (struct pcmcia_socket*) ;

__attribute__((used)) static int
FUNC_3(struct pcmcia_socket *VAR_9, struct pccard_mem_map *VAR_10)
{
 struct soc_pcmcia_socket *VAR_11 = FUNC_2(VAR_9);
 struct resource *VAR_12;
 unsigned short VAR_13 = VAR_10->speed;

 FUNC_0(VAR_11, 2, "map %u speed %u card_start %08x\n",
  VAR_10->map, VAR_10->speed, VAR_10->card_start);
 FUNC_0(VAR_11, 2, "flags: %s%s%s%s%s%s%s%s\n",
  (VAR_10->flags==0)?"<NONE>":"",
  (VAR_10->flags&VAR_3)?"ACTIVE ":"",
  (VAR_10->flags&VAR_2)?"16BIT ":"",
  (VAR_10->flags&VAR_5)?"AUTOSZ ":"",
  (VAR_10->flags&VAR_1)?"0WS ":"",
  (VAR_10->flags&VAR_7)?"WRPROT ":"",
  (VAR_10->flags&VAR_4)?"ATTRIB ":"",
  (VAR_10->flags&VAR_6)?"USE_WAIT ":"");

 if (VAR_10->map >= VAR_8)
  return -VAR_0;

 if (VAR_10->flags & VAR_3) {
  if (VAR_13 == 0)
   VAR_13 = 300;
 } else {
  VAR_13 = 0;
 }

 if (VAR_10->flags & VAR_4) {
  VAR_12 = &VAR_11->res_attr;
  VAR_11->spd_attr[VAR_10->map] = VAR_13;
  VAR_11->spd_mem[VAR_10->map] = 0;
 } else {
  VAR_12 = &VAR_11->res_mem;
  VAR_11->spd_attr[VAR_10->map] = 0;
  VAR_11->spd_mem[VAR_10->map] = VAR_13;
 }

 VAR_11->ops->set_timing(VAR_11);

 VAR_10->static_start = VAR_12->start + VAR_10->card_start;

 return 0;
}
