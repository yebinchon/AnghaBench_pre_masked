
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int used; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (char*,int,...) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static unsigned long FUNC_3(int VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_5 < VAR_1) {
  FUNC_2("Size 0x%x too small for nocache request\n", VAR_5);
  VAR_5 = VAR_1;
 }
 if (VAR_5 & (VAR_1-1)) {
  FUNC_2("Size 0x%x unaligned int nocache request\n", VAR_5);
  VAR_5 += VAR_1-1;
 }
 FUNC_0(VAR_6 > VAR_0);

 VAR_7 = FUNC_1(&VAR_3,
            VAR_5 >> VAR_1,
     VAR_6 >> VAR_1);
 if (VAR_7 == -1) {
  FUNC_2("srmmu: out of nocache %d: %d/%d\n",
      VAR_5, (int) VAR_4,
      VAR_3.used << VAR_1);
  return 0;
 }

 return (VAR_2 + (VAR_7 << VAR_1));
}
