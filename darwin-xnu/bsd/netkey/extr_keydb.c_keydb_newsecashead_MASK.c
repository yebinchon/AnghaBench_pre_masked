
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secashead {int * savtree; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;

struct secashead *
FUNC_5(void)
{
 struct secashead *VAR_6;
 int VAR_7;

 FUNC_0(VAR_5, VAR_0);

 VAR_6 = (struct secashead *)FUNC_2(sizeof(*VAR_6), VAR_2, VAR_1 | VAR_4);
 if (!VAR_6) {
  FUNC_4(VAR_5);
  VAR_6 = (struct secashead *)FUNC_2(sizeof(*VAR_6), VAR_2,
      VAR_3 | VAR_4);
  FUNC_3(VAR_5);
 }
 if (!VAR_6)
  return VAR_6;
 for (VAR_7 = 0; VAR_7 < sizeof(VAR_6->savtree)/sizeof(VAR_6->savtree[0]); VAR_7++)
  FUNC_1(&VAR_6->savtree[VAR_7]);
 return VAR_6;
}
