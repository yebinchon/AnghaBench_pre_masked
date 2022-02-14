
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * val; } ;
struct qdio_q {TYPE_1__ slsb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct qdio_q*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct qdio_q*,unsigned char,int,int) ;
 int FUNC_4 (int *,unsigned char) ;

__attribute__((used)) static inline int FUNC_5(struct qdio_q *VAR_2, int VAR_3,
     unsigned char VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_3 > VAR_0);
 FUNC_0(VAR_5 > VAR_1);

 if (FUNC_1(VAR_2))
  return FUNC_3(VAR_2, VAR_4, VAR_3, VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  FUNC_4(&VAR_2->slsb.val[VAR_3], VAR_4);
  VAR_3 = FUNC_2(VAR_3);
 }
 return VAR_5;
}
