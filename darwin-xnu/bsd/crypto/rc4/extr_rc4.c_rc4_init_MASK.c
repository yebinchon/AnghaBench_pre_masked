
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_char ;
struct rc4_state {size_t* perm; scalar_t__ index2; scalar_t__ index1; } ;


 int FUNC_0 (size_t const*,size_t const*) ;

void
FUNC_1(struct rc4_state *const VAR_0, const u_char *VAR_1, int VAR_2)
{
 u_char VAR_3;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
  VAR_0->perm[VAR_4] = (u_char)VAR_4;
 VAR_0->index1 = 0;
 VAR_0->index2 = 0;


 for (VAR_3 = VAR_4 = 0; VAR_4 < 256; VAR_4++) {
  VAR_3 += VAR_0->perm[VAR_4] + VAR_1[VAR_4 % VAR_2];
  FUNC_0(&VAR_0->perm[VAR_4], &VAR_0->perm[VAR_3]);
 }
}
