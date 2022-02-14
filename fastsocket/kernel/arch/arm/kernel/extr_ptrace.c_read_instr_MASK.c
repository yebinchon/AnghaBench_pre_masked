
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u32 ;
typedef int u16 ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,unsigned long,int *,int,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct task_struct *VAR_1, unsigned long VAR_2, u32 *VAR_3)
{
 int VAR_4;

 if (VAR_2 & 1) {
  u16 VAR_5;
  VAR_4 = FUNC_0(VAR_1, VAR_2 & ~1, &VAR_5, sizeof(VAR_5), 0);
  VAR_4 = VAR_4 == sizeof(VAR_5) ? 0 : -VAR_0;
  *VAR_3 = VAR_5;
 } else {
  u32 VAR_6;
  VAR_4 = FUNC_0(VAR_1, VAR_2 & ~3, &VAR_6, sizeof(VAR_6), 0);
  VAR_4 = VAR_4 == sizeof(VAR_6) ? 0 : -VAR_0;
  *VAR_3 = VAR_6;
 }
 return VAR_4;
}
