
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;
struct s390_sha_ctx {unsigned int count; int const* buf; int state; int func; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int const*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int const*,int const*,unsigned int) ;
 struct s390_sha_ctx* FUNC_4 (struct shash_desc*) ;

int FUNC_5(struct shash_desc *VAR_0, const u8 *VAR_1, unsigned int VAR_2)
{
 struct s390_sha_ctx *VAR_3 = FUNC_4(VAR_0);
 unsigned int VAR_4 = FUNC_2(VAR_0->tfm);
 unsigned int VAR_5;
 int VAR_6;


 VAR_5 = VAR_3->count & (VAR_4 - 1);
 VAR_3->count += VAR_2;

 if ((VAR_5 + VAR_2) < VAR_4)
  goto store;


 if (VAR_5) {
  FUNC_3(VAR_3->buf + VAR_5, VAR_1, VAR_4 - VAR_5);
  VAR_6 = FUNC_1(VAR_3->func, VAR_3->state, VAR_3->buf, VAR_4);
  FUNC_0(VAR_6 != VAR_4);
  VAR_1 += VAR_4 - VAR_5;
  VAR_2 -= VAR_4 - VAR_5;
  VAR_5 = 0;
 }


 if (VAR_2 >= VAR_4) {
  VAR_6 = FUNC_1(VAR_3->func, VAR_3->state, VAR_1,
          VAR_2 & ~(VAR_4 - 1));
  FUNC_0(VAR_6 != (VAR_2 & ~(VAR_4 - 1)));
  VAR_1 += VAR_6;
  VAR_2 -= VAR_6;
 }
store:
 if (VAR_2)
  FUNC_3(VAR_3->buf + VAR_5 , VAR_1, VAR_2);

 return 0;
}
