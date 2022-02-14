
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_card {int wait_q; } ;


 scalar_t__ FUNC_0 (struct lcs_card*,unsigned long) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct lcs_card *VAR_0, unsigned long VAR_1)
{
        return FUNC_1(VAR_0->wait_q,
                        FUNC_0(VAR_0, VAR_1) == 0);
}
