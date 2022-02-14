
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct thash_data {scalar_t__ rid; scalar_t__ vadr; int ps; scalar_t__ p; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct thash_data *VAR_0, u64 VAR_1, u64 VAR_2)
{
 return ((VAR_0->p) && (VAR_0->rid == VAR_1)
    && ((VAR_2-VAR_0->vadr) < FUNC_0(VAR_0->ps)));
}
