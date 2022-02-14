
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {int name; } ;


 int FUNC_0 (struct slabinfo*,struct slabinfo*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct slabinfo*) ;
 scalar_t__ FUNC_2 (struct slabinfo*) ;
 struct slabinfo* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct slabinfo *VAR_5,*VAR_6;

 for (VAR_5 = VAR_1; VAR_5 < VAR_1 + VAR_2; VAR_5++) {
  for (VAR_6 = VAR_5 + 1; VAR_6 < VAR_1 + VAR_2; VAR_6++) {
   int VAR_7;

   if (VAR_4)
    VAR_7 = FUNC_2(VAR_5) < FUNC_2(VAR_6);
   else if (VAR_3)
    VAR_7 = FUNC_1(VAR_5) < FUNC_1(VAR_6);
   else
    VAR_7 = FUNC_3(VAR_5->name, VAR_6->name);

   if (VAR_0)
    VAR_7 = -VAR_7;

   if (VAR_7 > 0) {
    struct slabinfo VAR_8;

    FUNC_0(&VAR_8, VAR_5, sizeof(struct slabinfo));
    FUNC_0(VAR_5, VAR_6, sizeof(struct slabinfo));
    FUNC_0(VAR_6, &VAR_8, sizeof(struct slabinfo));
   }
  }
 }
}
