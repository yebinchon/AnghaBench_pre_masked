
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int ,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (scalar_t__,unsigned char*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static inline int FUNC_6(struct Scsi_Host *VAR_15, unsigned char *VAR_16, int VAR_17)
{
 int VAR_18;
 FUNC_0();
 FUNC_2(VAR_15);

 FUNC_1(VAR_9);
 FUNC_3(VAR_6, VAR_8 | VAR_7);

 if (VAR_15->irq == VAR_10)
  FUNC_3(VAR_3, 0);
 else
  FUNC_3(VAR_3, VAR_0);
 FUNC_3(VAR_2, VAR_17 >> 7);
 for (VAR_18 = 0; VAR_17 > 0; ++VAR_18) {
  FUNC_5(5);

  while (FUNC_1(VAR_3) & VAR_1)
   ++VAR_18;
  FUNC_5(3);
  FUNC_4(VAR_13 + VAR_4, VAR_16, 128);
  VAR_16 += 128;
  VAR_17 -= 128;
 }
 FUNC_5(4);
 while (!(FUNC_1(VAR_3) & VAR_5))
  ++VAR_18;
 FUNC_5(6);

 while (!(FUNC_1(VAR_11) & VAR_12))
  ++VAR_18;
 FUNC_5(7);

 FUNC_3(VAR_6, 0);
 FUNC_5(0);
 if (VAR_18 > VAR_14)
  VAR_14 = VAR_18;
 return (0);
}
