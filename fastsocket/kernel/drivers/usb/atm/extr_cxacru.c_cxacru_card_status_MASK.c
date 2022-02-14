
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxacru_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxacru_data*,int ,int *,int ,int *,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct cxacru_data *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1, VAR_0, ((void*)0), 0, ((void*)0), 0);
 if (VAR_2 < 0) {
  FUNC_1("cxacru_adsl_start: CARD_GET_STATUS returned %d", VAR_2);
  return VAR_2;
 }
 return 0;
}
