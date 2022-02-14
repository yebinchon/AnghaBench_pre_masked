
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct intel_dvo_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct intel_dvo_device*,int ,int*) ;
 int FUNC_1 (struct intel_dvo_device*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct intel_dvo_device *VAR_8, bool VAR_9)
{
 uint8_t VAR_10;

 FUNC_0(VAR_8, VAR_4, &VAR_10);


 FUNC_1(VAR_8, VAR_6,
   VAR_0 |
   VAR_1 |
   VAR_2 |
   VAR_3 |
   VAR_7);

 if (VAR_9) {

  FUNC_1(VAR_8, VAR_4,
        VAR_10 & ~VAR_5);
 } else {

  FUNC_1(VAR_8, VAR_4,
        VAR_10 | VAR_5);
 }


 FUNC_2(20);
}
