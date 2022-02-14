
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosa_data {int rxbitmap; int txbitmap; int enabled; int lock; int rxtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cosa_data*,int) ;
 int FUNC_1 (struct cosa_data*,int ) ;
 int FUNC_2 (struct cosa_data*,int) ;
 int FUNC_3 (struct cosa_data*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct cosa_data *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 FUNC_4(&VAR_5->lock, VAR_6);

 VAR_7 = (VAR_5->rxbitmap ? VAR_0 : 0)
  | (VAR_5->txbitmap ? VAR_3 : 0)
  | (VAR_5->txbitmap? ~(VAR_5->txbitmap<<VAR_2)
   &VAR_1 : 0);
 if (!VAR_5->rxtx) {
  if (VAR_5->rxbitmap|VAR_5->txbitmap) {
   if (!VAR_5->enabled) {
    FUNC_1(VAR_5, VAR_4);



    VAR_5->enabled = 1;
   }
  } else if (VAR_5->enabled) {
   VAR_5->enabled = 0;
   FUNC_1(VAR_5, 0);



  }
  FUNC_0(VAR_5, VAR_7);



 }
 FUNC_5(&VAR_5->lock, VAR_6);
}
