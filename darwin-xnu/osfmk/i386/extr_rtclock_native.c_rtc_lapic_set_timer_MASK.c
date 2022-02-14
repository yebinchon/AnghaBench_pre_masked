
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static uint64_t
FUNC_6(uint64_t VAR_7, uint64_t VAR_8)
{
 uint64_t VAR_9;
 uint64_t VAR_10 = 0;

 if (VAR_7 > 0) {




  VAR_9 = FUNC_2(VAR_7, VAR_8);
  VAR_10 = VAR_8 + VAR_9;
  FUNC_4((uint32_t) FUNC_5(VAR_9, VAR_4));
 } else {
  FUNC_3(VAR_2, VAR_6, VAR_5, 0);
 }

 FUNC_0(
  VAR_1 | VAR_0,
  VAR_8, VAR_7,
  VAR_10, FUNC_1(VAR_3),
  0);

 return VAR_10;
}
