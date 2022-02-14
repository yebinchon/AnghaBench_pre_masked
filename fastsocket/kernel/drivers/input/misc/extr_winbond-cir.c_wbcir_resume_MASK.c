
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbcir_data {scalar_t__ sbase; scalar_t__ wbase; } ;
struct pnp_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;
 struct wbcir_data* FUNC_1 (struct pnp_dev*) ;
 int FUNC_2 (struct wbcir_data*) ;
 int FUNC_3 (scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_4(struct pnp_dev *VAR_5)
{
 struct wbcir_data *VAR_6 = FUNC_1(VAR_5);


 FUNC_3(VAR_6->wbase + VAR_4, 0x00, 0x07);


 FUNC_3(VAR_6->wbase + VAR_3, 0x00, 0x01);


 FUNC_2(VAR_6);
 FUNC_0(VAR_1 | VAR_0, VAR_6->sbase + VAR_2);

 return 0;
}
