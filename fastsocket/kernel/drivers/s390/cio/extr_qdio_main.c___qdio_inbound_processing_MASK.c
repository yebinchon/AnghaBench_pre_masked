
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_q {int dummy; } ;


 int FUNC_0 (struct qdio_q*) ;
 int FUNC_1 (struct qdio_q*) ;
 int FUNC_2 (struct qdio_q*) ;
 int FUNC_3 (struct qdio_q*) ;
 int FUNC_4 (struct qdio_q*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct qdio_q *VAR_3)
{
 FUNC_4(VAR_3, VAR_0);
again:
 if (!FUNC_1(VAR_3))
  return;

 FUNC_2(VAR_3);

 if (!FUNC_0(VAR_3)) {

  FUNC_4(VAR_3, VAR_1);
  goto again;
 }

 FUNC_3(VAR_3);




 if (!FUNC_0(VAR_3)) {
  FUNC_4(VAR_3, VAR_2);
  goto again;
 }
}
