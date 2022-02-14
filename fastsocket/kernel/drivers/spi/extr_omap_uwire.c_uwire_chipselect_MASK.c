
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uwire_state {int div1_idx; } ;
struct spi_device {int chip_select; int mode; struct uwire_state* controller_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct spi_device *VAR_7, int VAR_8)
{
 struct uwire_state *VAR_9 = VAR_7->controller_state;
 u16 VAR_10;
 int VAR_11;


 FUNC_0(FUNC_4(VAR_2, 0, 0));

 VAR_10 = FUNC_1(VAR_5);
 VAR_11 = (VAR_10 >> 10) & 0x03;
 if (VAR_8 == VAR_1 || VAR_11 != VAR_7->chip_select) {

  VAR_10 &= ~VAR_3;
  FUNC_3(VAR_5, VAR_10);
 }

 if (VAR_8 == VAR_0) {
  FUNC_2(VAR_9->div1_idx);

  if (VAR_7->mode & VAR_4)
   FUNC_3(VAR_6, 1);
  else
   FUNC_3(VAR_6, 0);

  VAR_10 = VAR_7->chip_select << 10;
  VAR_10 |= VAR_3;
  FUNC_3(VAR_5, VAR_10);
 }
}
