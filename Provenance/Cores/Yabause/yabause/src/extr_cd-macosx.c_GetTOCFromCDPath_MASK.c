
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ io_object_t ;
typedef int io_iterator_t ;
typedef int UInt8 ;
typedef int CFMutableDictionaryRef ;
typedef int CFDataRef ;
typedef int CDTOC ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_11 (int ) ;

__attribute__((used)) static CDTOC * FUNC_12(void)
{
 CFMutableDictionaryRef VAR_6;
 io_iterator_t VAR_7;
 io_object_t VAR_8;
 CDTOC * VAR_9 = ((void*)0);

 VAR_6 = FUNC_10(VAR_2);
 FUNC_2(VAR_6, FUNC_5(VAR_5),
  VAR_1);
 FUNC_9(VAR_4,
  VAR_6, &VAR_7);

 VAR_8 = FUNC_6(VAR_7);

 if(VAR_8)
 {
  CFDataRef VAR_10 = FUNC_8(VAR_8, FUNC_5(VAR_3), VAR_0, 0);
  VAR_9 = FUNC_11(FUNC_1(VAR_10));
  FUNC_0(VAR_10,FUNC_3(0,FUNC_1(VAR_10)),(UInt8 *)VAR_9);
  FUNC_4(VAR_10);
  FUNC_7(VAR_8);
 }

 return VAR_9;
}
