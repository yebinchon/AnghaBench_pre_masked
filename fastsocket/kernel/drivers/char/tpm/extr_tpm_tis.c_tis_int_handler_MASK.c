
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int locality; scalar_t__ iobase; int int_queue; int read_queue; } ;
struct tpm_chip {TYPE_1__ vendor; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tpm_chip*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct tpm_chip *VAR_8 = VAR_7;
 u32 VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_8->vendor.iobase +
        FUNC_0(VAR_8->vendor.locality));

 if (VAR_9 == 0)
  return VAR_1;

 if (VAR_9 & VAR_3)
  FUNC_4(&VAR_8->vendor.read_queue);
 if (VAR_9 & VAR_4)
  for (VAR_10 = 0; VAR_10 < 5; VAR_10++)
   if (FUNC_1(VAR_8, VAR_10) >= 0)
    break;
 if (VAR_9 &
     (VAR_4 | VAR_5 |
      VAR_2))
  FUNC_4(&VAR_8->vendor.int_queue);


 FUNC_3(VAR_9,
    VAR_8->vendor.iobase +
    FUNC_0(VAR_8->vendor.locality));
 FUNC_2(VAR_8->vendor.iobase + FUNC_0(VAR_8->vendor.locality));
 return VAR_0;
}
