
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdricoh_host {int dev; scalar_t__ iobase; } ;


 int FUNC_0 (int ,char*,unsigned int,unsigned short) ;
 int FUNC_1 (unsigned short,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct sdricoh_host *VAR_0, unsigned int VAR_1,
      unsigned short VAR_2)
{
 FUNC_1(VAR_2, VAR_0->iobase + VAR_1);
 FUNC_0(VAR_0->dev, "ww %x 0x%x\n", VAR_1, VAR_2);
}
