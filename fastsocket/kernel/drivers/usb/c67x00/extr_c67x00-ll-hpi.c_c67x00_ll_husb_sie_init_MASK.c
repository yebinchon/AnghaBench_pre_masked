
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c67x00_sie {int sie_num; struct c67x00_device* dev; } ;
struct c67x00_lcp_int_data {int dummy; } ;
struct c67x00_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct c67x00_device*,int ,struct c67x00_lcp_int_data*) ;

__attribute__((used)) static inline void FUNC_3(struct c67x00_sie *VAR_0)
{
 struct c67x00_device *VAR_1 = VAR_0->dev;
 struct c67x00_lcp_int_data VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, FUNC_1(VAR_0->sie_num), &VAR_2);
 FUNC_0(VAR_3);
}
