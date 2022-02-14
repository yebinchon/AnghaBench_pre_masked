
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uvd {int dp; } ;
typedef int __be16 ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct uvd *VAR_1, u8 *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 struct framehdr {
  __be16 id;
  __be16 len;
 };
 struct framehdr *VAR_6;

 VAR_5 = 0;
 while (VAR_3) {
  VAR_6 = (struct framehdr *) VAR_2;
  VAR_4 = FUNC_1(VAR_6->len);
  VAR_3 -= 4;
  VAR_2 += 4;

  if ((VAR_6->id) == FUNC_2(0x8001)) {
   FUNC_0(&VAR_1->dp, VAR_0, 4);
   VAR_5 += 4;
   continue;
  }
  if ((VAR_6->id & FUNC_2(0xFF00)) == FUNC_2(0x0200)) {
   FUNC_0(&VAR_1->dp, VAR_2, VAR_4);
   VAR_5 += VAR_4;
  }
  VAR_3 -= VAR_4;
  VAR_2 += VAR_4;
 }
 return VAR_5;
}
