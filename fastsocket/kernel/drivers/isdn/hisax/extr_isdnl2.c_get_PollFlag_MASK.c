
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sk_buff {int* data; } ;
struct PStack {int l2; } ;


 size_t FUNC_0 (int *) ;

__attribute__((used)) static inline u_char
FUNC_1(struct PStack * VAR_0, struct sk_buff * VAR_1)
{
 return (VAR_1->data[FUNC_0(&(VAR_0->l2))] & 0x10);
}
