
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amo {int dummy; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (struct amo*,int ,int,int,int ) ;

__attribute__((used)) static void
FUNC_4(unsigned long VAR_2, int VAR_3,
     int VAR_4, int VAR_5)
{
 struct amo *VAR_6 = (struct amo *)FUNC_2(VAR_2 +
           (VAR_1 *
           sizeof(struct amo)));

 (void)FUNC_3(&VAR_6[FUNC_1(VAR_3 / 2)],
          FUNC_0(VAR_3 / 2), VAR_4,
          VAR_5, VAR_0);
}
