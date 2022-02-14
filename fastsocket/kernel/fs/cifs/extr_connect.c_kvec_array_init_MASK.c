
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvec {size_t iov_len; size_t iov_base; } ;


 int FUNC_0 (struct kvec*,struct kvec*,int) ;
 int FUNC_1 (size_t,size_t) ;

__attribute__((used)) static unsigned int
FUNC_2(struct kvec *VAR_0, struct kvec *VAR_1, unsigned int VAR_2,
  size_t VAR_3)
{
 size_t VAR_4 = 0;

 while (VAR_3 || !VAR_1->iov_len) {
  int VAR_5 = FUNC_1(VAR_3, VAR_1->iov_len);

  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;
  if (VAR_1->iov_len == VAR_4) {
   VAR_1++;
   VAR_2--;
   VAR_4 = 0;
  }
 }
 FUNC_0(VAR_0, VAR_1, sizeof(*VAR_1) * VAR_2);
 VAR_0->iov_base += VAR_4;
 VAR_0->iov_len -= VAR_4;
 return VAR_2;
}
