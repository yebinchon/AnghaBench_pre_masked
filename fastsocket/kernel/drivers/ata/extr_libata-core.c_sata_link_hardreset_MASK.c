
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_link {int ap; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct ata_link*) ;
 int FUNC_3 (struct ata_link*,int ,char*,int) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (struct ata_link*) ;
 int FUNC_6 (struct ata_link*,unsigned long,int (*) (struct ata_link*)) ;
 int VAR_4 ;
 int FUNC_7 (struct ata_link*,unsigned long const*,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct ata_link*,int ,int*) ;
 int FUNC_10 (struct ata_link*,int ,int) ;
 int FUNC_11 (struct ata_link*,int ,int) ;
 int FUNC_12 (struct ata_link*) ;
 scalar_t__ FUNC_13 (struct ata_link*) ;
 scalar_t__ FUNC_14 (unsigned long,unsigned long) ;

int FUNC_15(struct ata_link *VAR_5, const unsigned long *VAR_6,
   unsigned long VAR_7,
   bool *VAR_8, int (*VAR_9)(struct ata_link *))
{
 u32 VAR_10;
 int VAR_11;

 FUNC_0("ENTER\n");

 if (VAR_8)
  *VAR_8 = 0;

 if (FUNC_13(VAR_5)) {





  if ((VAR_11 = FUNC_9(VAR_5, VAR_3, &VAR_10)))
   goto out;

  VAR_10 = (VAR_10 & 0x0f0) | 0x304;

  if ((VAR_11 = FUNC_10(VAR_5, VAR_3, VAR_10)))
   goto out;

  FUNC_12(VAR_5);
 }


 if ((VAR_11 = FUNC_9(VAR_5, VAR_3, &VAR_10)))
  goto out;

 VAR_10 = (VAR_10 & 0x0f0) | 0x301;

 if ((VAR_11 = FUNC_11(VAR_5, VAR_3, VAR_10)))
  goto out;




 FUNC_4(VAR_5->ap, 1);


 VAR_11 = FUNC_7(VAR_5, VAR_6, VAR_7);
 if (VAR_11)
  goto out;

 if (FUNC_5(VAR_5))
  goto out;


 if (VAR_8)
  *VAR_8 = 1;

 if (FUNC_8(VAR_5->ap) && FUNC_2(VAR_5)) {





  if (VAR_9) {
   unsigned long VAR_12;

   VAR_12 = FUNC_1(VAR_4,
          VAR_0);
   if (FUNC_14(VAR_12, VAR_7))
    VAR_12 = VAR_7;
   FUNC_6(VAR_5, VAR_12, VAR_9);
  }
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_11 = 0;
 if (VAR_9)
  VAR_11 = FUNC_6(VAR_5, VAR_7, VAR_9);
 out:
 if (VAR_11 && VAR_11 != -VAR_1) {

  if (VAR_8)
   *VAR_8 = 0;
  FUNC_3(VAR_5, VAR_2,
    "COMRESET failed (errno=%d)\n", VAR_11);
 }
 FUNC_0("EXIT, rc=%d\n", VAR_11);
 return VAR_11;
}
