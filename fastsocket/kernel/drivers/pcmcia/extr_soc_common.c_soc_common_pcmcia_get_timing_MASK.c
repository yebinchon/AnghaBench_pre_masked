
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_timing {void* attr; void* mem; void* io; } ;
struct soc_pcmcia_socket {int spd_attr; int spd_mem; int spd_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct soc_pcmcia_socket *VAR_4, struct soc_pcmcia_timing *VAR_5)
{
 VAR_5->io = FUNC_0(VAR_4->spd_io, VAR_0, VAR_3);
 VAR_5->mem = FUNC_0(VAR_4->spd_mem, VAR_1, VAR_2);
 VAR_5->attr = FUNC_0(VAR_4->spd_attr, VAR_1, VAR_2);
}
