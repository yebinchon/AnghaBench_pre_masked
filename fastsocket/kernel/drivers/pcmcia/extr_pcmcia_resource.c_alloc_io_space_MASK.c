
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct pcmcia_socket {int features; unsigned int io_offset; TYPE_1__* io; } ;
struct TYPE_5__ {unsigned int start; int flags; int end; } ;
struct TYPE_4__ {unsigned int InUse; TYPE_2__* res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_socket*,int ,char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,unsigned int,unsigned int,struct pcmcia_socket*) ;
 TYPE_2__* FUNC_2 (unsigned int,unsigned int,unsigned int,struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_socket *VAR_3, u_int VAR_4,
     unsigned int *VAR_5, unsigned int VAR_6, u_int VAR_7)
{
 int VAR_8;
 unsigned int VAR_9, VAR_10;

 VAR_10 = (*VAR_5) ? (VAR_7 ? 1<<VAR_7 : 0) : 1;
 if (VAR_10 && (VAR_10 < VAR_6)) {
  if (*VAR_5) {
   FUNC_0(VAR_3, 0, "odd IO request: num %#x align %#x\n",
          VAR_6, VAR_10);
   VAR_10 = 0;
  } else
   while (VAR_10 && (VAR_10 < VAR_6)) VAR_10 <<= 1;
 }
 if (*VAR_5 & ~(VAR_10-1)) {
  FUNC_0(VAR_3, 0, "odd IO request: base %#x align %#x\n",
         *VAR_5, VAR_10);
  VAR_10 = 0;
 }
 if ((VAR_3->features & VAR_2) && VAR_3->io_offset) {
  *VAR_5 = VAR_3->io_offset | (*VAR_5 & 0x0fff);
  return 0;
 }




 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  if ((VAR_3->io[VAR_8].res) && *VAR_5 &&
      ((VAR_3->io[VAR_8].res->start & (VAR_10-1)) == *VAR_5))
   return 1;
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (!VAR_3->io[VAR_8].res) {
   VAR_3->io[VAR_8].res = FUNC_2(*VAR_5, VAR_6, VAR_10, VAR_3);
   if (VAR_3->io[VAR_8].res) {
    *VAR_5 = VAR_3->io[VAR_8].res->start;
    VAR_3->io[VAR_8].res->flags = (VAR_3->io[VAR_8].res->flags & ~VAR_0) | (VAR_4 & VAR_0);
    VAR_3->io[VAR_8].InUse = VAR_6;
    break;
   } else
    return 1;
  } else if ((VAR_3->io[VAR_8].res->flags & VAR_0) != (VAR_4 & VAR_0))
   continue;

  VAR_9 = VAR_3->io[VAR_8].res->end + 1;
  if ((*VAR_5 == 0) || (*VAR_5 == VAR_9))
   if (FUNC_1(VAR_3->io[VAR_8].res, VAR_3->io[VAR_8].res->start,
          VAR_3->io[VAR_8].res->end + VAR_6, VAR_3) == 0) {
    *VAR_5 = VAR_9;
    VAR_3->io[VAR_8].InUse += VAR_6;
    break;
   }

  VAR_9 = VAR_3->io[VAR_8].res->start - VAR_6;
  if ((*VAR_5 == 0) || (*VAR_5 == VAR_9))
   if (FUNC_1(VAR_3->io[VAR_8].res, VAR_3->io[VAR_8].res->start - VAR_6,
          VAR_3->io[VAR_8].res->end, VAR_3) == 0) {
    *VAR_5 = VAR_9;
    VAR_3->io[VAR_8].InUse += VAR_6;
    break;
   }
 }
 return (VAR_8 == VAR_1);
}
