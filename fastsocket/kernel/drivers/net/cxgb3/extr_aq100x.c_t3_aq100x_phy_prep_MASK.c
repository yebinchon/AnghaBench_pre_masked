
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_ops {int dummy; } ;
struct cphy {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct adapter*,char*,int,...) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct cphy*,struct adapter*,int,int *,struct mdio_ops const*,int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cphy*,int ,int ,unsigned int,int ) ;
 int FUNC_4 (struct cphy*,int ,int ,unsigned int*) ;
 int FUNC_5 (struct adapter*,int ,unsigned int,unsigned int) ;

int FUNC_6(struct cphy *VAR_17, struct adapter *VAR_18, int VAR_19,
         const struct mdio_ops *VAR_20)
{
 unsigned int VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25;

 FUNC_1(VAR_17, VAR_18, VAR_19, &VAR_16, VAR_20,
    VAR_12 | VAR_11 |
    VAR_15 | VAR_14 | VAR_13,
    "1000/10GBASE-T");





 VAR_23 = VAR_19 ? VAR_6 : VAR_7;
 FUNC_5(VAR_18, VAR_5, VAR_23, 0);
 FUNC_2(1);
 FUNC_5(VAR_18, VAR_5, VAR_23, VAR_23);




 FUNC_2(1000);
 VAR_24 = 500;
 do {
  VAR_25 = FUNC_4(VAR_17, VAR_10, VAR_8, &VAR_21);
  if (VAR_25 || VAR_21 == 0xffff) {



   FUNC_0(VAR_18, "PHY%d: reset failed (0x%x, 0x%x).\n",
    VAR_19, VAR_25, VAR_21);
   goto done;
  }

  VAR_21 &= VAR_2;
  if (VAR_21)
   FUNC_2(10);
 } while (VAR_21 && --VAR_24);
 if (VAR_21) {
  FUNC_0(VAR_18, "PHY%d: reset timed out (0x%x).\n",
   VAR_19, VAR_21);

  goto done;
 }


 VAR_24 = (500 - VAR_24) * 10 + 1000;
 if (VAR_24 > 3000)
  FUNC_0(VAR_18, "PHY%d: reset took %ums\n", VAR_19, VAR_24);


 FUNC_4(VAR_17, VAR_10, VAR_0, &VAR_21);
 if (VAR_21 != 101)
  FUNC_0(VAR_18, "PHY%d: unsupported firmware %d\n",
   VAR_19, VAR_21);





 VAR_25 = FUNC_4(VAR_17, VAR_10, VAR_8, &VAR_21);
 if (VAR_25)
  return VAR_25;
 if (VAR_21 & VAR_1) {
  VAR_25 = FUNC_3(VAR_17, VAR_10, VAR_8,
       VAR_1, 0);
  if (VAR_25)
   return VAR_25;
  FUNC_2(10);
 } else
  FUNC_0(VAR_18, "PHY%d does not start in low power mode.\n",
   VAR_19);




 VAR_21 = VAR_22 = 0;
 FUNC_4(VAR_17, VAR_9, VAR_3, &VAR_21);
 FUNC_4(VAR_17, VAR_9, VAR_4, &VAR_22);
 if (VAR_21 != 0x1b || VAR_22 != 0x1b)
  FUNC_0(VAR_18,
   "PHY%d: incorrect XAUI settings (0x%x, 0x%x).\n",
   VAR_19, VAR_21, VAR_22);

done:
 return VAR_25;
}
