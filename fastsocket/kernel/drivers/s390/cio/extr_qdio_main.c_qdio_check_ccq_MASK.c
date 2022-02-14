
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_q {int dummy; } ;


 int FUNC_0 (char*,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct qdio_q*) ;

__attribute__((used)) static inline int FUNC_2(struct qdio_q *VAR_1, unsigned int VAR_2)
{

 if (VAR_2 == 0 || VAR_2 == 32)
  return 0;

 if (VAR_2 == 97)
  return 1;

 if (VAR_2 == 96)
  return 2;

 FUNC_0("%4x ccq:%3d", FUNC_1(VAR_1), VAR_2);
 return -VAR_0;
}
