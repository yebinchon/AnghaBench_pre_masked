
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct amo {int variable; } ;
struct TYPE_2__ {scalar_t__ amos_page_pa; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void
FUNC_8(int VAR_6)
{
 unsigned long VAR_7;
 struct amo *VAR_8 = (struct amo *)FUNC_4(VAR_5->amos_page_pa +
           (VAR_1 *
           sizeof(struct amo)));


 FUNC_2(FUNC_3((u64)&VAR_8[FUNC_1(VAR_6 / 2)].variable),
    VAR_0, FUNC_0(VAR_6 / 2));

 FUNC_5(&VAR_3, VAR_7);
 VAR_2++;
 FUNC_6(&VAR_3, VAR_7);

 FUNC_7(&VAR_4);
}
