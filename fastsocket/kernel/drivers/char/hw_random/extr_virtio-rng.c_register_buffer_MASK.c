
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct scatterlist*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,struct scatterlist*,int ,int,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct scatterlist VAR_4;

 FUNC_1(&VAR_4, VAR_2+VAR_1, VAR_0-VAR_1);

 if (FUNC_2(VAR_3, &VAR_4, 0, 1, VAR_2) < 0)
  FUNC_0();

 FUNC_3(VAR_3);
}
