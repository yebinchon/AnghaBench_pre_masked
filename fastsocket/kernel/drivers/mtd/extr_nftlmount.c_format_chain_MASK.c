
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NFTLrecord {unsigned int* ReplUnitTable; unsigned int nb_blocks; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct NFTLrecord*,unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct NFTLrecord *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_4, VAR_6;

 FUNC_1("Formatting chain at block %d\n", VAR_4);

 for (;;) {
  VAR_6 = VAR_3->ReplUnitTable[VAR_5];

  FUNC_1("Formatting block %d\n", VAR_5);
  if (FUNC_0(VAR_3, VAR_5) < 0) {

   VAR_3->ReplUnitTable[VAR_5] = VAR_2;
  } else {
   VAR_3->ReplUnitTable[VAR_5] = VAR_0;
  }


  VAR_5 = VAR_6;

  if (!(VAR_5 == VAR_1 || VAR_5 < VAR_3->nb_blocks))
   FUNC_1("incorrect ReplUnitTable[] : %d\n", VAR_5);
  if (VAR_5 == VAR_1 || VAR_5 >= VAR_3->nb_blocks)
   break;
 }
}
