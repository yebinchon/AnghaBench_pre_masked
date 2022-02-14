
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct z8530_channel {scalar_t__ rxdma_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct z8530_channel*,int ) ;
 int FUNC_1 (struct z8530_channel*,int ) ;
 int FUNC_2 (struct z8530_channel*) ;
 int FUNC_3 (struct z8530_channel*) ;

__attribute__((used)) static void FUNC_4(struct z8530_channel *VAR_6)
{
 if(VAR_6->rxdma_on)
 {

  u8 VAR_7;

  FUNC_0(VAR_6, VAR_4);
  FUNC_0(VAR_6, VAR_3);

  VAR_7=FUNC_0(VAR_6, VAR_2);

  if(VAR_7&VAR_0)
  {
   FUNC_3(VAR_6);
  }
  FUNC_1(VAR_6, VAR_1);
  FUNC_1(VAR_6, VAR_5);
 }
 else
 {

  FUNC_2(VAR_6);
 }
}
