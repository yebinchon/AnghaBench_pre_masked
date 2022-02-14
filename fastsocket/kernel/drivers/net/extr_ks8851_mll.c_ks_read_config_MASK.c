
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ks_net {int sharedbus; int extra_byte; int bus_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ks_net*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ks_net *VAR_7)
{
 u16 VAR_8 = 0;


 VAR_8 = FUNC_0(VAR_7, VAR_6) & 0x00FF;
 VAR_8 |= FUNC_0(VAR_7, VAR_6+1) << 8;


 VAR_7->sharedbus = (VAR_8 & VAR_2) == VAR_2;





 if (VAR_8 & VAR_1) {
  VAR_7->bus_width = VAR_5;
  VAR_7->extra_byte = 1;
 } else if (VAR_8 & VAR_0) {
  VAR_7->bus_width = VAR_3;
  VAR_7->extra_byte = 2;
 } else {
  VAR_7->bus_width = VAR_4;
  VAR_7->extra_byte = 4;
 }
}
