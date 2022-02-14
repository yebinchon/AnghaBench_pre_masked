
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slib {int dummy; } ;
struct qdio_q {struct slib* slib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 struct qdio_q* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct qdio_q*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct qdio_q **VAR_3, int VAR_4)
{
 struct qdio_q *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = FUNC_2(VAR_2, VAR_1);
  if (!VAR_5)
   return -VAR_0;
  FUNC_0((unsigned long)VAR_5 & 0xff);

  VAR_5->slib = (struct slib *) FUNC_1(VAR_1);
  if (!VAR_5->slib) {
   FUNC_3(VAR_2, VAR_5);
   return -VAR_0;
  }
  FUNC_0((unsigned long)VAR_5->slib & 0x7ff);
  VAR_3[VAR_6] = VAR_5;
 }
 return 0;
}
