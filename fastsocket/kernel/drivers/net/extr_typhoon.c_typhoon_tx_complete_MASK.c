
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct typhoon {int dev; } ;
struct transmit_ring {int lastRead; int lastWrite; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct typhoon*,struct transmit_ring*,int volatile*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct typhoon *VAR_2, struct transmit_ring *VAR_3,
   volatile __le32 * VAR_4)
{
 u32 VAR_5;
 int VAR_6 = VAR_0 + 1;


 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if(FUNC_0(VAR_2->dev) && FUNC_4(VAR_3->lastWrite,
    VAR_5, VAR_1) > (VAR_6 + 2))
  FUNC_1(VAR_2->dev);

 VAR_3->lastRead = VAR_5;
 FUNC_2();
}
