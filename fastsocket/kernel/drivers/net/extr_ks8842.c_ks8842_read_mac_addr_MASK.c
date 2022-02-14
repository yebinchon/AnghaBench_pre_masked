
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ks8842_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ks8842_adapter*,int,scalar_t__) ;
 int FUNC_1 (struct ks8842_adapter*,int,scalar_t__) ;
 int FUNC_2 (struct ks8842_adapter*,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ks8842_adapter *VAR_7, u8 *VAR_8)
{
 int VAR_9;
 u16 VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  VAR_8[VAR_0 - VAR_9 - 1] = FUNC_1(VAR_7, 2, VAR_5 + VAR_9);


 VAR_10 = FUNC_0(VAR_7, 2, VAR_5);
 FUNC_2(VAR_7, 39, VAR_10, VAR_1);
 VAR_10 = FUNC_0(VAR_7, 2, VAR_6);
 FUNC_2(VAR_7, 39, VAR_10, VAR_2);
 VAR_10 = FUNC_0(VAR_7, 2, VAR_4);
 FUNC_2(VAR_7, 39, VAR_10, VAR_3);
}
