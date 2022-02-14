
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp_spi {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct stmp_spi*) ;
 int FUNC_6 (struct stmp_spi*) ;
 int FUNC_7 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct stmp_spi *VAR_9, int VAR_10,
  unsigned char *VAR_11, int VAR_12,
  bool VAR_13, bool VAR_14, bool VAR_15)
{
 if (VAR_13)
  FUNC_6(VAR_9);

 FUNC_3(FUNC_4(VAR_10), VAR_9->regs + VAR_6);

 while (VAR_12--) {
  if (VAR_14 && VAR_12 <= 0)
   FUNC_5(VAR_9);

  FUNC_2(VAR_3,
    VAR_9->regs + VAR_6);
  FUNC_3(1, VAR_9->regs + VAR_6);

  if (VAR_15)
   FUNC_2(VAR_1,
     VAR_9->regs + VAR_6);
  else
   FUNC_3(VAR_1,
     VAR_9->regs + VAR_6);


  FUNC_3(VAR_2, VAR_9->regs + VAR_6);

  if (!FUNC_0(FUNC_1(VAR_9->regs + VAR_6) &
    VAR_2))
   break;

  if (VAR_15)
   FUNC_7(*VAR_11, VAR_9->regs + VAR_7);


  FUNC_3(VAR_0, VAR_9->regs + VAR_6);

  if (!VAR_15) {
   if (FUNC_0((FUNC_1(VAR_9->regs + VAR_8) &
     VAR_4)))
    break;
   *VAR_11 = FUNC_1(VAR_9->regs + VAR_7) & 0xFF;
  }

  if (!FUNC_0(FUNC_1(VAR_9->regs + VAR_6) &
     VAR_2))
   break;


  VAR_11++;
 }

 return VAR_12 < 0 ? 0 : -VAR_5;
}
