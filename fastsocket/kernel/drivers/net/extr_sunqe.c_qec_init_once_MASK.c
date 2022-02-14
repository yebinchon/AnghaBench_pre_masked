
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sunqec {int qec_bursts; scalar_t__ gregs; } ;
struct of_device {int * resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sunqec *VAR_11, struct of_device *VAR_12)
{
 u8 VAR_13 = VAR_11->qec_bursts;

 if (FUNC_1() && (VAR_13 & VAR_1)) {
  FUNC_2(VAR_5, VAR_11->gregs + VAR_2);
 } else if (VAR_13 & VAR_0) {
  FUNC_2(VAR_4, VAR_11->gregs + VAR_2);
 } else {
  FUNC_2(VAR_3, VAR_11->gregs + VAR_2);
 }




 FUNC_2(VAR_8, VAR_11->gregs + VAR_7);


 FUNC_2((FUNC_0(&VAR_12->resource[1]) >> 2),
      VAR_11->gregs + VAR_6);




 FUNC_2((FUNC_0(&VAR_12->resource[1]) >> 2) >> 1,
      VAR_11->gregs + VAR_10);
 FUNC_2((FUNC_0(&VAR_12->resource[1]) >> 2) >> 1,
      VAR_11->gregs + VAR_9);
}
