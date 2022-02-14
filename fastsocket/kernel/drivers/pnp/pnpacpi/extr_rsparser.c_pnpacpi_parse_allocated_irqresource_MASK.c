
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pnp_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int*,int*) ;
 int FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (int *,char*,int,char*,char*) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct pnp_dev*,int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct pnp_dev *VAR_5,
      u32 VAR_6, int VAR_7,
      int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;

 if (!FUNC_6(VAR_6)) {
  FUNC_5(VAR_5, VAR_6, VAR_4);
  return;
 }






 if (!FUNC_0(VAR_6, &VAR_13, &VAR_12)) {
  VAR_13 = VAR_13 ? VAR_3 : VAR_2;
  VAR_12 = VAR_12 ? VAR_1 : VAR_0;

  if (VAR_7 != VAR_13 || VAR_8 != VAR_12) {
   FUNC_2(&VAR_5->dev, "IRQ %d override to %s, %s\n",
    VAR_6, VAR_13 ? "edge":"level", VAR_12 ? "low":"high");
   VAR_7 = VAR_13;
   VAR_8 = VAR_12;
  }
 }

 VAR_11 = FUNC_3(VAR_7, VAR_8, VAR_9);
 VAR_10 = FUNC_1(&VAR_5->dev, VAR_6, VAR_7, VAR_8);
 if (VAR_10 >= 0)
  FUNC_4(VAR_10, 1);
 else
  VAR_11 |= VAR_4;

 FUNC_5(VAR_5, VAR_10, VAR_11);
}
