
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct amo {int dummy; } ;
struct TYPE_2__ {struct amo* amos_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (unsigned long*,int) ;
 int FUNC_2 (unsigned long*,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int) ;
 unsigned long* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_4 (struct amo*) ;
 TYPE_1__* VAR_6 ;

int
FUNC_5(void)
{
 int VAR_7;
 int VAR_8;
 unsigned long VAR_9;
 u64 VAR_10;
 int VAR_11 = 0;
 struct amo *VAR_12;

 VAR_12 = VAR_6->amos_page + VAR_1;


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {

  if (VAR_2)
   break;

  VAR_9 = FUNC_4(&VAR_12[VAR_7]);

  VAR_8 = FUNC_1(&VAR_9, VAR_0);
  if (VAR_8 >= VAR_0) {

   continue;
  }

  FUNC_0(VAR_5, "amo[%d] gave back 0x%lx\n", VAR_7,
   VAR_9);







  VAR_3[VAR_7] |= VAR_9;



  do {
   VAR_11++;
   VAR_10 = (VAR_7 * VAR_0 + VAR_8) * 2;
   FUNC_0(VAR_5, "interrupt from nasid %lld\n", VAR_10);
   FUNC_3(VAR_10);

   VAR_8 = FUNC_2(&VAR_9, VAR_0,
       VAR_8 + 1);
  } while (VAR_8 < VAR_0);
 }
 return VAR_11;
}
