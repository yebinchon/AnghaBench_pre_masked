
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ene_device {scalar_t__ hw_io; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ene_device *VAR_2, u16 VAR_3)
{
 FUNC_0(VAR_3 >> 8, VAR_2->hw_io + VAR_0);
 FUNC_0(VAR_3 & 0xFF, VAR_2->hw_io + VAR_1);
}
