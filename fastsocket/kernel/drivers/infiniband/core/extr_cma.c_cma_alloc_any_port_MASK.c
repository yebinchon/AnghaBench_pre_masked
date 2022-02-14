
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_id_private {int dummy; } ;
struct idr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct idr*,struct rdma_id_private*,unsigned int) ;
 int FUNC_1 (struct idr*,unsigned short) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct idr *VAR_1, struct rdma_id_private *VAR_2)
{
 static unsigned int VAR_3;
 int VAR_4, VAR_5, VAR_6;
 unsigned int VAR_7;

 FUNC_2(&VAR_4, &VAR_5);
 VAR_6 = (VAR_5 - VAR_4) + 1;
 VAR_7 = FUNC_3() % VAR_6 + VAR_4;
retry:
 if (VAR_3 != VAR_7 &&
     !FUNC_1(VAR_1, (unsigned short) VAR_7)) {
  int VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_7);




  if (!VAR_8)
   VAR_3 = VAR_7;
  if (VAR_8 != -VAR_0)
   return VAR_8;
 }
 if (--VAR_6) {
  VAR_7++;
  if ((VAR_7 < VAR_4) || (VAR_7 > VAR_5))
   VAR_7 = VAR_4;
  goto retry;
 }
 return -VAR_0;
}
