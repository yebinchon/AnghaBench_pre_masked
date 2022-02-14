
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_host {int lock; scalar_t__* iomap; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ata_host*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct ata_host *VAR_4 = VAR_3;
 u8 VAR_5;
 irqreturn_t VAR_6;

 FUNC_2(&VAR_4->lock);
 VAR_5 = FUNC_1(VAR_4->iomap[VAR_1] + VAR_0);
 VAR_6 = FUNC_0(VAR_4, VAR_5);
 FUNC_3(&VAR_4->lock);

 return VAR_6;
}
