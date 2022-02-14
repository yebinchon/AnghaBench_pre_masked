
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty3270 {scalar_t__* esc_par; } ;



__attribute__((used)) static inline int
FUNC_0(struct tty3270 *VAR_0, int VAR_1)
{
 return (VAR_0->esc_par[VAR_1] > 0) ? VAR_0->esc_par[VAR_1] : 1;
}
