
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct sha512_state {int* count; int const* buf; int state; } ;


 int FUNC_0 (int const*,int const*,unsigned int) ;
 int FUNC_1 (int ,int const*) ;
 struct sha512_state* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int
FUNC_3(struct shash_desc *VAR_0, const u8 *VAR_1, unsigned int VAR_2)
{
 struct sha512_state *VAR_3 = FUNC_2(VAR_0);

 unsigned int VAR_4, VAR_5, VAR_6;


 VAR_5 = VAR_3->count[0] & 0x7f;


 if ((VAR_3->count[0] += VAR_2) < VAR_2)
  VAR_3->count[1]++;

        VAR_6 = 128 - VAR_5;


 if (VAR_2 >= VAR_6) {
  FUNC_0(&VAR_3->buf[VAR_5], VAR_1, VAR_6);
  FUNC_1(VAR_3->state, VAR_3->buf);

  for (VAR_4 = VAR_6; VAR_4 + 127 < VAR_2; VAR_4+=128)
   FUNC_1(VAR_3->state, &VAR_1[VAR_4]);

  VAR_5 = 0;
 } else {
  VAR_4 = 0;
 }


 FUNC_0(&VAR_3->buf[VAR_5], &VAR_1[VAR_4], VAR_2 - VAR_4);

 return 0;
}
