
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethoc_bd {int addr; int stat; } ;
struct ethoc {int dummy; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ethoc*,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ethoc *VAR_1, int VAR_2,
  const struct ethoc_bd *VAR_3)
{
 loff_t VAR_4 = VAR_0 + (VAR_2 * sizeof(struct ethoc_bd));
 FUNC_0(VAR_1, VAR_4 + 0, VAR_3->stat);
 FUNC_0(VAR_1, VAR_4 + 4, VAR_3->addr);
}
