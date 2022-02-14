
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hifn_device {int dmareg; int rngtime; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct hifn_device*,int ) ;
 int FUNC_2 (struct hifn_device*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct hifn_device *VAR_9)
{
 int VAR_10;

 FUNC_2(VAR_9, VAR_2, FUNC_1(VAR_9, VAR_2) |
   VAR_7);

 for (VAR_10=100; VAR_10 > 0; --VAR_10) {
  FUNC_4(1);

  if ((FUNC_1(VAR_9, VAR_2) & VAR_7) == 0)
   break;
 }

 if (!VAR_10)
  FUNC_0("Chip %s: Failed to initialise public key engine.\n",
    VAR_9->name);
 else {
  FUNC_2(VAR_9, VAR_1, VAR_6);
  VAR_9->dmareg |= VAR_5;
  FUNC_2(VAR_9, VAR_0, VAR_9->dmareg);

  FUNC_0("Chip %s: Public key engine has been sucessfully "
    "initialised.\n", VAR_9->name);
 }





 FUNC_2(VAR_9, VAR_3,
   FUNC_1(VAR_9, VAR_3) | VAR_8);
 FUNC_0("Chip %s: RNG engine has been successfully initialised.\n",
   VAR_9->name);






 return 0;
}
