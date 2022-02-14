
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_hw {scalar_t__ chip_id; scalar_t__ copper; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static u32 FUNC_0(const struct skge_hw *VAR_11)
{
 u32 VAR_12;

 if (VAR_11->copper) {
  VAR_12 = VAR_7
   | VAR_6
   | VAR_5
   | VAR_4
   | VAR_3
   | VAR_2
   | VAR_8| VAR_10;

  if (VAR_11->chip_id == VAR_0)
   VAR_12 &= ~(VAR_7
          | VAR_6
          | VAR_5
          | VAR_4);

  else if (VAR_11->chip_id == VAR_1)
   VAR_12 &= ~VAR_3;
 } else
  VAR_12 = VAR_2 | VAR_3
   | VAR_9 | VAR_8;

 return VAR_12;
}
