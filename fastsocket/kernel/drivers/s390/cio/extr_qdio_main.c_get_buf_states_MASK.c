
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* val; } ;
struct qdio_q {TYPE_1__ slsb; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ FUNC_1 (struct qdio_q*) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct qdio_q*,unsigned char*,unsigned int,unsigned int,int) ;

__attribute__((used)) static inline int FUNC_4(struct qdio_q *VAR_4, unsigned int VAR_5,
     unsigned char *VAR_6, unsigned int VAR_7,
     int VAR_8, int VAR_9)
{
 unsigned char VAR_10 = 0;
 int VAR_11;

 FUNC_0(VAR_5 > VAR_0);
 FUNC_0(VAR_7 > VAR_1);

 if (FUNC_1(VAR_4))
  return FUNC_3(VAR_4, VAR_6, VAR_5, VAR_7, VAR_8);

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  if (!VAR_10) {
   VAR_10 = VAR_4->slsb.val[VAR_5];
   if (VAR_9 && VAR_10 == VAR_3)
    VAR_10 = VAR_2;
  } else if (VAR_9) {
   if ((VAR_4->slsb.val[VAR_5] & VAR_10) != VAR_10)
    break;
  } else if (VAR_4->slsb.val[VAR_5] != VAR_10)
   break;
  VAR_5 = FUNC_2(VAR_5);
 }
 *VAR_6 = VAR_10;
 return VAR_11;
}
