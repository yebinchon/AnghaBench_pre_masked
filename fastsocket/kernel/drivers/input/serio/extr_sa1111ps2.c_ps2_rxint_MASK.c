
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2if {scalar_t__ base; int io; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_8, void *VAR_9)
{
 struct ps2if *VAR_10 = VAR_9;
 unsigned int VAR_11, VAR_12, VAR_13;

 VAR_13 = FUNC_1(VAR_10->base + VAR_5);
 while (VAR_13 & VAR_1) {
  if (VAR_13 & VAR_3)
   FUNC_2(VAR_3, VAR_10->base + VAR_5);

  VAR_12 = (VAR_13 & VAR_3 ? VAR_6 : 0) |
         (VAR_13 & VAR_2 ? 0 : VAR_7);

  VAR_11 = FUNC_1(VAR_10->base + VAR_4) & 0xff;

  if (FUNC_0(VAR_11) & 1)
   VAR_12 ^= VAR_7;

  FUNC_3(VAR_10->io, VAR_11, VAR_12);

  VAR_13 = FUNC_1(VAR_10->base + VAR_5);
        }

        return VAR_0;
}
