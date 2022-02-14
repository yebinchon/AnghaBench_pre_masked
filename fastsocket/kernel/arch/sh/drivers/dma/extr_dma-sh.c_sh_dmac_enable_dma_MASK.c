
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_channel {size_t chan; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__* VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (size_t) ;

__attribute__((used)) static void FUNC_4(struct dma_channel *VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_4[VAR_5->chan] + VAR_0);
 VAR_7 |= VAR_1;

 if (VAR_5->flags & VAR_3)
  VAR_7 |= VAR_2;

 FUNC_1(VAR_7, (VAR_4[VAR_5->chan] + VAR_0));

 if (VAR_5->flags & VAR_3) {
  VAR_6 = FUNC_3(VAR_5->chan);
  FUNC_2(VAR_6);
 }
}
