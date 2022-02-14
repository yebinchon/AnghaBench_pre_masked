
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,char*) ;

__attribute__((used)) static inline bool FUNC_4(struct rt2x00_dev *VAR_4)
{

 if (!FUNC_0(VAR_4) ||
     !FUNC_2(VAR_4, VAR_3))
  return 0;


 if (FUNC_1(VAR_4, VAR_0) ||
     FUNC_1(VAR_4, VAR_1) ||
     FUNC_1(VAR_4, VAR_2))
  return 1;

 FUNC_3(VAR_4, "Unknown RF chipset on rt305x\n");
 return 0;
}
