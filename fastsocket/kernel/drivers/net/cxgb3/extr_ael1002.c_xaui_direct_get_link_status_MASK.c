
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prtad; } ;
struct cphy {int adapter; TYPE_1__ mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 unsigned int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_7, int *VAR_8,
           int *VAR_9, int *VAR_10, int *VAR_11)
{
 if (VAR_8) {
  unsigned int VAR_12;
  int VAR_13 = VAR_7->mdio.prtad;

  VAR_12 = FUNC_1(VAR_7->adapter,
         FUNC_0(VAR_0, VAR_13)) |
      FUNC_1(VAR_7->adapter,
        FUNC_0(VAR_1, VAR_13)) |
      FUNC_1(VAR_7->adapter,
    FUNC_0(VAR_2, VAR_13)) |
      FUNC_1(VAR_7->adapter,
    FUNC_0(VAR_3, VAR_13));
  *VAR_8 = !(VAR_12 & VAR_5);
 }
 if (VAR_9)
  *VAR_9 = VAR_6;
 if (VAR_10)
  *VAR_10 = VAR_4;
 return 0;
}
