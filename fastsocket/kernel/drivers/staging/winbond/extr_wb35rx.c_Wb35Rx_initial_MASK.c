
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_rx {int RxUrb; } ;
struct hw_data {struct wb35_rx Wb35Rx; } ;


 int VAR_0 ;
 int FUNC_0 (struct hw_data*) ;
 int FUNC_1 (int ,int ) ;

unsigned char FUNC_2(struct hw_data * VAR_1)
{
 struct wb35_rx *VAR_2 = &VAR_1->Wb35Rx;


 FUNC_0( VAR_1 );

 VAR_2->RxUrb = FUNC_1(0, VAR_0);
 return (!!VAR_2->RxUrb);
}
