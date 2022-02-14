
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct radix_node {char* rn_key; char* rn_mask; } ;
typedef int rn_matchf_t ;


 int FUNC_0 (struct radix_node*,int *,void*) ;
 int FUNC_1 (int,int) ;
 char* VAR_0 ;

__attribute__((used)) static int
FUNC_2(char *VAR_1, struct radix_node *VAR_2, int VAR_3,
    rn_matchf_t *VAR_4, void *VAR_5)
{
 char *VAR_6 = VAR_1, *VAR_7 = VAR_2->rn_key, *VAR_8 = VAR_2->rn_mask;
 char *VAR_9;
 int VAR_10 = FUNC_1(*(u_char *)VAR_6, *(u_char *)VAR_7);

 if (VAR_8 == 0)
  VAR_8 = VAR_0;
 else
  VAR_10 = FUNC_1(VAR_10, *(u_char *)VAR_8);
 VAR_9 = VAR_6 + VAR_10; VAR_8 += VAR_3; VAR_7 += VAR_3;
 for (VAR_6 += VAR_3; VAR_6 < VAR_9; VAR_6++, VAR_7++, VAR_8++)
  if ((*VAR_6 ^ *VAR_7) & *VAR_8)
   return 0;

 return (FUNC_0(VAR_2, VAR_4, VAR_5));
}
