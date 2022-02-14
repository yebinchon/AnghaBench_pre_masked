
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_channel {size_t chan; int flags; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static int
FUNC_1(struct dma_channel *VAR_6, unsigned long VAR_7)
{
 if (!VAR_7)
  VAR_7 = VAR_4 | VAR_1;

 if (VAR_7 & VAR_1) {
  VAR_7 &= ~VAR_1;
  VAR_6->flags |= VAR_3;
 } else {
  VAR_6->flags &= ~VAR_3;
 }

 FUNC_0(VAR_7, (VAR_5[VAR_6->chan] + VAR_0));

 VAR_6->flags |= VAR_2;
 return 0;
}
