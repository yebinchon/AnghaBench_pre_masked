
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bdx_priv {TYPE_1__* ndev; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct bdx_priv*,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct bdx_priv*,int,int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_6(struct bdx_priv *VAR_13)
{
 int VAR_14;

 VAR_0;


 FUNC_4(VAR_13, VAR_4, 0);
 FUNC_5(100);

 FUNC_4(VAR_13, VAR_2, 1);

 FUNC_4(VAR_13, VAR_3, 1);

 for (VAR_14 = 0; VAR_14 < 50; VAR_14++) {
  if (FUNC_2(VAR_13, VAR_8) & 1)
   break;
  FUNC_5(10);
 }
 if (VAR_14 == 50)
  FUNC_1("%s: SW reset timeout. continuing anyway\n",
      VAR_13->ndev->name);


 FUNC_4(VAR_13, VAR_7, 0);
 FUNC_4(VAR_13, VAR_10, 0);
 FUNC_4(VAR_13, VAR_5, 0);
 FUNC_2(VAR_13, VAR_6);


 FUNC_4(VAR_13, VAR_9, 1);

 FUNC_4(VAR_13, VAR_8, 1);

 for (VAR_14 = VAR_11; VAR_14 <= VAR_12; VAR_14 += 0x10)
  FUNC_0("%x = %x\n", VAR_14, FUNC_2(VAR_13, VAR_14) & VAR_1);
 for (VAR_14 = VAR_11; VAR_14 <= VAR_12; VAR_14 += 0x10)
  FUNC_4(VAR_13, VAR_14, 0);

 FUNC_4(VAR_13, VAR_2, 0);

 FUNC_4(VAR_13, VAR_3, 0);

 FUNC_4(VAR_13, VAR_9, 0);

 FUNC_4(VAR_13, VAR_8, 0);



 for (VAR_14 = VAR_11; VAR_14 <= VAR_12; VAR_14 += 0x10)
  FUNC_0("%x = %x\n", VAR_14, FUNC_2(VAR_13, VAR_14) & VAR_1);

 FUNC_3(0);
}
