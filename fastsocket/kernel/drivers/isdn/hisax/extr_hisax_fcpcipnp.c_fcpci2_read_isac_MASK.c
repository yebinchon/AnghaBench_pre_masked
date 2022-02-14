
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {struct fritz_adapter* priv; } ;
struct fritz_adapter {int hw_lock; scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,unsigned char,unsigned char) ;
 unsigned char FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned char,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static unsigned char FUNC_5(struct isac *VAR_2, unsigned char VAR_3)
{
 struct fritz_adapter *VAR_4 = VAR_2->priv;
 unsigned char VAR_5;
 unsigned long VAR_6;

 FUNC_3(&VAR_4->hw_lock, VAR_6);
 FUNC_2(VAR_3, VAR_4->io + VAR_1);
 VAR_5 = FUNC_1(VAR_4->io + VAR_0);
  FUNC_4(&VAR_4->hw_lock, VAR_6);
 FUNC_0(0x1000, " port %#x, value %#x",
     VAR_3, VAR_5);

 return VAR_5;
}
