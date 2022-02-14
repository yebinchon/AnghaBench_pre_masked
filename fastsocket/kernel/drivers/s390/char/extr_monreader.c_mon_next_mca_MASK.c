
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_msg {int mca_offset; scalar_t__ pos; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mon_msg*) ;

__attribute__((used)) static inline void FUNC_2(struct mon_msg *VAR_0)
{
 if (FUNC_0((FUNC_1(VAR_0) - VAR_0->mca_offset) == 12))
  return;
 VAR_0->mca_offset += 12;
 VAR_0->pos = 0;
}
