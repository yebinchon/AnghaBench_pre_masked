
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char group; } ;
struct scc_channel {int* wreg; scalar_t__ dcd; scalar_t__ dev; TYPE_1__ kiss; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 struct scc_channel* VAR_4 ;
 unsigned char VAR_5 ;

__attribute__((used)) static inline int FUNC_0(struct scc_channel *VAR_6)
{
 int VAR_7;
 struct scc_channel *VAR_8;
 unsigned char VAR_9, VAR_10;

 VAR_9 = VAR_6->kiss.group;

 for (VAR_7 = 0; VAR_7 < (VAR_0 * 2); VAR_7++)
 {
  VAR_8 = &VAR_4[VAR_7];
  VAR_10 = VAR_8->kiss.group;

  if (VAR_8 == VAR_6 || !(VAR_8->dev && VAR_10))
   continue;

  if ((VAR_9 & 0x3f) == (VAR_10 & 0x3f))
  {
   if ( (VAR_9 & VAR_5) && (VAR_8->wreg[VAR_1] & VAR_2) )
    return 1;

   if ( (VAR_9 & VAR_3) && VAR_8->dcd )
    return 1;
  }
 }
 return 0;
}
