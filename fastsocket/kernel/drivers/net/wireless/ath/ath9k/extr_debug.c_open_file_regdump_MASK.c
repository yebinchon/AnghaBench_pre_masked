
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct inode {struct ath_softc* i_private; } ;
struct file {int * private_data; } ;
struct ath_softc {int sc_ah; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 scalar_t__ FUNC_4 (int *,unsigned long,char*,int,int ) ;
 int * FUNC_5 (unsigned long) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct file *VAR_3)
{
 struct ath_softc *VAR_4 = VAR_2->i_private;
 unsigned int VAR_5 = 0;
 u8 *VAR_6;
 int VAR_7;
 unsigned long VAR_8, VAR_9, VAR_10;

 VAR_10 = FUNC_0(VAR_4->sc_ah) ? 0x16bd4 : 0xb500;
 VAR_8 = VAR_10 / 4 + 1;
 VAR_9 = VAR_8 * VAR_1 + 1;
 VAR_6 = FUNC_5(VAR_9);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  VAR_5 += FUNC_4(VAR_6 + VAR_5, VAR_9 - VAR_5,
   "0x%06x 0x%08x\n", VAR_7 << 2, FUNC_1(VAR_4->sc_ah, VAR_7 << 2));
 FUNC_2(VAR_4);

 VAR_3->private_data = VAR_6;

 return 0;
}
