
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int locality; scalar_t__ iobase; int read_queue; int timeout_c; } ;
struct tpm_chip {TYPE_1__ vendor; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct tpm_chip*,int,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct tpm_chip *VAR_2, u8 *VAR_3, size_t VAR_4)
{
 int VAR_5 = 0, VAR_6;
 while (VAR_5 < VAR_4 &&
        FUNC_3(VAR_2,
     VAR_0 | VAR_1,
     VAR_2->vendor.timeout_c,
     &VAR_2->vendor.read_queue)
        == 0) {
  VAR_6 = FUNC_1(VAR_2);
  for (; VAR_6 > 0 && VAR_5 < VAR_4; VAR_6--)
   VAR_3[VAR_5++] = FUNC_2(VAR_2->vendor.iobase +
           FUNC_0(VAR_2->vendor.
           locality));
 }
 return VAR_5;
}
