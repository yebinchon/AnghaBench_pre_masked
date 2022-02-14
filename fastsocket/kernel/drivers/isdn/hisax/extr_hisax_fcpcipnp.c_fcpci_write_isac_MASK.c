
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {struct fritz_adapter* priv; } ;
struct fritz_adapter {int hw_lock; scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,unsigned char,unsigned char) ;
 int FUNC_1 (unsigned char,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct isac *VAR_4, unsigned char VAR_5,
        unsigned char VAR_6)
{
 struct fritz_adapter *VAR_7 = VAR_4->priv;
 unsigned char VAR_8 = (VAR_5 > 0x2f) ?
  VAR_1 : VAR_2;
 unsigned long VAR_9;

 FUNC_0(0x1000, " port %#x, value %#x",
     VAR_5, VAR_6);
 FUNC_2(&VAR_7->hw_lock, VAR_9);
 FUNC_1(VAR_8, VAR_7->io + VAR_3);
 FUNC_1(VAR_6, VAR_7->io + VAR_0 + (VAR_5 & 0xf));
  FUNC_3(&VAR_7->hw_lock, VAR_9);
}
