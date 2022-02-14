
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_channel {int flags; size_t chan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__* VAR_5 ;
 int FUNC_3 (size_t) ;

__attribute__((used)) static void FUNC_4(struct dma_channel *VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 if (VAR_6->flags & VAR_4) {
  VAR_7 = FUNC_3(VAR_6->chan);
  FUNC_2(VAR_7);
 }

 VAR_8 = FUNC_0(VAR_5[VAR_6->chan] + VAR_0);
 VAR_8 &= ~(VAR_1 | VAR_3 | VAR_2);
 FUNC_1(VAR_8, (VAR_5[VAR_6->chan] + VAR_0));
}
