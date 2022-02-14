
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ledger_entry {int le_flags; } ;
typedef int event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct ledger_entry*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void
FUNC_3(struct ledger_entry *VAR_2)
{
 uint32_t VAR_3;

 if (!FUNC_1(VAR_2)) {
  VAR_3 = FUNC_0(&VAR_2->le_flags, VAR_0);

  while (VAR_2->le_flags & VAR_1) {
   FUNC_0(&VAR_2->le_flags, VAR_1);
   FUNC_2((event_t)VAR_2);
  }
 }
}
