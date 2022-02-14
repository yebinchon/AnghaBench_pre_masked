
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ah {int dummy; } ;
struct mthca_ah {struct ib_ah ibah; } ;
struct ib_pd {int device; } ;
struct ib_ah_attr {int dummy; } ;


 int VAR_0 ;
 struct ib_ah* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mthca_ah*) ;
 struct mthca_ah* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,struct ib_ah_attr*,struct mthca_ah*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ib_pd*) ;

__attribute__((used)) static struct ib_ah *FUNC_6(struct ib_pd *VAR_2,
         struct ib_ah_attr *VAR_3)
{
 int VAR_4;
 struct mthca_ah *VAR_5;

 VAR_5 = FUNC_2(sizeof *VAR_5, VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_3(FUNC_4(VAR_2->device), FUNC_5(VAR_2), VAR_3, VAR_5);
 if (VAR_4) {
  FUNC_1(VAR_5);
  return FUNC_0(VAR_4);
 }

 return &VAR_5->ibah;
}
