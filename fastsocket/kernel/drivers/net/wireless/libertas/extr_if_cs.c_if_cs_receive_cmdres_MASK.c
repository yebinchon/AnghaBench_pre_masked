
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct lbs_private {int driver_lock; int dnld_sent; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct lbs_private *VAR_7, u8 *VAR_8, u32 *VAR_9)
{
 unsigned long VAR_10;
 int VAR_11 = -1;
 u16 VAR_12;

 FUNC_3(VAR_6);


 VAR_12 = FUNC_0(VAR_7->card, VAR_2);
 if ((VAR_12 & VAR_1) == 0) {
  FUNC_5("no cmd response in card\n");
  *VAR_9 = 0;
  goto out;
 }

 *VAR_9 = FUNC_0(VAR_7->card, VAR_4);
 if ((*VAR_9 == 0) || (*VAR_9 > VAR_5)) {
  FUNC_5("card cmd buffer has invalid # of bytes (%d)\n", *VAR_9);
  goto out;
 }


 FUNC_1(VAR_7->card, VAR_3, VAR_8, *VAR_9/sizeof(u16));
 if (*VAR_9 & 1)
  VAR_8[*VAR_9-1] = FUNC_2(VAR_7->card, VAR_3);



 *VAR_9 -= 8;
 VAR_11 = 0;


 FUNC_6(&VAR_7->driver_lock, VAR_10);
 VAR_7->dnld_sent = VAR_0;
 FUNC_7(&VAR_7->driver_lock, VAR_10);

out:
 FUNC_4(VAR_6, "ret %d, len %d", VAR_11, *VAR_9);
 return VAR_11;
}
