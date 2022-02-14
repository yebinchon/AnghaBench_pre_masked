
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtip_port {scalar_t__ mmio; } ;
struct driver_data {scalar_t__ mmio; int dd_flag; int pdev; struct mtip_port* port; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct driver_data*) ;
 int FUNC_3 (struct driver_data*,int) ;
 int FUNC_4 (struct driver_data*,int) ;
 int FUNC_5 (struct driver_data*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static inline irqreturn_t FUNC_10(struct driver_data *VAR_8)
{
 struct driver_data *VAR_9 = (struct driver_data *) VAR_8;
 struct mtip_port *VAR_10 = VAR_9->port;
 u32 VAR_11, VAR_12;
 int VAR_13 = VAR_2;

 VAR_11 = FUNC_6(VAR_9->mmio + VAR_0);
 if (VAR_11) {
  VAR_13 = VAR_1;


  VAR_12 = FUNC_6(VAR_10->mmio + VAR_7);
  FUNC_9(VAR_12, VAR_10->mmio + VAR_7);


  if (FUNC_0(VAR_12 & VAR_6))
   FUNC_5(VAR_9);

  if (FUNC_8(VAR_12 & VAR_4)) {
   if (FUNC_8(FUNC_1(VAR_9->pdev))) {
    FUNC_2(VAR_9);

    return VAR_1;
   }
   if (FUNC_7(VAR_3,
       &VAR_9->dd_flag))
    return VAR_13;

   FUNC_3(VAR_9, VAR_12 & VAR_4);
  }

  if (FUNC_8(VAR_12 & VAR_5))
   FUNC_4(VAR_9, VAR_12 & VAR_5);
 }


 FUNC_9(VAR_11, VAR_9->mmio + VAR_0);

 return VAR_13;
}
