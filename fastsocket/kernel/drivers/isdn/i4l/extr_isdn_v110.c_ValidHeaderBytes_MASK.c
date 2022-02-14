
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int decodelen; int nbytes; int* decodebuf; int key; } ;
typedef TYPE_1__ isdn_v110_stream ;



__attribute__((used)) static int
FUNC_0(isdn_v110_stream * VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; (VAR_1 < VAR_0->decodelen) && (VAR_1 < VAR_0->nbytes); VAR_1++)
  if ((VAR_0->decodebuf[VAR_1] & VAR_0->key) != 0)
   break;
 return VAR_1;
}
