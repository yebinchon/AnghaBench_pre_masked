
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosa_data {int rxbitmap; int txbitmap; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cosa_data*,int) ;
 int FUNC_1 (struct cosa_data*,int ) ;
 int FUNC_2 (struct cosa_data*,int) ;
 int FUNC_3 (struct cosa_data*,int ) ;

__attribute__((used)) static void FUNC_4(struct cosa_data *VAR_5)
{
 int VAR_6;

 VAR_6 = (VAR_5->rxbitmap ? VAR_0 : 0)
  | (VAR_5->txbitmap ? VAR_3 : 0)
  | (VAR_5->txbitmap? ~(VAR_5->txbitmap<<VAR_2)
   &VAR_1 : 0);

 if (VAR_5->rxbitmap|VAR_5->txbitmap) {
  FUNC_1(VAR_5, VAR_4);



  VAR_5->enabled = 1;
 } else {
  FUNC_1(VAR_5, 0);



  VAR_5->enabled = 0;
 }
 FUNC_0(VAR_5, VAR_6);



}
