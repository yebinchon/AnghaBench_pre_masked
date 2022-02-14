
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int CFNumberRef ;
typedef int CFMutableDictionaryRef ;
typedef int CFMutableArrayRef ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(
      CFMutableArrayRef VAR_6,
      uint32_t VAR_7, uint32_t VAR_8)
{
   CFMutableDictionaryRef VAR_9 = FUNC_1(
         VAR_0, 0,
         &VAR_2,
         &VAR_3);
   CFNumberRef VAR_10 = FUNC_3(VAR_0, VAR_1, &VAR_7);
   CFNumberRef VAR_11 = FUNC_3(VAR_0, VAR_1, &VAR_8);

   FUNC_2(VAR_9, FUNC_5(VAR_5), VAR_10);
   FUNC_2(VAR_9, FUNC_5(VAR_4), VAR_11);
   FUNC_0(VAR_6, VAR_9);

   FUNC_4(VAR_10);
   FUNC_4(VAR_11);
   FUNC_4(VAR_9);
}
