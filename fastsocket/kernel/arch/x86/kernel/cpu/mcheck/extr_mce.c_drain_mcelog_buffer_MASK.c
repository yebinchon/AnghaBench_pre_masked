
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mce {int finished; } ;
struct TYPE_2__ {int next; struct mce* entry; } ;


 int FUNC_0 (int *,int ,struct mce*) ;
 unsigned int FUNC_1 (int *,unsigned int,int ) ;
 int FUNC_2 () ;
 unsigned long VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (struct mce*,int ,unsigned int) ;
 int FUNC_4 (char*) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(void)
{
 unsigned int VAR_3, VAR_4, VAR_5 = 0;

 VAR_3 = FUNC_5(VAR_1.next);

 do {
  struct mce *VAR_6;


  for (VAR_4 = VAR_5; VAR_4 < VAR_3; VAR_4++) {
   unsigned long VAR_7 = VAR_0;
   unsigned VAR_8 = 1;

   VAR_6 = &VAR_1.entry[VAR_4];

   while (!VAR_6->finished) {
    if (FUNC_7(VAR_0, VAR_7 + 2*VAR_8))
     VAR_8++;

    FUNC_2();

    if (!VAR_6->finished && VAR_8 >= 4) {
     FUNC_4("MCE: skipping error being logged currently!\n");
     break;
    }
   }
   FUNC_6();
   FUNC_0(&VAR_2, 0, VAR_6);
  }

  FUNC_3(VAR_1.entry + VAR_5, 0, (VAR_3 - VAR_5) * sizeof(*VAR_6));
  VAR_5 = VAR_3;
  VAR_3 = FUNC_1(&VAR_1.next, VAR_5, 0);
 } while (VAR_3 != VAR_5);
}
