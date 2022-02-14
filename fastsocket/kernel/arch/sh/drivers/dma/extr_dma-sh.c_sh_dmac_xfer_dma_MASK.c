
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_channel {int flags; int sar; size_t chan; int dar; int count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dma_channel*) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__* VAR_5 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct dma_channel*,int ) ;
 int FUNC_4 (struct dma_channel*) ;
 int FUNC_5 (struct dma_channel*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct dma_channel *VAR_6)
{




 if (FUNC_6(!(VAR_6->flags & VAR_1)))
  FUNC_3(VAR_6, 0);

 FUNC_4(VAR_6);
 if (VAR_6->sar || (FUNC_2() &&
     VAR_6->chan == VAR_2))
  FUNC_1(VAR_6->sar, (VAR_5[VAR_6->chan]+VAR_3));
 if (VAR_6->dar || (FUNC_2() &&
     VAR_6->chan == VAR_2))
  FUNC_1(VAR_6->dar, (VAR_5[VAR_6->chan] + VAR_0));

 FUNC_1(VAR_6->count >> FUNC_0(VAR_6),
  (VAR_5[VAR_6->chan] + VAR_4));

 FUNC_5(VAR_6);

 return 0;
}
