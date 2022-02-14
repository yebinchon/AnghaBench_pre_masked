
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int kpc_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;
 int** VAR_5 ;

__attribute__((used)) static void
FUNC_9(uint32_t VAR_6, kpc_config_t VAR_7)
{
 uint64_t VAR_8 = 0;
 int VAR_9 = FUNC_8();

 if (VAR_7 & VAR_0) {
  VAR_8 |= FUNC_0(VAR_6);
 }
 if (VAR_7 & VAR_1) {
  VAR_8 |= FUNC_1(VAR_6);
 }
 if (VAR_7 & VAR_2) {
  VAR_8 |= FUNC_2(VAR_6);
 }

 if (VAR_7 & VAR_3) {
  VAR_8 |= FUNC_3(VAR_6);
 }







 if (VAR_8 == 0 && VAR_7 != 0) {
  VAR_8 = FUNC_5(VAR_6);
 }

 uint64_t VAR_10 = FUNC_6(VAR_4);
 VAR_10 &= FUNC_4(VAR_6);
 VAR_10 |= VAR_8;
 VAR_10 |= 0x30303;
 FUNC_7(VAR_4, VAR_10);
 VAR_5[VAR_9][1] = VAR_10;
}
