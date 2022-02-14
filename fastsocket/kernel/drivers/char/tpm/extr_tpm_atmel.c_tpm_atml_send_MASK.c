
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int iobase; } ;
struct tpm_chip {TYPE_1__ vendor; int dev; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct tpm_chip *VAR_0, u8 *VAR_1, size_t VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0->dev, "tpm_atml_send:\n");
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_0(VAR_0->dev, "%d 0x%x(%d)\n", VAR_3, VAR_1[VAR_3], VAR_1[VAR_3]);
   FUNC_1(VAR_1[VAR_3], VAR_0->vendor.iobase);
 }

 return VAR_2;
}
