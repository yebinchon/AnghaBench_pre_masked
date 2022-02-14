
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int numclusters; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;

void FUNC_1 (byte *VAR_1, byte *VAR_2)
{
 int VAR_3;
 byte *VAR_4;
 int VAR_5;


 VAR_5 = (VAR_0->numclusters+7)>>3;
 VAR_4 = VAR_2;

 do
 {
  if (*VAR_1)
  {
   *VAR_4++ = *VAR_1++;
   continue;
  }

  VAR_3 = VAR_1[1];
  if (!VAR_3)
   FUNC_0 ("DecompressVis: 0 repeat");
  VAR_1 += 2;
  while (VAR_3)
  {
   *VAR_4++ = 0;
   VAR_3--;
  }
 } while (VAR_4 - VAR_2 < VAR_5);
}
