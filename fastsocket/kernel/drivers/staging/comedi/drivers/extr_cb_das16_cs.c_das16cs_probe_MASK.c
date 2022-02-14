
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int dummy; } ;
struct das16cs_board {int device_id; } ;
struct comedi_device {int dummy; } ;


 struct das16cs_board const* VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct pcmcia_device*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static const struct das16cs_board *FUNC_2(struct comedi_device *VAR_2,
       struct pcmcia_device *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_0[VAR_5].device_id == VAR_4) {
   return VAR_0 + VAR_5;
  }
 }

 FUNC_1("unknown board!\n");

 return ((void*)0);
}
