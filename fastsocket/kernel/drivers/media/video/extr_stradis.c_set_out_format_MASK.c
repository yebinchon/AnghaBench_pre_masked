
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146 {int* boardcfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct saa7146*,int ,int ,int,int) ;
 int FUNC_1 (struct saa7146*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct saa7146 *VAR_10, int VAR_11)
{
 FUNC_1(VAR_10, (VAR_11 == VAR_6 ? 0 : 1));
 VAR_10->boardcfg[2] = VAR_11;


 if (VAR_11 == VAR_7) {
  FUNC_0(VAR_10, VAR_9, VAR_8, 0x0808, 2);
  FUNC_2(50);
  FUNC_3(0x012002c0, VAR_5);
  if (VAR_3) {
   FUNC_0(VAR_10, VAR_9, VAR_1, 0xe100, 2);
   FUNC_2(50);
  }
  FUNC_0(VAR_10, VAR_9, VAR_1,
     VAR_3 ? 0xe500 : 0x6500, 2);
  FUNC_0(VAR_10, VAR_9, VAR_0,
     (1 << 8) |
     (VAR_3 ? VAR_4 : VAR_4 - 6), 2);
 } else {
  FUNC_0(VAR_10, VAR_9, VAR_8, 0x0800, 2);
  FUNC_2(50);
  FUNC_3(0x00f002c0, VAR_5);
  FUNC_0(VAR_10, VAR_9, VAR_1,
     VAR_3 ? 0xe100 : 0x6100, 2);
  FUNC_0(VAR_10, VAR_9, VAR_0,
     (1 << 8) |
     (VAR_3 ? VAR_2 : VAR_2 - 6), 2);
 }
}
